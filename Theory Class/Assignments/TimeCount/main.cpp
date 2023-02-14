#include<bits/stdc++.h>

using namespace std;

#define SIZE 50000

int main(){
    int A[SIZE];
    clock_t start_time, end_time;
    srand(time(0));
    int just_an_enter;

    start_time = clock();
    for(int i=0; i<SIZE; i++){
        A[i] = rand()%1000;
    }
    end_time = clock();

    cout << "time required for array generation" << (float)(end_time - start_time)/CLOCKS_PER_SEC << endl;
    cin >> just_an_enter;

    start_time = clock();
    for(int i=0; i<1000; i++){
        cout << A[i] << "," ;
    }
    cout << endl;
    end_time = clock();
     cout << "time required for array printing" << (float)(end_time - start_time)/CLOCKS_PER_SEC << endl;
    return 0;

}