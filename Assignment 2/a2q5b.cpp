#include <iostream>
using namespace std;

class TriDiagonal {
    int n;
    int *A;
public:
    TriDiagonal(int n) {
        this->n=n;
        A=new int[3*n-2];
    }
    void set(int i,int j,int x) {
        if(i-j==1) A[i-2]=x; // below diagonal
        else if(i-j==0) A[n-1+i-1]=x; // main diagonal
        else if(i-j==-1) A[2*n-1+i-1]=x; // above diagonal
    }
    int get(int i,int j) {
        if(i-j==1) return A[i-2];
        else if(i-j==0) return A[n-1+i-1];
        else if(i-j==-1) return A[2*n-1+i-1];
        else return 0;
    }
    void display() {
        for(int i=1;i<=n;i++) {
            for(int j=1;j<=n;j++) {
                cout<<get(i,j)<<" ";
            }
            cout<<endl;
        }
    }
};

int main() {
    int n; cout<<"Enter size of Tri-diagonal Matrix: "; cin>>n;
    TriDiagonal t(n);
    cout<<"Enter elements:\n";
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            int x; cin>>x;
            t.set(i,j,x);
        }
    }
    cout<<"Tri-diagonal Matrix:\n";
    t.display();
}