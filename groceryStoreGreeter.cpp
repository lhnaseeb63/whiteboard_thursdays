/*
    You are the greeter at the hometown grocery store. 
    Each customer at this store has a name tag when they come in.
    Using the name of the customer, greet each and every one.
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;


int main() {

    string customer;
    getline(cin, customer);

    cout << "Hello, " + customer + "!" <<endl;


    return 0;
}
