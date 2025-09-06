#include <iostream>
using namespace std;

class LowerTriangular {
    int n;
    int *A;
public:
    LowerTriangular(int n) {
        this->n=n;
        A=new int[n*(n+1)/2];
    }
    void set(int i,int j,int x) {
        if(i>=j) A[i*(i-1)/2 + (j-1)] = x;
    }
    int get(int i,int j) {
        if(i>=j) return A[i*(i-1)/2 + (j-1)];
        return 0;
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
    int n; cout<<"Enter size of Lower Triangular Matrix: "; cin>>n;
    LowerTriangular l(n);
    cout<<"Enter elements:\n";
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            int x; cin>>x;
            l.set(i,j,x);
        }
    }
    cout<<"Lower Triangular Matrix:\n";
    l.display();
}