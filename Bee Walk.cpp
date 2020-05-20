#include<iostream>
using namespace std;
#define depth 17

int way[15][depth][depth];
int list[15];
int stepNum;

void print_list( void )
{
    way[0][8][8] = 1;
    for ( int k = 1; k <= 14; k++) {
        for ( int i = 1; i < depth; i++ ) {
            for ( int j = 1; j < depth; j++ ) {
                way[k][i][j] = way[k-1][i][j+1]+way[k-1][i][j-1]
                                +way[k-1][i+1][j]+way[k-1][i-1][j]
                                +way[k-1][i+1][j-1]+way[k-1][i-1][j+1];
            }
        }
        list[k] = way[k][8][8];
    }
}

int main( void )
{ 
    int caseNum;

    print_list();
    cin >> caseNum;
    while ( caseNum-- ) {
        cin >> stepNum;
        cout << list[stepNum] << endl;
    }
    return 0;
}
