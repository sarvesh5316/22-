#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void print(int *ptr)
{
    cout << *ptr << endl;
}
void update(int *ptr)
{
    *ptr = *ptr + 1;
    cout << *ptr << endl;
}
int getsum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int arr[10] = {1, 3, 5, 2, 4, 6};
    char ch[10] = "abcscde";
    int *ptr = &arr[0];
    int result = getsum(arr, 10);
    cout << result << endl;
    // cout<<arr<<endl;
    // cout<<ch<<endl;
    // char *c=&ch[0];
    // cout<<c<<endl;
    // cout<<ptr<<endl;
    print(ptr);
    update(ptr);
    print(ptr);
    int result1 = getsum(arr+3, 3);
    cout << result1 << endl;
}
