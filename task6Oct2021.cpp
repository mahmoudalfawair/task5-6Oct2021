#include <iostream> 
using namespace std;
int main()
{
    cout << "**Enter a number between 1 and 11**" << endl;
    int num0;
    int num1;
    cout << "\nEnter the first number : " ;
    cin >> num0;
    cout << "\nEnter the second number : " ;
    cin >> num1;

switch(num0)
{
    
    case 1 :cout << "one " << endl; 
    break;
    
    case 2 :cout << "two " << endl;
    break ;
    
    case 3 :cout << "three " << endl; 
    break;
    case 4 :cout << "four " << endl;
    break ;
    
    case 5 :cout << "five " << endl;
    break;
    
    case 6 :cout << "six " << endl;
    break ;
    
    case 7 :cout << "seven " << endl;
    break;
    
    case 8 :cout << "eight " << endl;
    break ;
    
    case 9 :cout << "nine " << endl;
    break;
    
    case 10 :cout << "ten " << endl;
    break ;
     
    case 11 : cout << " eleven" << endl;
    break; 
}
if(num0 %2 == 0 )
cout << "even " << endl;
else cout << "odd " << endl;

switch(num1)
{
    
    case 1 :cout << "one " << endl; 
    break;
    
    case 2 :cout << "two " << endl;
    break ;
    
    case 3 :cout << "three " << endl; 
    break;
    case 4 :cout << "four " << endl;
    break ;
    
    case 5 :cout << "five " << endl;
    break;
    
    case 6 :cout << "six " << endl;
    break ;
    
    case 7 :cout << "seven " << endl;
    break;
    
    case 8 :cout << "eight " << endl;
    break ;
    
    case 9 :cout << "nine " << endl;
    break;
    
    case 10 :cout << "ten " << endl;
    break ;
     
    case 11 : cout << " eleven" << endl;
    break; 
}
if(num1 %2 == 0 )
cout << "even " << endl;
else cout << "odd " << endl;
}