#include<iostream>
#include<string>
using namespace std;

int main(){
    string food ="pizza";
    string* ptr = &food;

    cout<<food<<'\n';  //pizza
    cout<<&food<<'\n'; //0x7ffeedb1d9c0
    cout<<ptr<<'\n';   //0x7ffeedb1d9c0
    cout<<*ptr<<'\n';  //pizza
    *ptr = "hamburger";
    cout<<food<<'\n';  //hamburger



}   