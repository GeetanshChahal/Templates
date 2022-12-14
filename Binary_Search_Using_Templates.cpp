#include <bits/stdc++.h>
using namespace std;
 //template declaration
template <typename T>  
string binary_search(T arr[],int arr_size,T key){
    //to sort the array 
    sort(arr,arr+arr_size); 
    //start is at the first element of array
    int start=0;      
    //end is at the last element of array
    int end=arr_size-1; 
    
    while(start<=end){
        int mid=(start+end)/2;
        //if element at mid is equal to key then element is present
        if(arr[mid]==key){
            //to know the index of element we can also return arr[mid]
            return "Element is present!!";  
        }
        //if element at mid is greater than key then element is present in the left part of start to mid-1
        else if(arr[mid]>key){ 
             //reduce the seart part by making mid-1 as the end of searching elements
            end=mid-1;     
        }
        //if element at mid is smaller than key then element is present in the right part of mid+1 to end
        else{      
             //reduce the seart part by making mid+1 as the start of searching elements
            start=mid+1;   
        }
    }
    //if element is not present in the array
    return "Element is not present!!"; 
}
int main()
{
    //Testing for integers
    int arr1[5]={1,5,20,64,86};
    //usage syntax: binary_search<datatype>(array_name,array_size,search_key);
    cout<<"For int:-\n"<<binary_search<int>(arr1,5,64)<<endl;   
    cout<<binary_search<int>(arr1,5,14)<<endl;  
    cout<<endl;
    
    //Testing for double
    double arr2[5]={3.54,6.4,50.4,62.94,75.4};
    cout<<"For double:-\n"<<binary_search<double>(arr2,5,62.94)<<endl;
    cout<<binary_search<double>(arr2,5,3.4)<<endl;
    cout<<endl;
    
    //Testing for char
    char arr3[4]={'a','c','k','m'};
    cout<<"For char:-\n"<<binary_search<char>(arr3,4,'m')<<endl;
    cout<<binary_search<char>(arr3,4,'d')<<endl;
    cout<<endl;
    
    //Testing for string
    string arr4[4]={"ca","cat","cate","dog"};
    cout<<"For string:-\n"<<binary_search<string>(arr4,4,"cate")<<endl;
    cout<<binary_search<string>(arr4,4,"cad")<<endl;
    return 0;
}
//Bubble sort works only on sorted array
//Its time complexity is O(logn)





