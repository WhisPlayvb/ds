#include<iostream>
using namespace std;

int main(){
	int mat[3][4] = {
		{0, 0, 8, 0},
		{0, 9, 0, 2},
		{5, 0, 3, 0}
	};
	
	int i, j, size = 0;
	
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			if(mat[i][j] != 0){
				size ++;
			}
		}
	}
	
	int sparceMatrix[3][size];
	int k = 0;
	for(i = 0;i<3;i++){
		for(j=0;j<4;j++){
			if(mat[i][j] != 0){
				sparceMatrix[0][k] = i;
				sparceMatrix[1][k] = j;
				sparceMatrix[2][k] = mat[i][j];
				k++;
			}
		}
	}
	cout<<"Sparce Matrix : "<<endl;
	for(i=0;i<3;i++){
		for(j=0;j<size;j++){
			cout<<sparceMatrix[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	int transposeMatrix[100][3];
	k = 1;
	for(i=0;i<3;i++){
		for(int z=0;z<sparceMatrix[0][1];z++){
			if(sparceMatrix[i][1] == z){
				transposeMatrix[k][0] = sparceMatrix[i][1];
				transposeMatrix[k][1] = sparceMatrix[i][0];
				transposeMatrix[k][2] = sparceMatrix[i][2];	
				k++;			
			}
		}
	}
	
	cout<<"Sparce Matrix : "<<endl;
	for(i=0;i<3;i++){
		for(j=0;j<sparceMatrix[0][1];j++){
			cout<<transposeMatrix[i][j];
		}
		cout<<endl;
	}
	return 0;
}
