#include <iostream>
using namespace std;

int main(){
    int i,j,r1,r2,c1,c2,k,l;
    cout<< "enter matrix row  :";
    cin>>r1;
    cout<< "enter matrix column :";
    cin>>c1;
    cout<< "enter matrix row :";
    cin>>r2;
    cout<< "enter matrix column :";
    cin>>c2;

    int mat1[r1][c1],mat2[r2][c2];
    
    
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            cout<<"Elmt [ "<< i << j << "]: ";
            cin>>mat1[i][j];
        }
    }
    
     
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            cout<<"Elmt [ "<< i << j << "]: ";
            cin>>mat2[i][j];
        }
    }
    
    if(r1==r2&&c1==c2){
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++){
                int add[i][j]=mat1[i][j]+mat2[i][j];
            }
        }
        c1=1;
    }
    else {
        
        cout<<"dimensions of matrix is not equal"<<endl;
    }
    
    return 0;

    
    
}
