
/**
 * @file 02.cpp
 * @author Thiago A. (`)
 * @brief 
 * @version 0.1
 * @date 2022-06-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "../../std_lib_facilities.h"

struct Token
{ // define Token structure / class
	char kind;
	double value;
	string name;
	Token(char ch) : kind(ch), value(0) {}
	Token(char ch, double val) : kind(ch), value(val) {}
	Token(char ch, string n) : kind{ch}, name{n} {} // a error was here
};

class Token_stream
{ // define token_stream to deal with stream of tokens
public:
	Token_stream() : full(0), buffer(0) {}

	Token get();
	void unget(Token t)
	{
        if(full)
            error("WARNING: buffer already full");

		buffer = t;
		full = true;
	}

	void ignore(char);

private: // probably an error?
	bool full;
	Token buffer;
};

// const vars to use in token_stream.get()
const char let = 'L';
const char quit = 'Q';
const char print = ';';
const char number = '8';
const char name = 'a';
const char assign = '#';

Token Token_stream::get() // get the next token
{
	if (full)
	{
		full = false;
		return buffer;
	}
	char ch;
	cin >> ch;
	switch (ch)
	{
	case quit: // other error here
	case print:
	case '(':
	case ')':
	case '+':
	case '-':
	case '*':
	case '/':
	case '%':
	case '=':
		return Token(ch);
	case assign:
		return Token(assign);
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
		cin.unget();
		double val;
		cin >> val;
		return Token(number, val);
	}
	default:
		if (isalpha(ch) || ch == '_') // added underscores
		{
			string s;
			s += ch;
			while (cin.get(ch) && ( ( isalpha(ch) || isdigit(ch) ) || ch == '_')) // is digit alpha or underscore?
				s += ch; // was a logic bug here
			cin.unget();
			if (s == "let")
				return Token(let);
			if (s == "quit")
				return Token(quit); // error here
			return Token(name, s);
		}
		error("Bad token");
	}
}

void Token_stream::ignore(char c) // function to ignore chars until c
{
	if (full && c == buffer.kind)
	{
		full = false;
		return;
	}
	full = false;

	char ch;
	while (cin >> ch)
		if (ch == c)
			return;
}

struct Variable // struct data to define Variable type.
{
	string name;
	double value;
	Variable(string n, double v) : name(n), value(v) {}
};

vector<Variable> names; // vector to put Variable type into it

double get_value(string s)
{
	for (int i = 0; i < names.size(); ++i)
		if (names[i].name == s)
			return names[i].value;
	error("get: undefined name ", s);
}

void set_value(string s, double d)
{
	for (int i = 0; i < names.size(); ++i)
		if (names[i].name == s)
		{
			names[i].value = d;
			return;
		}
	error("set: undefined name ", s);
}

bool is_declared(string s) // function to know if a variable is already declared
{
	for (int i = 0; i < names.size(); ++i)
		if (names[i].name == s)
			return true;
	return false;
}

Token_stream ts;

double expression();

/*Follow grammar: */
double primary()
{
	Token t = ts.get();
	switch (t.kind)
	{
	case '(':
	{
		double d = expression();
		t = ts.get();
		if (t.kind != ')')
			error("')' expected"); // logic bug here
		return d; // other logic error.
	}
	case '-':
		return -primary();
	case number:
		return t.value;
	case name:
		return get_value(t.name);
    // }
	default:
		error("primary expected");
	}
}

double term()
{
	double left = primary();
	while (true)
	{
		Token t = ts.get();
		switch (t.kind)
		{
		case '*':
			left *= primary();
			break;
		case '/':
		{
			double d = primary();
			if (d == 0)
				error("divide by zero");
			left /= d;
			break;
		}
		case '%':
		{ // why didn't include remainder operator?
			int i1{narrow_cast<int>(left)};
			int i2{narrow_cast<int>(primary())};
			if (i2 == 0)
				error("%: divide by zero");
			left = i1 % i2;
			break;
		}

		default:
			ts.unget(t);
			return left;
		}
	}
}

double expression()
{
	double left = term();
	while (true)
	{
		Token t = ts.get();
		switch (t.kind)
		{
		case '+':
			left += term();
			break;
		case '-':
			left -= term();
			break;
		default:
			ts.unget(t);
			return left;
		}
	}
}

double declaration() // deals with declaration of let
{
	Token t = ts.get();
	if (t.kind != 'a') // error here
		error("name expected in declaration");
	string name = t.name;
	if (is_declared(name))
		error(name, " declared twice");
	Token t2 = ts.get();
	if (t2.kind != '=')
		error("= missing in declaration of ", name);
	double d = expression();
	names.push_back(Variable(name, d));
	return d;
}

double assignment()
{
	string name;
	cin >> name;
	
	Token t = ts.get();
	if(t.kind != '=')
		error("= missing in assignment of ", name);
	
	double d = expression();
	set_value(name, d);
	return d;
}


double statement() // deals with let
{
	Token t = ts.get();
	switch (t.kind)
	{
	case let:
		return declaration();
	case assign:
		return assignment();
	default:
		ts.unget(t);
		return expression();
	}
}

void clean_up_mess()
{
	ts.ignore(print);
}

const string prompt = "> ";
const string result = "= ";

void calculate()
{
	while (true)
		try
		{
			cout << prompt;
			Token t = ts.get();
			while (t.kind == print)
				t = ts.get();
			if (t.kind == quit)
				return;
			ts.unget(t);
			cout << result << statement() << endl;
		}
		catch (runtime_error &e)
		{
			cerr << e.what() << endl;
			clean_up_mess();
		}
}

int main()

try
{
	calculate();
	return 0;
}
catch (exception &e)
{
	cerr << "exception: " << e.what() << endl;
	char c;
	while (cin >> c && c != ';')
		;
	return 1;
}
catch (...)
{
	cerr << "exception\n";
	char c;
	while (cin >> c && c != ';')
		;
	return 2;
}
