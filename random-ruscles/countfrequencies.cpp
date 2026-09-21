# include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    int arr[a];

    for (int i  =0; i < a; i++){
        int m;
        cin >> m;
        arr[i] = m;
    }

    
    for (int i = 0; i < a; i++){
        int count = 0;
        for (int j = 0; j < a; j++){
            if (arr[i] == arr[j]){
                count ++;
            } 
        }
        cout << arr[i] << " " << count << endl;
    }

    return 0;
}