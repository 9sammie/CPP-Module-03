/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 21:23:11 by maballet          #+#    #+#             */
/*   Updated: 2026/01/07 17:43:36 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP
# define FRAGTRAP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

#define ORANGE		"\033[38;5;208m"
#define YELLOWBG	"\033[48;5;229m"

class FragTrap : public ClapTrap {

	public:
	
	FragTrap ();
	FragTrap (std::string name);
	FragTrap (const FragTrap&);
	FragTrap& operator=(const FragTrap&);
	virtual ~FragTrap();
	void highFivesGuys(void);
};

#endif