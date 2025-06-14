#include <iostream>
#include <string>
#include <cctype>

std::string	Megaphone(const std::string &str){

	std::string	amplified = str;
	for(std::string::size_type i = 0; i < amplified.size(); ++i)
		amplified[i] = toupper(amplified[i]);
	return amplified;
}

int	main(int argc, char  *argv[]) {

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		for (int j = 1; j < argc; j++)
		{
			std::cout << Megaphone(argv[j]);
			if (j < argc - 1)
				std::cout << ' ';
		}
		std::cout << '\n';
	}
	return 0;
}
