#include <stdio.h>

int main() {
    int n, y = 0;
    cout<<"numero ";
    cin>>n; 
    while (n > 0 ){
        y = n % 10; 
        cout<< y  
        n = n / 10; 
    }
    cout<<n;
    return 0; 
}


int main() {
    int n, y = 0;
    cout<<"numero ";
    cin>>n; 
    for (n > 0 ){
        y = n % 10; 
        cout<< y  
        n = n / 10; 
    }
    cout<<n;
    return 0; 
}


int main() {
    int n, y = 0;
    cout<<"numero ";
    cin>>n; 
    do while (n > 0 ){
        y = n % 10; 
        cout<< y  
        n = n / 10; 
    }
    cout<<n;
    return 0; 
}