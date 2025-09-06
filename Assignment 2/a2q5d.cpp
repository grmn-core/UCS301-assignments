#include <iostream>
using namespace std;

class UpperTriangular {
    int n;
    int *A;
public:
    UpperTriangular(int n) {
        this->n=n;
        A=new int[n*(n+1)/2];
    }
    void set(int i,int j,int x) {
        if(i<=j) A[j*(j-1)/2 + (i-1)] = x;
    }
    int get(int i,int j) {
        if(i<=j) return A[j*(j-1)/2 + (i-1)];
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
    int n; cout<<"Enter size of Upper Triangular Matrix: "; cin>>n;
    UpperTriangular u(n);
    cout<<"Enter elements:\n";
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            int x; cin>>x;
            u.set(i,j,x);
        }
    }
    cout<<"Upper Triangular Matrix:\n";
    u.display();
}