# include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int even = 0, odd = 0, zero = 0;

    for (int i = 0; i < n ; i++){
        int m ;
        cin >> m;

        if (m == 0 ){
            zero ++;
        }
        else if (m % 2 == 0){
            even ++;
        }
        else if (m % 2 != 0){
            odd ++;
        }
    }

    cout << even << " "<< odd << " " << zero << endl;
    return 0;
}