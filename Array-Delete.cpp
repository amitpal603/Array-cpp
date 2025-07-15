#include "iostream"
 using namespace std;

void display(int arr[],int size){
    for(int  i = 0; i < size; i++)
    {
        cout<< arr[i] <<" ";
    }
    cout<<endl; 
}

int DeletetEle(int arr[],int size,int index) {
    
    
     for (int i = index; i <= size; i++)
     {
        arr[i] = arr[i+1];
     }
    
     return 1;
     

}
int main() {
    int arr[10] = {10,20,30,40,50,60,70,80,90,100};
    int size = 10;
    int ele = 45,index = 3;
    display(arr,size);
    DeletetEle(arr,size,index);
    size -=1;
    display(arr,size);
}