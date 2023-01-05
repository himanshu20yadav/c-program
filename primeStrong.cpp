#include <iostream>
#include <math.h>
using namespace std;
 
int checkPrimeNumber(int n);
int checkArmstrongNumber(int n);
 
int main(){
 
    int num, flag;
 
    cout<<"Enter a positive integer: ";
    cin>>num;
 
     // Checking prime number
    flag = checkPrimeNumber(num);
    if (flag == 1)
        cout<<num<<" is a prime number"<<endl;
    else
        cout<<num<<" is not a prime number"<<endl;
 
    // Checking Armstrong number
    flag = checkArmstrongNumber(num);
    if (flag == 1)
        cout<<num<<" is a Armstrong number"<<endl;
    else
        cout<<num<<" is a not an Armstrong number"<<endl;
    return 0;
}
//function to check prime number
int checkPrimeNumber(int num)
{
    int i, flag = 1;
 
    for(i=2; i<=num/2; ++i)
    {
 
    // condition for non-prime number
        if(num%i == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}
 
//function to check Armstrong Number
int checkArmstrongNumber(int number)
{
    int originalNumber, remainder, result = 0, num = 0, flag;
 
    originalNumber = number;
 
    while (originalNumber != 0)
    {
        originalNumber /= 10;
        ++num;
    }
 
    originalNumber = number;
 
    while (originalNumber != 0)
    {
        remainder = originalNumber%10;
        result += pow(remainder, num);
        originalNumber /= 10;
    }
 
    // condition for Armstrong number
    if(result == number)
        flag = 1;
    else
        flag = 0;
 
    return flag;
}