/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo-mar <hugo-mar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 17:59:31 by hugo-mar          #+#    #+#             */
/*   Updated: 2025/06/14 23:16:31 by hugo-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

void	ignoreLine()
{
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int	getIdx()
{
	int	idx = 0;
	
	std::cout << "Who ya lookin’ for? (IDX)\n> ";
	while (idx < 1 || idx > 8)
	{
		while (!(std::cin >> idx))
		{
			std::cout << "\nGimme an index!\n> ";
			std::cin.clear();
			ignoreLine();
		}
		if (idx < 1 || idx > 8)
			std::cout << "\n8 contacts. That’s all this beauty can take.\n> ";
	}
	
	return idx;
}

static char deaccent(wchar_t wc)
{
    switch (wc)
    {
        case L'á': case L'à': case L'â': case L'ã': return 'a';
        case L'é': case L'ê':                       return 'e';
        case L'í':                                  return 'i';
        case L'ó': case L'ô': case L'õ':            return 'o';
        case L'ú': case L'ü':                       return 'u';
        case L'ç':                                  return 'c';

        case L'Á': case L'À': case L'Â': case L'Ã': return 'A';
        case L'É': case L'Ê':                       return 'E';
        case L'Í':                                  return 'I';
        case L'Ó': case L'Ô': case L'Õ':            return 'O';
        case L'Ú': case L'Ü':                       return 'U';
        case L'Ç':                                  return 'C';

        default:                                    return 0;
    }
}

static std::string stripAccents(const std::string& s)
{
    std::string 	out;
    const char*		p = s.c_str();
    std::size_t		left = s.size();
    wchar_t			wc;

    mbtowc(NULL, NULL, 0);							// reseta estado

    while (left)
    {
        int n = mbtowc(&wc, p, left);

        if (n <= 0)									// em caso de falha
		{
            out.push_back(*p);
            ++p;
			--left;
            mbtowc(NULL, NULL, 0);
            continue;
        }

        char base = deaccent(wc);

        if (base)									// acento foi removido
            out.push_back(base);
        else if (wc < 128)							// já era ASCII
            out.push_back(static_cast<char>(wc));
        else										// carácter fora da tabela ASCII
            out.push_back('?');

        p += n;
        left -= n;
    }

    return out;
}

void printField(const std::string& field, char lastChar)
{
    std::string clean = stripAccents(field);

	std::string display = (clean.length() >= 10) ? clean.substr(0, 9) + '.' : clean;

    std::cout << std::right << std::setw(10) << display << lastChar;
}
