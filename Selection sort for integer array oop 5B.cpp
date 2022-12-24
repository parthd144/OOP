#include<iostream>
using namespace std;

template<class T>
void search(T arr[], int size){
    int i,j;
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                T temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"sorted array : "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int size;
    cout<<"Enter size : ";
    cin>>size;
    int arr1[size];
    float arr2[size];
    cout<<"Enter elements in integer array : "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr1[i];
    }
    search(arr1, size);
    cout<<endl;
    cout<<"Enter elements in floating point array : "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr2[i];
    }
    search(arr2, size);
	return 0;
}


