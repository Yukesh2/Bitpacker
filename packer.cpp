#include<iostream>
#include<cstdint>

int main(){
	//first declare the unsinged int 
	int value;
	std::cout<<"enter an value"<<std::endl;
	std::cin>>value;
	int value1;
	std::cout<<"enter an second value"<<std::endl;
	std::cin>>value1;


	//type casting the integer into the usingedint
	
	std::uint8_t first = (std::uint8_t) value;

	std::uint8_t second = (std::uint8_t) value1;



	//packing the uint8_t into uint32_t
	

	std::uint32_t packed=0;
	std::uint32_t packed1=0;

	// | this operator will shift the vlaue with removing the first one 
        packed |= (uint32_t)(first)<<0;//<< this side the number by 8 position.

	

	packed |= (uint32_t)(second)<<8;//this shift the number by 8 position in right.

	std::cout<<"Packed: "<<packed<<std::endl;

	//now unpacking 

	std::uint8_t unpacked = packed & 0xFF;
	std::cout<<"Unpacked: " << (int)unpacked<<std::endl;

	std::uint8_t unpacked1 = (packed >> 8) & 0xFF;

	std::cout<<"Unpacked: " << (int)unpacked1<<std::endl;



        	

	return 0;
}

