#include <iostream>
#include <climits>
using namespace std;

bool search(int arr[], int n, int key){
    for(int i = 0;i<n;i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main()
{
   
   int size;
   cin>>size;
   int arr[100];
   for(int i=0;i<size;i++){
       cin>>arr[i];
   }
   int key;
   cout << "Enter the element to search for : ";
   cin>>key;
   bool find = search(arr,size,key);
   if(find){
       cout << "Key is present in the array";
   }
   else{
       cout << "Key is not present in the array";
   }
   return 0;
}