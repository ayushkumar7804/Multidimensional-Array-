/*AYUSH YADAV 
  24070123028*/


#include <iostream>
using namespace std;

int main(){
    int i, j, k, l;
    int mat[3][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout << " element [ "<<i<<j<<" ] ";
            cin >> mat[i][j];
            
        }
    }
    for(k=0; k<3; k++){
        for(l=0; l<3; l++){
            cout<<mat[k][l];
            cout<< ":";
            
        }
        cout<<endl;
    }
    
}

/*OUTPUT 

 element [ 00 ]: 1
 element [ 01 ]: 2
 element [ 02 ]: 3
 element [ 10 ]: 4
 element [ 11 ]: 5
 element [ 12 ]: 6
 element [ 20 ]: 7
 element [ 21 ]: 8
 element [ 22 ]: 9
123
456
789
*/

