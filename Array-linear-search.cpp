#include"iostream"
using  namespace std;

void Display(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl; 
}
int LinearSearch(int arr[],int size,int target){
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == target)
        {
            return 1;
        }
    }
    return -1;
    
}

int main(){
    int arr[] = {12,45,23,67,86,87,3,90},traget = 90;
    int size = sizeof(arr)/sizeof(arr[0]);
    Display(arr,size);
    int result = LinearSearch(arr,size,traget);
    if(result == 1){
        cout<<"Element  found";
    }
    else
    {
        cout<<"Element not found";
    }
    
    return 0;
}