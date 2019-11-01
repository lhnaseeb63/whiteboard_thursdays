/*
    It's late at night. You hear a rumbling in the sky.
    Suddenly a large crashing sound comes from your backyard.
    You leap from your bed and go outside to investigate.
    Smoke is coming from behind your shed, and suddenly 
    you see a set of eyes peering from the darkness. 
    An alien emerges. Although he seems friendly, he speaks
    a strange language. It seems that every word he speaks 
    consists of the same sequence of letters forwards as it 
    does backwards. To begin communicating with this strange 
    creature, you decide to write a program to determine
    if a word can or cannot be interpreted by the alien.  
*/

#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char palindrome[20];
    int i, length;
    int flag = 0;
    
    cin >> palindrome;
    
    length = strlen(palindrome);
    
    for(i=0;i < length ;i++)
    {
        if(palindrome[i] != palindrome[length-i-1])
        {
            flag = 1;
            break;
        }
    }
    
    if (flag == 1) 
    {
        cout << "no" << endl; 
    }    
    else 
    {
        cout << "yes" << endl; 
    }
 
    return 0;
}