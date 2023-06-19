#include <iostream>
using namespace std;

int main()
{
    int num,fact,sum = 0;
    cin >> num;
    int temp = num;
    int digit;
    while(num != 0){
        digit = num%10;
        fact = 1;
        for(int i=1;i<=digit;i++){
            fact = fact * i ;
        }
        sum = sum + fact;
        num = num/10;
    }
    if(temp == sum){
        cout << "yes";
    }
    else{
        cout << "no";
    }
    

    return 0;
}
