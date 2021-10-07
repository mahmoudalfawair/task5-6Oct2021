#include <iostream>
using namespace std;
int main()
{
int counter = 0; 
int arr[10] ={0};
    for(int i = 0 ; i < 10; i++)
    {
        cout << "Enter the value in the index " << i << " = ";
        cin >> arr[i];
    }
    for(int j = 0 ; j < 10 ; j++)
    {
        cout << " The index " << j << " is : ";
        if(arr[j]== 0)
        cout << arr[j] << endl;
        else if(arr[j]%3 == 0 && arr[j]%5 == 0)
        cout <<"fuzz buzz" << endl;   
        else if(arr[j]%3 == 0 )
        cout << "fuzz" << endl;
        else if(arr[j]%5 == 0)
        cout <<"buzz"<< endl;
        else cout << arr[j] << endl;


        
    }



}