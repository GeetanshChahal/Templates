#include <bits/stdc++.h>
using namespace std;
template <typename T>   //template declaration
void bubble_sort(T arr[],int arr_size){  //passed argument array is of type T
    for(int i=0;i<arr_size-1;i++){   //iterate for 0 to arr_size-1 times
        for(int j=0;j<arr_size-1;j++){
            if(arr[j]>arr[j+1]){    //if element at arr[j] > arr[j+1] then swap them 
                T temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }   // after first iteration of i we get the largest element at end and so on
    }
}
template <typename T>   //template declaration as previous declaration is limited to selection_sort function only
void display(T arr[],int arr_size){
    for(int i=0;i<arr_size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main()
{
    //Testing for integer
    int arr1[5]={10,8,14,5,3};
    bubble_sort(arr1,5);  //calling selection_sort function with array and its size as parameters
    cout<<"For integers:\n";
    display(arr1,5);        //calling display function for printing array elements
    cout<<endl;
    
    //Testing for double
    double arr2[5]={62.84,42.4,15.4,3.94,12.4};
    bubble_sort(arr2,5);
    cout<<"For doubles:\n";
    display(arr2,5);
    cout<<endl;
    
    //Testing for character
    char arr3[5]={'b','a','d','q','c'};
    bubble_sort(arr3,5);
    cout<<"For characters:\n";
    display(arr3,5);
    cout<<endl;
    
    //Testing for string
    string arr4[5]={"Grapes","Apple","Mango","Kiwi","Banana"};
    bubble_sort(arr4,5);
    cout<<"For strings:\n";
    display(arr4,5);
    cout<<endl;
    
    return 0;
}

//Bubble sort:- repeatedly swapping the adjacent elements if they are in the wrong order
//Time Complexity: O(n^2)
