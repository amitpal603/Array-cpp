#include "iostream"
 using namespace std;

void display(int arr[],int size){
    for(int  i = 0; i < size; i++)
    {
        cout<< arr[i] <<" ";
    }
    cout<<endl; 
}

int main() {
    int arr[10] = {10,20,30,40,50,60,70,80,90,100};
    int size = 10;
    display(arr,size);
}