#include "sorting.h"
using namespace std;

int sort[10] = {};
int sorted[10];
int t = 0;


int main(){
    for(int i = 0; i < 10; i++){
        cin >> t;
        sort[i] = int(t);
    }
    merge_sort(sort, 0, 9);

    for(int i = 0; i < 10; i++){
        cout << sorted[i] << ' ';
    }
    cout << '\n';
    return 0; 
}