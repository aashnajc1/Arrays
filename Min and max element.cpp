#include <iostream>
#include <climits>
using namespace std;

int getmin(int num[],int n){
    int min = INT_MAX;
    for(int i =0;i<n;i++){
        if(num[i] < min){
            min = num[i];
        }
    }
    return min;
}

int getmax(int num[], int n){
    int max = INT_MIN;
    for(int i=0; i<n; i++){
        if(num[i]>max){
            max = num[i];
        }
    }
    return max;
}

int main(){
    int size;
    cin>>size;
    int num[1000];
    for(int i =0;i<size;i++){
        cin>>num[i];
    }
    
    cout << "Maximum Value is : " << getmax(num,size) << endl;
    cout << "Minimum Value is : " << getmin(num,size);
    return 0;
}