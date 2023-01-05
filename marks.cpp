#include<iostream>
using namespace std;
int main(){
    int marks[5];
    int i,sum=0;
    
    cout << "Enter marks of 5 subjects: ";
    for(i=0;i<=4;i++)
    {
        cin>>marks[i];
        sum=sum+marks[i];

    }
    float parcentage=sum/5;
    cout<<"your total marks is "<<sum<<" out of 500"<<endl;
    cout <<"your parcentage is "<<parcentage<<endl;



}