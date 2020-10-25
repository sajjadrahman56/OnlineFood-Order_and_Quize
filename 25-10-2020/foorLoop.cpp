#include<iostream>

using namespace std ;

int main()
{
    int a , n = 10 ;

    cout<<"Foor loop work ";

    cin>> a ;

    cout << "\n\tPrintf you are succesfully : \n";

    for ( int i = 0 ; i < 5 ; i++)
    {
        cout<< "\n\tPrintf %d\t = %d "  << i << i * 9 ;
    }

    return 0 ;
}
