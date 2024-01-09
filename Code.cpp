#include <iostream>
#include <bitset>
using namespace std;

int main() 
{
    unsigned short n,graycode;
    
    cout << "Enter a positive number: ";
    cin >> n;
    
    graycode = n^(n>>1);
    cout <<"Binary: " << bitset<16>(n) << endl;
    cout <<"Gray code: " << bitset<16>(graycode) << endl;
return 0;
}
