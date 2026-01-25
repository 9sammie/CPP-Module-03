/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 11:36:58 by maballet          #+#    #+#             */
/*   Updated: 2026/01/25 13:43:21 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#define WHITE	"\033[38;5;253m\033[48;5;15m"
#define STD		"\033[0m"

# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include <iostream>
# include <string>

class DiamondTrap : public ScavTrap, public FragTrap {

	private:

	std::string _name;
	
	public:
	
	DiamondTrap ();
	DiamondTrap (std::string name);
	DiamondTrap (const DiamondTrap&);
	DiamondTrap& operator=(const DiamondTrap&);
	virtual ~DiamondTrap();

	void attack(const std::string& target);
	void whoAmI();
};

#endif