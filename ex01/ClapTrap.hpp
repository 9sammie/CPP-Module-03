/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 13:21:06 by maballet          #+#    #+#             */
/*   Updated: 2026/01/07 17:30:01 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

#define STANDARD	"\033[0m"
#define GREEN		"\033[38;5;34m"
#define GREENBG		"\033[48;5;193m"
#define PINK		"\033[38;5;199m"
#define PINKBG		"\033[48;5;225m"
#define GREYBG		"\033[48;5;237m"
#define SADFACE		PINK << PINKBG << "(╥ ω ╥)" << STANDARD

class ClapTrap {

	protected:
	
	std::string	_name;
	int			_HitPoint;
	int			_EnergyPoint;
	int			_AttackDmg;

	public:

	ClapTrap ();
	ClapTrap (std::string name);
	ClapTrap (const ClapTrap&);
	ClapTrap& operator = (const ClapTrap&);
	virtual ~ClapTrap ();
	
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	
};

#endif