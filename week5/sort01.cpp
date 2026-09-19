# include <iostream>
using namespace std;

int main(){
    int b;
    cin >> b;

    for (int k = 0; k <b; k++){
        int a;
        cin >> a;
        int arr[a];

        for (int j = 0;j <a; j++ ){
            int m;
            cin >> m;
            arr[j] = m;
        }
        int count1 = 0;
        int count0 = 0;
        for (int i = 0; i < a; i++){
            if (arr[i] == 0){
                count0++;
            }else if (arr[i] == 1){
                count1++;
            }
        }
        for (int k = 0; k < count0; k++){
            cout << 0 << " ";
        }
        for (int l = 0; l< count1; l++){
            cout << 1 << " ";
        }

        cout <<endl;
    }

    return 0;
}