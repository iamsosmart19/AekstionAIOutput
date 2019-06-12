#include "colorise.hpp"

int main(int argc, char* argv[]) {
	std::fstream infile("output.txt", std::ios::in);
	std::fstream outfile("color.txt", std::ios::out);
	std::string datafile = "";
	
	//regex
	std::regex r("[1-3]{0,1}[0-9]/[1]{0,1}[0-9]/[0-9]{1,2}");
	bool isUni = false;

	outfile << "REFERENCE TABLE FOR VALUES" << std::endl;
	for(int i = 0; i < UN; i++) {
		outfile << i << ": " << uniChars[i] << ", ";
	}
	outfile << std::endl;

	while(std::getline(infile, datafile)) {
		if (regex_search(datafile, r)) {
			outfile << datafile << std::endl;
			isUni = true;
			continue;
		}
		if(datafile == "\n") {
			outfile << datafile << std::endl;
			isUni = false;
			continue;
		}
		if(datafile.substr(0,6) == "t     "){
			outfile << datafile.substr(6, datafile.length()) << std::endl; 	
			continue;
		}
		if(isUni) {
			for(int i = 0; i < datafile.length(); i += 3) {
				outfile << "\u001b[38;5;"
						<< datafile.substr(i,2) << "m"
						<< "\u001b[48;5;236m"
					   	<< datafile.substr(i,2)
					   	<< "\u001b[38;5;0m"; 
				/*std::cout << "\u001b[38;5;"
						  << datafile.substr(i,i+2) << "m"
						  << datafile.substr(i,i+2) 
						  << "\u001b[38;5;0m" << " ";
				*/
			}
			outfile << "\u001b[0m" << std::endl;
			//std::cout << std::endl;
		}
	}

	infile.close();
}
