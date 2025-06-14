/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugo-mar <hugo-mar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 17:59:41 by hugo-mar          #+#    #+#             */
/*   Updated: 2025/06/14 19:54:32 by hugo-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <iostream>
# include <limits>
# include <iomanip>
# include <string>
# include <cstdlib>   // mbtowc, setlocale
# include <clocale>   // setlocale

void	ignoreLine();
int		getIdx();
void	printField(const std::string& field, char lastChar);

#endif