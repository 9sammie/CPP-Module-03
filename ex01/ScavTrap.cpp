/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 16:28:44 by maballet          #+#    #+#             */
/*   Updated: 2026/01/23 17:49:37 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap () {

	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {

	std::cout << "ScavTrap argument constructor called" << std::endl;
	_HitPoint = 100;
	_EnergyPoint = 50;
	_AttackDmg = 20;
}

ScavTrap::ScavTrap (const ScavTrap& other) : ClapTrap(other) {

	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator = (const ScavTrap& other) {

	std::cout << "scavTrap copy assignment constructor called" << std::endl;
	if  (this != &other )
		ClapTrap::operator=(other);
	return *this;
}

ScavTrap::~ScavTrap() {

	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	
	if (_HitPoint <= 0 || _EnergyPoint <= 0)
    {
        std::cout << GREEN << GREENBG << "⋆˙⟡" << _name << "⟡˙⋆" <<
		STANDARD << " can't attack!" << std::endl;
        return;
    }
	std::cout << GREEN << GREENBG << "⋆˙⟡" << _name << "⟡˙⋆" <<
	STANDARD << " ferociously attacks " << target << ", causing " << _AttackDmg << " points of damage!" << std::endl;
    _EnergyPoint--;
}

void ScavTrap::guardGate() {

	if (_EnergyPoint <= 0)
	{
        std::cout << GREEN << GREENBG << "⋆˙⟡" << _name << "⟡˙⋆" <<
		STANDARD << " has no enrgy left..." << std::endl;
        return;
	}
    std::cout << GREEN << GREENBG << "⋆˙⟡" << _name << "⟡˙⋆" <<
	STANDARD << " is now in Gate keeper mode!" << std::endl;
}
