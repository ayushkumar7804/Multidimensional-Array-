/*AYUSH YADAV
  24070123028*/

#include<iostream>
usingnamespacestd;

intmain() {
    inti, j, r1, c1, r2, c2, k, l, f1=0, f2=0;
    cout<<"Enter matrix-1 rows: ";
    cin>>r1;
    cout<<"Enter matrix-1 columns: ";
    cin>>c1;
    cout<<"Enter matrix-2 rows: ";
    cin>>r2;
    cout<<"Enter matrix-2 columns: ";
    cin>>c2;

    inta1[r1][c1], a2[r2][c2], add[r1][c1], prod[r1][c2];
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            cout<<"Enter element-("<<i<<j<<"): ";
            cin>>a1[i][j];
        }
    }
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            cout<<"Enter element-("<<i<<j<<"): ";
            cin>>a2[i][j];
        }
    }
    if(r1==r2&&c1==c2) {
        for(i=0;i<r1;i++) {
            for(j=0;j<c1;j++) {
                add[i][j]=a1[i][j]+a2[i][j];
            }
        }
        f1=1;
    }
    else {
        cout<<endl<<"Dimensions of matrices are not equal"<<endl<<"Therefore addition of matrices not possible"<<endl;
    }

    if(c1==r2){
        for(i=0;i<r1;i++) {
            for(j=0;j<c2;j++) {
                prod[i][j]=0;
                for(k=0;k<r2;k++){
                    prod[i][j]+=a1[i][k]*a2[k][j];
                }
            }
        }
        f2=1;
    }
    else {
        cout<<endl<<"Column of matrix-1 is not equal to row of matrix-2"<<endl;
    }
    if(f1==1){
        cout<<endl<<"ADDTION OF MATRICES:"<<endl;
        for(k=0;k<r1;k++) {
            for(l=0;l<c1;l++) {
                cout<<add[k][l];
                cout<<"  ";
            }
            cout<<endl;
        }
    }
    if(f2==1){
        cout<<endl<<"MULTIPLICATION OF MATRICES:"<<endl;
        for(k=0;k<r1;k++) {
            for(l=0;l<c2;l++) {
                cout<<prod[k][l];
                cout<<"  ";
            }
            cout<<endl;
        }
    }
    return0;
}

/*
OUTPUT:-

Enter matrix-1 rows: 3
Enter matrix-1 columns: 3
Enter matrix-2 rows: 3
Enter matrix-2 columns: 3

Enter elements of Matrix-1:
Element (0,0): 1
Element (0,1): 2
Element (0,2): 3
Element (1,0): 5
Element (1,1): 4
Element (1,2): 6
Element (2,0): 7
Element (2,1): 8
Element (2,2): 9

Enter elements of Matrix-2:
Element (0,0): 1
Element (0,1): 2
Element (0,2): 3
Element (1,0): 4
Element (1,1): 5
Element (1,2): 6
Element (2,0): 8
Element (2,1): 7
Element (2,2): 9

ADDITION OF MATRICES:
2  4  6  
9  9  12  
15  15  18  

MULTIPLICATION OF MATRICES:
33  33  42  
69  72  93  
111  117  150 
*/


