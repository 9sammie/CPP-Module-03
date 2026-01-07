/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 21:22:47 by maballet          #+#    #+#             */
/*   Updated: 2026/01/07 17:42:20 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {

	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap (std::string name): ClapTrap(name) {

	std::cout << "FragTrap argument constructor called" << std::endl;
	_HitPoint = 100;
	_EnergyPoint = 100;
	_AttackDmg = 30;
}

FragTrap::FragTrap ( const FragTrap& other ): ClapTrap(other) {

	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator = ( const FragTrap& other ) {

	std::cout << "FragTrap copy assignment constructor called" << std::endl;
	if (this != &other)
		ClapTrap::operator = (other);
	return *this;
}

FragTrap::~FragTrap() {

	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys( void ) {

	std::cout << ORANGE << YELLOWBG << "HeY gUyS HoOoow's iT goIing ? ( ˘ ³˘)ノ°ﾟº❍｡" << STANDARD << std::endl;
}
