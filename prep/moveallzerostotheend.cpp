# include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    int arr[a];

    for (int i = 0; i < a; i++){
        cin >> arr[i];
    }

    int notzeros= 0;
    for(int i = 0; i < a; i++){
        if (arr[i] != 0){
            cout << arr[i] <<  " ";
            notzeros += 1;
        }
        
    }
    int countzeros = a - notzeros;
    for(int i = 0; i < countzeros; i++){
        cout << 0 << " "; 
    }
    cout << endl;
    return 0;
}