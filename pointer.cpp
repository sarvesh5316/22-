#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[10]={2,3,6,8};
// adding value in  i
    cout<<*arr+2<<endl; 
// pointing value at index arr+ i 
    cout<<*(arr+2)<<endl;
    cout<<*(arr+2)+1<<endl;
    cout<<*(2+arr)+9<<endl;
    cout<<3[arr]<<endl;

    *arr=*arr+2;
    *arr=*(arr+2)+1;
    *arr=*arr+2;

    for(auto it:arr){
        cout<<it<<"" ;
    }






 



    // int i=5;
    // int *p=&i;
    // int *q=p;

    // cout<<*p<<endl;

    // (*p)*=2 ;

    // cout<<*p<<"-"<<*q<<endl;
    // cout<<p<< "-" <<q<<endl;

    // int num=5;
    // int *ptr=&num;
    // cout<<num+1<<endl;
    // cout<<*ptr+1<<endl;
    // cout<<"Address of Num: "<<&num<<endl;
    // cout<<"Size of pointer "<< sizeof(ptr)<<endl;
    // cout<<"Size of int "<< sizeof(num)<<endl;
}
