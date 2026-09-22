# include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    int arr[a];

    for (int i = 0; i < a; i++){
        cin >> arr[i];
    }

    int largestreak = 1;
    int streak = 1;

    for (int i = 1; i < a; i++){
        if (arr[i-1] == arr[i]){
            streak++;
        }else{
            streak = 1;
        }

        if (streak > largestreak){
            largestreak = streak;
        }
    }
        
    

    cout << largestreak<< endl;
    return 0;
}