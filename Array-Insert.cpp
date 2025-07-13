#include "iostream"
 using namespace std;

void display(int arr[],int size){
    for(int  i = 0; i < size; i++)
    {
        cout<< arr[i] <<" ";
    }
    cout<<endl; 
}

int InsertEle (int arr[],int size,int index,int ele) {
    
    
     for (int i = size-1; i >= index; i--)
     {
        arr[i+1] = arr[i];
     }
     arr[index] = ele;
     return 1;
     

}
int main() {
    int arr[10] = {10,20,30,40,50,60,70,80,90,100};
    int size = 10;
    int ele = 45,index = 3;
    display(arr,size);
    InsertEle(arr,size,index,ele);
    size +=1;
    display(arr,size);
}