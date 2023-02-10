#include <iostream>
using namespace std;
int main()
{
	int size;
	cin>>size;
	int arr[1000];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(arr[i] == arr[j]){
				cout << arr[i];
				return 0;
			}
		}
	}
	return 0;
