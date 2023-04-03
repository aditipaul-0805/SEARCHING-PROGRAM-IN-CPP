#include <iostream>

using namespace std;
int linearSearch(int arr[],int n,int key){
	for(int i=0;i<n;i++){
		if(arr[i]==key){
			cout<<"PRESENT\n";
			return i;
		}
	}
	cout<<"NOT PRESENT\n";
	return 0;

}
int main() {
	int n;
	cout<<"Enter the value of n ";
	cin>>n;
	
	int arr[n];
	cout<<"Enter the value in array ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int key;
	cout<<"Enter the value of the key ";
	cin>>key;
	
	cout<<linearSearch(arr,n,key)<<endl;
	return 0;
}

