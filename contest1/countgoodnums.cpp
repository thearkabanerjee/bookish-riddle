# include <iostream>
using namespace std;

int main(){
    int times;
    cin >> times;

    int result = 0;

    for (int i = 0; i < times; i++){
        int a;
        cin >> a;
        
        if (a % 45 == 0 || 18 % a == 0){
            result ++;
        }

    }

    cout << result << endl;
    return 0;
}