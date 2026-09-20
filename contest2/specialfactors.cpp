# include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;

    bool found = false;
    for (int i = 1; i <= a;i++ ){
        if (a % i == 0 && (i % 10 == 2 || i % 10 == 7)){
            cout << i << " ";
            found = true;
        }
    }
    if (!found){
        cout << -1;
    }
    cout << endl;

    
    return 0;
}