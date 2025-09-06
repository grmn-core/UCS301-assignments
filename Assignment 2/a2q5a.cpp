#include <iostream>
using namespace std;

class Diagonal {
    int n;
    int *A;
public:
    Diagonal(int n) {
        this->n = n;
        A = new int[n];
    }
    void set(int i,int j,int x) {
        if(i==j) A[i-1]=x;
    }
    int get(int i,int j) {
        return (i==j) ? A[i-1] : 0;
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
    int n; cout<<"Enter size of Diagonal Matrix: "; cin>>n;
    Diagonal d(n);
    cout<<"Enter elements:\n";
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            int x; cin>>x;
            d.set(i,j,x);
        }
    }
    cout<<"Diagonal Matrix:\n";
    d.display();
}