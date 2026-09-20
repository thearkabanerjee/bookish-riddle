# include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    int arr[a];

    for (int i = 0; i < a;i++){
        int m;
        cin >> m;
        arr[i] = m;
    }

    int fastest = arr[0];
    int index = 0;
    for (int i  = 0; i < a; i++){
        if (arr[i] <= fastest){
            fastest = arr[i];
            index = i;
        }
    }

    cout << index+1 << endl;
    return 0;
}