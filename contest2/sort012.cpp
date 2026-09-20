# include <iostream>
using namespace std;

int main(){
    int b;
    cin >> b;
    int arr[b];

    for (int i = 0; i < b; i ++){
        int m;
        cin >> m;
        arr[i] = m;
    }

    int count1 = 0, count2 = 0, count0 = 0;

    for (int i = 0; i < b; i++){
        if (arr[i] == 0){
            count0++;
        }else if (arr[i] == 1){
            count1 ++;
        }else{
            count2++;
        }
    }

    for (int i = 0 ; i <count2; i++){
        cout << 2 << " ";
    }

    for (int i = 0; i < count1; i++){
        cout << 1 << " ";
    }
    for (int i = 0; i < count0; i++){
        cout << 0 << " ";
    }
    cout << endl;
    return 0;
}