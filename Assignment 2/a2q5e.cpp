#include <iostream>
using namespace std;

class Symmetric {
    int n;
    int *A;
public:
    Symmetric(int n) {
        this->n=n;
        A=new int[n*(n+1)/2];
    }
    void set(int i,int j,int x) {
        if(i>=j) A[i*(i-1)/2 + (j-1)] = x;
        else A[j*(j-1)/2 + (i-1)] = x;
    }
    int get(int i,int j) {
        if(i>=j) return A[i*(i-1)/2 + (j-1)];
        else return A[j*(j-1)/2 + (i-1)];
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
    int n; cout<<"Enter size of Symmetric Matrix: "; cin>>n;
    Symmetric s(n);
    cout<<"Enter elements:\n";
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            int x; cin>>x;
            s.set(i,j,x);
        }
    }
    cout<<"Symmetric Matrix:\n";
    s.display();
}