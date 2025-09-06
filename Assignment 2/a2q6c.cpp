#include <iostream>
using namespace std;
int main() {
    int a[3][3]={{2,2,2},{0,0,2},{1,1,3}}, b[3][3]={{2,2,2},{0,0,4},{1,1,5}}, c[5][3], k=1;
    c[0][0]=a[0][0]; c[0][1]=b[0][1];
    for(int i=1;i<=a[0][2];i++)
        for(int j=1;j<=b[0][2];j++)
            if(a[i][1]==b[j][0]){ c[k][0]=a[i][0]; c[k][1]=b[j][1]; c[k++][2]=a[i][2]*b[j][2]; }
    c[0][2]=k-1;
    for(int i=0;i<k;i++) cout<<c[i][0]<<" "<<c[i][1]<<" "<<c[i][2]<<endl;
}