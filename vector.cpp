#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>n;

    n.assign(9,1);

    cout<<"The contents are :";
    for(int a=0;a<n.size();a++){
        cout<<n[a]<<"";
        
        
    }
     cout<<endl;
   n.push_back(69);

    cout<<"after pushback contents are :";
    for(int a=0;a<n.size();a++){
        cout<<n[a]<<"";
     
        
    }
  cout<<endl;
    n.pop_back();
     cout<<"after PopBack contents are :";
      for(int a=0;a<n.size();a++){
        cout<<n[a]<<"";
        
        
    }
    

    return 0;
}