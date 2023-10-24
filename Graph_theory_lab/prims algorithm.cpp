#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
using namespace std;

#define V 11
#define HIGH 999
int main()
{
    //Matrix:
    int M[V][V]= {
            // 1 2 3 4 5 6 7 8 9 10 11
        /*1*/ {0,5,4,0,0,2,0,0,0,0,0},
        /*2*/ {5,0,3,7,0,0,0,0,0,0,0},
        /*3*/ {4,3,0,1,8,0,0,0,3,0,0},
        /*4*/ {0,7,1,0,5,9,0,4,0,1,0},
        /*5*/ {0,0,8,5,0,0,0,0,0,0,6},
        /*6*/ {2,0,0,9,0,0,6,9,0,0,0},
        /*7*/ {0,0,0,0,0,6,0,4,0,0,0},
        /*8*/ {0,0,0,4,0,9,4,0,0,0,0},
        /*9*/ {0,0,3,0,0,0,0,0,0,0,0},
        /*10*/{0,0,0,1,0,0,0,0,0,0,2},
        /*11*/{0,0,0,0,6,0,0,0,0,2,0}
        };
    int v_array[V];
    memset(v_array,false,sizeof(v_array));
    v_array[0]=true;
    cout << "LINE : WEIGHT\n";
    int n_edges = 0;
    while(n_edges < V-1){
        int min = HIGH;
        int r=0,c=0;
        for(int i=0;i<11;++i){
            if(v_array[i]){
        for(int j=0;j<11;++j){
            if(min > M[i][j]){
                if(!v_array[j] && M[i][j]){
                    min = M[i][j];
                    r = i;
                    c = j;
                    }
                }
            }
            }
        }
        cout << " " << r << "-" << c << " : " << M[r][c];
        cout << endl;
        v_array[c] = true;
        n_edges++;
    }
    return 0;
}