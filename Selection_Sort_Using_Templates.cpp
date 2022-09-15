#include <bits/stdc++.h>
using namespace std;
template <typename T>   //template declaration
void selection_sort(T arr[],int size){  //passed argument array is of type T
    for(int i=0;i<size-1;i++){  //iterate from 0 to to size-1 
        for(int j=i+1;j<=size-1;j++){   //iterate from i+! to size-1
            if(arr[j]<arr[i]){  //if arr[j]<arr[i] then swap them,so that smallest element from unsorted array comes to its coreect position in sorted array
                T temp=arr[i];    //for swapping
                arr[i]=arr[j];      
                arr[j]=temp;
            }
        }
    }
}

template <typename T>   //template declaration as previous declaration is limited to selection_sort function only
void display(T arr[],int size){ //to print array 
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main()
{
    //Testing for integer
    int arr1[5]={4,5,3,1,2};
    selection_sort<int>(arr1,5); //calling selection_sort function with array and its size as parameters
    cout<<"For integers:\n";
    display(arr1,5);        //calling display function for printing array elements
    cout<<endl;
    
    //Testing for double
    double arr2[5]={36.54,6.4,15.4,62.94,7.4};
    selection_sort<double>(arr2,5);
    cout<<"For doubles:\n";
    display(arr2,5);
    cout<<endl;
    
    //Testing for character
    char arr3[5]={'a','q','k','d','b'};
    selection_sort<char>(arr3,5);
    cout<<"For characters:\n";
    display(arr3,5);
    cout<<endl;
    
    //Testing for string
    string arr4[5]={"Grapes","Apple","Mango","Kiwi","Banana"};
    selection_sort<string>(arr4,5);
    cout<<"For strings:\n";
    display(arr4,5);
    cout<<endl;
    
    return 0;
}
//selection sort: repeatedly finding the minimum element from the unsorted part and putting it at the beginning.
//Time Complexity= O(n^2)
