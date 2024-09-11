// Write a program to check if a giver number is power of 2

#include <iostream>
using namespace std;

bool ispowerof2(int n){
    return n && !(n & n-1);
}

int main()
{
    cout<<ispowerof2(14)<<endl;
    return 0;

    return 0;
}
