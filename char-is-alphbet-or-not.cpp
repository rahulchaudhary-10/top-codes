#include<bits/stdc++.h>
using namespace std;

int main(){
    char ch='Z';
    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
    cout<<"The above input " <<ch<< "is an Alphabet";
    else
    cout<<"The above input " <<ch<< "is not an alphabet";
    return 0;
}