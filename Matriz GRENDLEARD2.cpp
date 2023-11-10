#include <iostream>

using namespace std;

int main(){
	int a[4][4];
	int b[4][4];
	int c[4][4];
	int i; 
	int j; 
	i = 0, 
	j = 0;
	
	cout<<"Matriz A";
	cout<<endl;
	for(i = 0; i < 4; i++){
    	for(j = 0; j < 4; j++){
        	cout<<"Digite un valor: ";
        	cin>>a[i][j];
    }
}

	cout << endl;
	cout<<"Matriz A"<<endl;
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++)
			cout << a[i][j]<<" ";
			cout << endl;
	}

	cout << endl;
	cout<<"Matriz B";
	cout<<endl;
	for(i = 0; i < 4; i++){
    	for(j = 0; j < 4; j++){
        	cout<<"Digite un valor: ";
        	cin>>b[i][j];
    }
}

	cout << endl;
	cout<<"Matriz B"<<endl;
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++)
			cout << b[i][j]<<" ";
			cout << endl;
	}

	for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

	cout << endl;
	cout << "Matriz C (Resultado de la suma):";
	cout << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++)
            cout << c[i][j] << " ";
        	cout << endl;
    }
    
    return 0;
}