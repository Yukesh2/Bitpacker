#include<iostream>

int main(){
	
	//creating the pointer of 3 array 
	
	int** a = new int*[3];
	//this will hold the memory address only
	//not the actual value 
	

	//this will put the address of the value 
	//inside the pointer that we intilized 
	
	for(int i=0;i<3;i++){
		a[i] = new int[3];
	}

	//now inserting the vlaue inside them 
	
	std::cout<<"Enter the numbers: "<<std::endl;

	for(int j=0;j<3;j++){

		for(int k=0;k<3;k++){
			int h = 0 ;
			std::cin>>h;

			a[j][k]=h;

		}
	}


	//for outputing the values 
	
	for(int t =0;t<3;t++){
		for(int g=0; g<3; g++){
			std::cout<<a[t][g]<<std::endl;
		}
	}

	//deleting the array of elements 
	for(int m=0; m<3;m++){
		delete[] a[m];
	}
	
			

         delete[] a;	




	return 0;
}

