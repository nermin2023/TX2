#include <iostream>

using namespace std;

int main()
{
    for ( int i=1; i<=6 ;i++) {
        for( int j =1 ;j <=6 -i+1 ; j++ ) {
           cout << " * ";


        }
        cout<< " \n";
    }
    return 0;
}
