/**
 * @file 4.cpp
 * @author Thiago Araújo (ThiaudioTT)
 * @brief exercise 4 from chap 4.
 * @version 1.0.1
 * @date 2022-02-22 (YYYY-MM-DD)
 * 
 * @copyright Copyright (c) 2022
 * 
 * @note This was hard, but searching for binary search helped and I achieved it. I'm feeling much
 * better at programming now. This chapter probably was missing one thing, I guess it is data structure.
 */


#include "../../std_lib_facilities.h"

/*Write a program to play a numbers guessing game. The user thinks of a 
number between 1 and 100 and your program asks questions to figure 
out what the number is (e.g., “Is the number you are thinking of less than 
50?”). Your program should be able to identify the number after asking 
no more than seven questions. Hint: Use the < and <= operators and the 
if-else construct.*/

/**
 * @brief Returns mid element or mid index of an array.
 * Choose 'i' for index of element, or 'e' for the element.
 * Note: if the array is even, it returns the previos index.
 * @param char @param array 
 * @return int middle of the array or index of the element.
 */
int find_mid(char option, vector<int> array){
    int index = 0;

    //verify odd or even
    if(array.size()%2==0){ // even
        index = (array.size()/2) - 1;
    } else { // odd
        index = (array.size()-1)/2;
    }

    switch(option){
        case 'i': //returns index of the element
            return index;
            break;
        case 'e': // returns element
            return array[index];
            break;
        default:
            cout<<"Error! specify 'i' or 'e'";
            return 0;
            break;
    }
}

/**
 * @brief Divide an array using find_mid and deletes one of the parts.
 * Choose the option '1' to exclude the start of the array or 
 * Choose the option '2' to exclude the end of the array.
 * Note: it will remove the middle element too (because of the code).
 * @param array
 * @param option
 * @return The array divided and excluded.
 */
vector<int> divide_exclude(vector<int> array, char option){
    int index = find_mid('i',array);

    switch(option){
        case '1':
            for(int i = 0; i<=index; i++)
                array.erase(array.begin());
            break;
        case '2':
            for(int i = array.size()-1; i>=index; i--) // "array.size()-1" is the last index of the array
                array.pop_back();
            break;
        default:
            cout<<"ERROR! divide_exclude function: CHOOSE A VALID OPTION";
    }
    return array;
}

void print_array(vector<int> array){
    cout<<"\nYour numbers must be one of these: \n";
    for(int x : array)
        cout<<x<<" | ";

}

int main(){
    char input = '0';
    int n = 0;
    // here you choose what array do you want:
    vector<int> numbers;
    for(int i = 1; i<101; i++)
        numbers.push_back(i);

    
    cout<<"\nChoose a number in your mind, I will try to guess it.\n";

    // here hoes binary search
    while(true){
        n = find_mid('e',numbers);
        cout<<"\nIs your number "<<n<<"? "; // first question, ask if is the middle of the array. (Or the unique element on the array)
        cin>>input;

        if(numbers.size()==1){ // verify if is one element
            cout<<"\nYour number is "<<numbers[0]<<"!";
            break;
                
        } else if(numbers.size()==2 && input=='n'){ // verify if is 2 elements and do a logical guess.
            cout<<"\nSo... your number is "<<numbers[1]<<"\nYaay! (hehe...)";
            break;
        
        //here below is the normal binary search.
        } else if(input=='y'){ // this is the default guess.
            cout<<"\nYaay!";
            break;

        } else if(input=='n') {
            cout<<"Is your number less than "<<n<<"? "; // second question (if is less than n)
            cin>>input;
            
            if(input=='y'){ // if yes, exclude the second part of the array.
                numbers = divide_exclude(numbers, '2');
                print_array(numbers);

            } else if(input=='n'){ // if no, exclude the first part of the array.
                numbers = divide_exclude(numbers, '1');
                print_array(numbers);

            } else{cout<<"\nBad inpuut!";}
        // if bad input, (it won't modify the array numbers, so is like nothing happens)
        } else {cout<<"\nBad Input!";}

        // the code continues until the program guess the number.
    }
    return 0;
}
