#include <iostream>
using namespace std;
int main() {
    int a[4][3]={{3,3,3},{0,0,5},{1,2,8},{2,1,6}}, t[4][3];
    t[0][0]=a[0][1]; t[0][1]=a[0][0]; t[0][2]=a[0][2];
    int k=1;
    for(int i=0;i<a[0][1];i++)
        for(int j=1;j<=a[0][2];j++)
            if(a[j][1]==i){ t[k][0]=a[j][1]; t[k][1]=a[j][0]; t[k++][2]=a[j][2]; }
    for(int i=0;i<=a[0][2];i++) cout<<t[i][0]<<" "<<t[i][1]<<" "<<t[i][2]<<endl;
}