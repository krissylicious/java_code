#include <iostream>
using namespace std;

int main(){
for(int lines=1 ;lines<=7 ;lines++ )
{
    for(int stars=1 ;stars<=8-lines ;stars++)
        cout << "*";
        cout << endl;
}
return 0;
}
