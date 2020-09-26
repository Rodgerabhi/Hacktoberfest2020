//
//  reverse_queue.cpp
//  iste
//
//  Created by Apple on 26/09/20.
//  Copyright © 2020 Apple. All rights reserved.
//
#include <iostream>
#include<stack>
#include<queue>
using namespace std;

//function to reverse queue
void reverseQueue(queue<int>&input){
    stack<int>stack;
    if(input.size()<=1){
        return;
    }
    while(!input.empty()){
        int a=input.front();
        input.pop();
        stack.push(a);
    }
    //error in the following loop
    while(!input.empty()){
        int b=stack.top();
        stack.pop();
        input.push(b);
    }
}
//main function
int main(){
    queue<int>input;
    input.push(10);
    input.push(20);
    input.push(30);
    input.push(40);
    input.push(50);
    input.push(60);
    cout<<input.front()<<endl;
    reverseQueue(input);
    cout<<input.front()<<endl;
}
