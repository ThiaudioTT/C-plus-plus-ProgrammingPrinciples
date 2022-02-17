# Review

**1. What is a computation?**
R: Computation is the operation of an input and output.
"By computation we simply mean the act of producing some outputs based on 
some inputs, such as producing the result (output) 49 from the argument (input) 7
using the computation (function) square (see §4.5)."
ch4.1

**2. What do we mean by inputs and outputs to a computation? Give examples.**
R: input is the where the data enter, output is where the data leaves. Example: 2 (input); 4 (output: 2*2);
Input and output can be several things like: touch screen, keyboard...(input) and terminal, tv (output). ch4.1

**3. What are the three requirements a programmer should keep in mind when expressing computations?**
R: Is to express computation: correctly, simply and efficiently (in this order). ch4.2

**4. What does an expression do?**
R: Computes a value from a number of operands. ch4.3

**5. What is the difference between a statement and an expression, as described in this chapter?**
R: "An expression computes a value from a set of operands using operators"; statements are language constructors, so if you want produce several values or choose among alternatives, you use a statement.

**6. What is an lvalue? List the operators that require an lvalue. Why do these operators, and not the others, require an lvalue?**
R: lvalue is the left-hand operand of the assignment. Means "the object named [ variable ]".
Every lvalue needs the operator "=" because this is the assignment/initialization operation, and this consequently defines a lvalue. ch 4.3

**7. What is a constant expression?**
R: It is the exactly what the name means, is a constant expression. c++ provides a word for this, "constexpr". It means a variable will only be formed by constants and won't change in the program.

**8. What is a literal?**
R: literal is a fixed value.
https://en.wikipedia.org/wiki/Literal_(computer_programming)

**9. What is a symbolic constant and why do we use them?**
R: Is "a named object to which you can’t give a new value after it has been 
initialized". We use them because "we want to use meaningful names for those constants (as 
we did for pi; we didn’t say 3.14159)". ch 4.3.1

**10. What is a magic constant? Give examples.**
R: "Non-obvious literals in code (outside definitions of symbolic constants) are derisively referred to as magic constants". Example: 299792458 (speed of light in vacuum) and 22/7 (aproximation for pi).

**11. What are some operators that we can use for integers and floating-point values?**
R: * / - + ch.4.3.2

**12. What operators can be used on integers but not on floating-point numbers?**
R: The modulo "%". ch4.3.2 

**13. What are some operators that can be used for strings?**
R: ==, !=, >, <...  ch4.3.2

**14. When would a programmer prefer a switch-statement to an if-statement?**
R: When working with constants, see ch.4.4.1.3.

**15. What are some common problems with switch-statements?**
R: Forgeting the break statement;

**16. What is the function of each part of the header line in a for-loop, and in  what sequence are they executed?**
R: for(execute first; condition to run; execute every in the final loop). 
In https://en.wikipedia.org/wiki/For_loop, has a good diagram to see.

<img src="https://upload.wikimedia.org/wikipedia/commons/0/06/For-loop-diagram.png" width="200" alt="ForLoopDiagram">

**17. When should the for-loop be used and when should the while-loop be used?**
R: When you know the exact repetitions you want, use for. 

**18. How do you print the numeric value of a char?**
R: ```cout<<int(a); vice-versa: cout<<char(a);```

**19. Describe what the line char foo(int x) means in a function definition.**
R: It's a function declaration with the name foo, who return a char value and receive an int value/parameter x.

**20. When should you define a separate function for part of a program? List reasons.**
R: If we need to use a part of a code more than one time, the function will be better in this case because we make the text clearer, logically separate etc. See ch.4.5.1

**21. What can you do to an int that you cannot do to a string?**
R: Mathematical operations.

**22. What can you do to a string that you cannot do to an int?**
R: print phrases easy.

**23. What is the index of the third element of a vector?**
R: 2

**24. How do you write a for-loop that prints every element of a vector?**
R: Using for or for-range(See ch.4.4.2.3):
```cpp 
for(int i=0; i<vector.size(); i++)
    cout<<vector[i]<<"\t";
```
OR

```cpp
for(int x : vector)
    cout<<x<<"\t";
``` 

**25. What does vector<char> alphabet(26); do?**
R: Innitializes a char vector by the name alphabet with 26 "" values.

**26. Describe what push_back() does to a vector.**
R: It inserts an element into the end of the vector.

**27. What does vector’s member size() do?**
R: returns the number of elements present in the vector

**28. What makes vector so popular/useful?**
R: Because vector works with data.

**29. How do you sort the elements of a vector?**
R: `vector.sort()`
