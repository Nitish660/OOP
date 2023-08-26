#include<string>
#include<iostream>
using namespace std;

int main(){
    string food ="pizza";
    string* ptr = &food;

    cout<<ptr<<'\n';  //adress of food
    cout<<*ptr<<'\n'; //[output] pizza

}