#include <iostream>
using namespace std;
class Matrix{
	int rows;
	int cols;
	int elements[5][5];
	public:
		Matrix(int r, int c){
			rows=r;
			cols=c;
			for(int i=0;i<rows;i++){
				for(int j=0;j<cols;j++){
					elements[i][j]=0;
				}
			}
		}
	int getrows(){
		return rows;
	}	
	int getcols(){
		return cols;
	}
	void setelements(int i,int j,int x){
	elements[i][j]=x;
	}
	void display(){
			for(int i=0;i<rows;i++){
				for(int j=0;j<cols;j++){
					cout<<elements[i][j]<< " ";
				}
				cout<<"\n";
			}
	}
	Matrix add(const Matrix &m)const{
		if(rows!=m.rows || cols!=m.cols){
			cout<<"Matrices cannot be added"<<endl;
			return Matrix(0,0);
		}
		Matrix result(rows,cols);
			 for (int i=0;i<rows;i++) {
            for (int j=0;j<cols;j++) {
            	result.elements[i][j]=elements[i][j] + m.elements[i][j];
		}
	}
	return result;
}
Matrix product(const Matrix &m)const{
	if(cols!=m.rows){
		cout<<"Matrices cannot be multiplied"<<endl;
		return Matrix(0,0);
	}
	Matrix result(rows,m.cols);
		for (int i=0;i<rows;i++) {
            for (int j=0;j<m.cols;j++) {
            	result.elements[i][j]=0;
            	  for (int k=0;k<cols;k++){
            	  	  result.elements[i][j] += elements[i][k] * m.elements[k][j];
				  }
            }
        }
        return result;
}
};
int main(){
	Matrix A (2,2);
	Matrix B (2,2);
	
	A.setelements(0,0,1);
	A.setelements(0,1,2);
	A.setelements(1,0,3);
	A.setelements(1,1,4);
	
	B.setelements(0,0,5);
	B.setelements(0,1,6);
	B.setelements(1,0,7);
	B.setelements(1,1,8);
	
	cout<<"Matrix A"<<endl;
	A.display();
	cout<<"Matrix B"<<endl;
	B.display();
	Matrix sum=A.add(B);
	cout << "Matrix A + B:" << endl;
	sum.display();
	Matrix product=A.product(B);
	cout << "Matrix A * B:" << endl;
	product.display();
	return 0;
}



