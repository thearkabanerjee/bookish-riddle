# include <iostream>
using namespace std;

int main(){
    int m; 
    cin >> m;

    for (int z = 0; z < m; z++){
        int x;
        cin >> x;

        for (int i = 1; i <= x; i++){
            if (i % 2 != 0){
                cout << i << " ";
            }
        }
        for (int j = x; j >= 2; j-- ){
            if (j % 2 == 0){
                cout << j << " ";
            }
        }
        cout << endl;
    }


    return 0;
}