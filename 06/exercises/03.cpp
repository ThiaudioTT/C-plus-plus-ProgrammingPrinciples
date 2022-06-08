/*
This exercise was funny, I get stuck in this. I tried to solve a possible bug (which never exists).

But doing this, I was abble to know more about the algorithm.

Maybe bad implementations are here, idk. But considering my level, I did great, I think.

Try some input = (2-3)!=
(2*3)!=
etc...
*/

#include "../../std_lib_facilities.h"

//------------------------------------------------------------------------------

class Token
{
public:
    char kind;     // what kind of token
    double value;  // for numbers: a value
    Token(char ch) // make a Token from a char
        : kind(ch), value(0)
    {
    }
    Token(char ch, double val) // make a Token from a char and a double
        : kind(ch), value(val)
    {
    }
};

//------------------------------------------------------------------------------

class Token_stream
{
public:
    Token_stream();        // make a Token_stream that reads from cin
    Token get();           // get a Token (get() is defined elsewhere)
    void putback(Token t); // put a Token back
private:
    bool full;    // is there a Token in the buffer?
    Token buffer; // here is where we keep a Token put back using putback()
};

//------------------------------------------------------------------------------

// The constructor just sets full to indicate that the buffer is empty:
Token_stream::Token_stream()
    : full(false), buffer(0) // no Token in buffer
{
}

//------------------------------------------------------------------------------

// The putback() member function puts its argument back into the Token_stream's buffer:
void Token_stream::putback(Token t)
{
    if (full)
        error("putback() into a full buffer");
    buffer = t;  // copy t to buffer
    full = true; // buffer is now full
}

//------------------------------------------------------------------------------

Token Token_stream::get()
{
    if (full)
    { // do we already have a Token ready?
        // remove token from buffer
        full = false;
        return buffer;
    }

    char ch;
    cin >> ch; // note that >> skips whitespace (space, newline, tab, etc.)

    switch (ch)
    {
    case '=': // for "print"
    case 'x': // for "quit"
    case '{': // added brackets
    case '}':
    case '(':
    case ')':
    case '+':
    case '-':
    case '*':
    case '/':
    case '!':
        return Token{ch}; // let each character represent itself
    case '.':
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
    {
        cin.putback(ch); // put digit back into the input stream
        double val;
        cin >> val;             // read a floating-point number
        return Token{'8', val}; // let '8' represent "a number"
    }
    default:
        error("Bad token");
    }
}

//------------------------------------------------------------------------------

Token_stream ts; // provides get() and putback()

//------------------------------------------------------------------------------

double expression(); // declaration so that primary() can call expression()

//------------------------------------------------------------------------------
/*
int factorial(int x)
{

    if (x < 0)
        error("Factorial must be > 0");
    // the caller will deal with bad input
    if (x == 1 || x == 0) // precondition
        return 1;

    int value = x;
    for (int i = 1; (x - i) != 1; i++)
        value = value * (x - i);

    return value;
}
*/
//------------------------------------------------------------------------------

int factorial(int x)
{

    Token f = ts.get();
    if (f.kind == '!')
    {
        if (x < 0)
            error("Factorial must be > 0");

        if (x == 1 || x == 0) // precondition
            return 1;

        int value = x;
        for (int i = 1; (x - i) != 1; i++)
            value = value * (x - i);

        return value;
    }
    
    ts.putback(f);
    return x;
}

// deal with numbers and parentheses
double primary()
{
    Token t = ts.get();
    switch (t.kind)
    {
    case '{': // handle {}
    {
        double d = expression();
        t = ts.get();
        if (t.kind != '}')
            error("'}' expected");

        d = factorial(d);
        return d;
    }
    case '(': // handle '(' expression ')'
    {
        double d = expression();
        t = ts.get();
        if (t.kind != ')')
            error("')' expected");

        d = factorial(d); // check fac
        return d;
    }
    case '8': // deal with factorial and numbers
    {
        /*
        Token f = ts.get();
        if (f.kind == '!')
        {
            if (t.value < 0)
                error("Factorial must be > 0");

            return factorial(t.value);
        }

        ts.putback(f);*/
        t.value = factorial(t.value); // check factorial
        return t.value;
    }
    default:
        error("primary expected");
    }
}

//------------------------------------------------------------------------------

// deal with *, /, and %
double term() // maybe fac comes here
{
    double left = primary();
    Token t = ts.get(); // get the next token from token stream

    while (true)
    {
        switch (t.kind)
        {
        case '*':
            left *= primary();
            t = ts.get();
            break;

        case '/':
        {
            double d = primary();
            if (d == 0)
                error("divide by zero");
            left /= d;
            t = ts.get();
            break;
        }
        default:
            ts.putback(t); // put t back into the token stream
            return left;
        }
    }
}

//------------------------------------------------------------------------------

// deal with + and -
double expression()
{
    double left = term(); // read and evaluate a Term
    Token t = ts.get();   // get the next token from token stream

    while (true)
    {
        switch (t.kind)
        {
        case '+':
            left += term(); // evaluate Term and add
            t = ts.get();
            break;
        case '-':
            left -= term(); // evaluate Term and subtract
            t = ts.get();
            break;
        default:
            ts.putback(t); // put t back into the token stream
            return left;   // finally: no more + or -: return the answer
        }
    }
}

//------------------------------------------------------------------------------

int main()
try
{
    cout << "Welcome to our simple calculator.\nPlease enter expressions using floating-point numbers.\nCommands:\n"
         << "Operators available: + - * /" << endl
         << "Press x to exit" << endl
         << "Put '=' to print the result" << endl;
    double val = 0;
    while (cin)
    {
        Token t = ts.get();

        if (t.kind == 'x')
            break;         // 'x' for quit
        if (t.kind == '=') // ';' for "print now"
            cout << "=" << val << '\n';
        else
            ts.putback(t);
        val = expression();
    }
    keep_window_open();
}
catch (exception &e)
{
    cerr << "error: " << e.what() << '\n';
    keep_window_open();
    return 1;
}
catch (...)
{
    cerr << "Oops: unknown exception!\n";
    keep_window_open();
    return 2;
}

//------------------------------------------------------------------------------