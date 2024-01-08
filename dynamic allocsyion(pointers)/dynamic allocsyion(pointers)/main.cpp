//
//  main.cpp
//  dynamic allocsyion(pointers)
//
//  Created by Nisha Ramprasath on 1/11/23.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int size;
    cout<<"enter the ele";
    cin>>size;
    int *p=new int[size];
    
    cout<<"enter new size";
    cin>>size;
    p=new int[size];
    return 0;
}
