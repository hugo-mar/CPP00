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
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int j = 1; j < argc; j++)
			std::cout << Megaphone(argv[j]);
		std::cout << std::endl;
	}
	return 0;
}

/* VERSÃO FINAL DO MEU CÓDIGO */

// int main(int argc, char **argv){

// 	std::string megaphone;

// 	if (argc == 1)	{
// 		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
// 	}
// 	else	{
// 		for (int j = 1; j < argc; j++)	{
// 			megaphone = argv[j];
// 			std::transform(megaphone.begin(), megaphone.end(), megaphone.begin(), ::toupper);
// 			std::cout << megaphone;
// 		}
// 		std::cout << std::endl;
// 	}
// 	return 0;
// }

/* ESTUDO 1 - versão 2*/

// std::string	Megaphone(const std::string &str){

// 	std::string	converted = str;
	
// 	std::transform(converted.begin(), converted.end(), converted.begin(), ::toupper);
// 	return converted;
// }

// int	main(int argc, char  *argv[]) {

// 	if (argc == 1)
// 		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
// 	else
// 	{
// 		for (int j = 1; j < argc; j++)
// 			std::cout << Megaphone(argv[j]);
// 		std::cout << std::endl;
// 	}
// 	return 0;
// }

/* ESTUDO 1 */

// std::string	Megaphone(const std::string &str){

// 	std::string	converted = str;

// 	for(std::string::size_type i = 0; i < converted.size(); ++i)
// 		converted[i] = std::toupper(converted[i]);
	
// 	return converted;
// }

// int	main(int argc, char  *argv[]) {

// 	if (argc == 1)
// 		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
// 	else
// 	{
// 		for (int j = 1; j < argc; j++)
// 			std::cout << Megaphone(argv[j]);
// 		std::cout << std::endl;
// 	}
// 	return 0;
// }

// int	main(int argc, char  *argv[]) {

// 	if (argc == 1)
// 		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
// 	else
// 	{
// 		for (int j = 1; argv[j]; j++)
// 			for (int i = 0; argv[j][i]; i++ )
// 				std::cout.put(std::toupper(argv[j][i]));
// 		std::cout << std::endl;
// 	}
// 	return 0;

/* UPDATE 1*/

// int	main(int argc, char  *argv[]) {

// 	if (argc == 1)
// 		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
// 	else
// 	{
// 		for (int j = 1; argv[j]; j++)
// 			for (int i = 0; argv[j][i]; i++ )
// 				std::cout.put(std::toupper(argv[j][i]));
// 		std::cout << std::endl;
// 	}
// 	return 0;
	
// }

/* MY VERSION */

// int	main(int argc, char **argv)	{

// 	if (argc == 1)
// 		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
// 	else
// 	{
// 		for (size_t j = 1; argv[j]; j++)
// 			for (size_t i = 0; argv[j][i]; i++ )
// 				std::cout << (char)toupper(argv[j][i]);
// 		std::cout << std::endl;
// 	}
// 	return 0;
// }