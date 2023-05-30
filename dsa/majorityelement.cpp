
//Moore voting algo....
// majority elements

int mjele(int arr[], int size)
{
    int count = 0;
    int el = 0;
    for (int i = 0; i < size;i++)
    {
        if(count==0)
            el = arr[i];
        
        if(el==arr[i])
            count++;
        else
            count--;
    }
    count = 0;
    for (int i = 0; i < size; i++)
    {
        if (el == arr[i])
            count++;
        }

        if(count>size/2)
        return el;
        else
        return -1;
}




//naive approach
#include<bits/stdc++.h>
using namespace std;

int majorityElement(int arr[], int size)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        for(int j=0; j<size;j++)
        {
            if(arr[i]==arr[j])
                count++;
            if(count>size/2)
                return arr[i];
        }
        count=0;
    }
    return -1;
}

int main()
{
    int size;
    cin>>size;
    int arr[size];
    for (int i = 0; i<size;i++)
    {
        cin >> arr[i];
    }
    cout << "Naive approach :";
    cout << majorityElement(arr, size)<<endl;
    cout << "Moore voting algo: ";
    cout << mjele(arr, size);
    
}