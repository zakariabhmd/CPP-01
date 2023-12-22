#include <fstream>
#include <iostream>

int	replace(char **av, std::string str)
{
	std::ofstream	outfile;
	int				pos;

	outfile.open((std::string(av[1]) + ".replace").c_str());
	if (outfile.fail())
		return (1);
	int i = 0;
	while (i < (int)str.size())
	{
		pos = str.find(av[2], i);
		if (pos != -1 && pos == i)
		{
			outfile << av[3];
			i += std::string(av[2]).size() - 1;
		}
		else
			outfile << str[i];
		i++;
	}
	outfile.close();
	return (0);
}

int	main(int ac, char **av)
{
	char			c;
	std::ifstream	nfile;
	std::string		str;

	if (ac != 4)
	{
		std::cout << "ERROR : filename and two strings" << std::endl;
		return (1);
	}
	nfile.open(av[1]);
	if (nfile.fail())
	{
		std::cout << "Error: " << av[1] << ":" << \
		"la youjad file or directory" << std::endl;
		return (1);
	}
	while(!nfile.eof() && nfile >> std::noskipws >> c)
		str += c;
	nfile.close();
	return (replace(av, str));
}