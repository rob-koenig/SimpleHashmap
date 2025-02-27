// Name: Robert Koenig
// Section 011

#include <iostream>
#include "MakeModel.hpp"
#include <ctime>
#include <cstdlib>

using namespace std;
int main() {
	srand(time(nullptr));
	
	// Choose one of the 2 blocks to uncomment, depending on which input file
	// you'd like to run your hashmap on
	
	// Dr. Seuss input
	makeModel voice1("DrSeuss.txt","Seussout1.txt",true,true);
	makeModel voice2("DrSeuss.txt","Seussout2.txt",false,true);
	makeModel voice3("DrSeuss.txt","Seussout3.txt",true,false);
	makeModel voice4("DrSeuss.txt","Seussout4.txt",false,false);
	
	// OR
	
	// Great Expectations input
	//makeModel voice5("GEChap.txt","GEout1.txt",true,true);
	//makeModel voice6("GEChap.txt","GEout2.txt",false,true);
	//makeModel voice7("GEChap.txt","GEout3.txt",true,false);
	//makeModel voice8("GEChap.txt","GEout4.txt",false,false);

	return 0;
}
