#include <iostream>

using namespace std;

int main ()
{
	int a [3][3];
	int i, j, k, m, x, y, aux;
	
	
	for(i = 0; i < 3; i++){
    	for(j = 0; j < 3; j++){
        cout<<"Digite un valor: ";
        cin>>a[i][j];
    	}
	}
	
	cout << endl <<"Matriz Original" << endl;
	for (i = 0; i < 3; i++){
		for(j = 0; j < 3; j++)
			cout<<a[i][j]<<" ";
			cout<<endl;
	}
	
	
	for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (x = 0; x < 3; x++) {
                for (y = 0; y < 3; y++) {
                    if (a[i][j] < a[x][y]) {
                        aux = a[i][j];
                        a[i][j] = a[x][y];
                        a[x][y] = aux;
                    }
                }
            }
        }
    }
    
    
    cout <<endl << "Matriz ordenada:" << endl;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}