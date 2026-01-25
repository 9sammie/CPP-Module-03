/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 11:38:01 by maballet          #+#    #+#             */
/*   Updated: 2026/01/25 13:39:00 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {

	std::cout << "DiamondTrap default constructor called" << std::endl;
	_HitPoint = FragTrap::_HitPoint;
	_EnergyPoint = ScavTrap::_EnergyPoint;
	_AttackDmg = FragTrap::_AttackDmg;
}

DiamondTrap::DiamondTrap (std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name) {

	std::cout << "DiamondTrap default named constructor called" << std::endl;
	_HitPoint = FragTrap::_HitPoint;
	_EnergyPoint = ScavTrap::_EnergyPoint;
	_AttackDmg = FragTrap::_AttackDmg;
}

DiamondTrap::DiamondTrap ( const DiamondTrap& other ): ClapTrap(other), ScavTrap(other), FragTrap(other) {

	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = other;
}

DiamondTrap& DiamondTrap::operator = ( const DiamondTrap& other ) {

	std::cout << "DiamondTrap copy assignment constructor called" << std::endl;
	if (this != &other)
	{
		ClapTrap::operator = (other);
		_name = other._name;
	}
	return *this;
}

DiamondTrap::~DiamondTrap() {

	std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::attack(const std::string& target) {

	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {

	std::cout << "name          : " << WHITE << "⋆˙⟡" << _name << "⟡˙⋆" << STD << std::endl;
	std::cout << "clap_trap_name: " << WHITE << "⋆˙⟡" << ClapTrap::_name << "⟡˙⋆" << STD << std::endl;
}
