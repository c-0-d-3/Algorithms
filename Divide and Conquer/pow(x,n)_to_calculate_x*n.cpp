// C++ program to calculate pow(x,n) 
/* You are provided with two inputs.....x and n.
   Using those you have to calculate x^n
*/
#include<iostream> 
using namespace std; 
class mathscal 
{ 
public: 
/* Function to calculate x raised to the power y */
int power(int x, unsigned int y) 
{ 
    if (y == 0) 
        return 1; 
    else if (y % 2 == 0) 
        return power(x, y / 2) * power(x, y / 2); 
    else
        return x * power(x, y / 2) * power(x, y / 2); 
} 
}; 
  
int main() 
{ 
    mathscal a; 
    int x; 
    unsigned int y; 
// Take input in one line    
    cin>>x>>y;
  
    cout << a.power(x, y); 
    return 0; 
} 
