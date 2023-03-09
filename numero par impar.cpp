#include <iostream>
using namespace std;

int main(){
    int num;
    int div;
    int *p;
    cin>>num;
    div=num%2;
    if(div==1){
        cout<<num<<"El numero es impar"<<endl;
    } else {
        cout<<num<<"El numero es impar"<<endl;
    }
    p=&num;
    cout<<p;
    return 0;
}