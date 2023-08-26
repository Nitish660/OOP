//default parameter

#include<iostream>
using namespace std;

void myfunction(string country = "india"){
    cout<<country<<" \n";
}


int main(){
    myfunction("india");
    myfunction("usa");
    return 0;
}
