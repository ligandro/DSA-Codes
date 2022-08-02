#include <iostream>
using namespace std;


int main()
{ 
    int n;
    cout << "Enter Array size :";
    cin >> n;
    int a[n];
    cout << "Enter Array elements : ";
    for ( int i =0 ; i< n ;i++){
        cin >> a[i];
    }
    for ( int i =n-1 ; i >=0 ;i--){
        cout << a[i] << " ";
    }
    for ( int i =0 ; i< n ;i++){
        int count = 0;
        for ( int j =i+1 ; j< n ;j++){
            if ( a[i] == a[j] ){
                count ++ ;
            }
        }
        if ( count != 0){
            cout << a[i] << " is repeated " << count+1 << " times ";
        }
    }     
	return 0;
}