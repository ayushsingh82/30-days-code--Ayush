#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
  if (n <= 1)
       cout<<"false";
 
    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0){
             cout<<"false";
             break;
        }
             else{
                cout<<"true";
                break;

             }
 
    return 0;
    
}