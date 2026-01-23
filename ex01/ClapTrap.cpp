/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 13:32:44 by maballet          #+#    #+#             */
/*   Updated: 2026/01/23 16:55:48 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap () {

	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap (std::string name): _name(name), _HitPoint(10), _EnergyPoint(10), _AttackDmg(0){

	std::cout << "ClapTrap argument constructor called" << std::endl;
}

ClapTrap::ClapTrap (const ClapTrap& other) {

	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator = (const ClapTrap& other) {

	std::cout << "ClapTrap copy assignment constructor called" << std::endl;
	if  (this != &other )
	{
		_name = other._name;
		_HitPoint = other._HitPoint;
		_EnergyPoint = other._EnergyPoint;
		_AttackDmg = other._AttackDmg;
	}
	return *this;
}

ClapTrap::~ClapTrap () {

	std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {

		if (this->_HitPoint <= 0 || this->_EnergyPoint <= 0) {
			std::cout << GREEN << GREENBG << "⋆˙⟡" << this->_name << "⟡˙⋆" <<
			STANDARD << " is not up to anything " << SADFACE << std::endl;	
			return;
		}
		std::cout << GREEN << GREENBG "⋆˙⟡" << this->_name << "⟡˙⋆" <<
		STANDARD << " attacks " << target << ", causing " << this->_AttackDmg <<
		" points of damage !" << std::endl;
		if (_EnergyPoint > 0) this->_EnergyPoint -= 1;
		if (_EnergyPoint < 0) _EnergyPoint = 0;
	}

void ClapTrap::takeDamage(unsigned int amount) {

	std::cout << GREEN << GREENBG << "⋆˙⟡" << this->_name << "⟡˙⋆" <<
	STANDARD << " (" << this->_HitPoint << "pv), " << "took " <<
	amount << " points of damage !" << std::endl;
	this->_HitPoint -= amount;
	if (_HitPoint > 0) this->_HitPoint -= 1;
	if (_HitPoint < 0) _HitPoint = 0;
}

void ClapTrap::beRepaired(unsigned int amount) {

	if (this->_HitPoint <= 0 || this->_EnergyPoint <= 0) {
		std::cout << GREEN << GREENBG << "⋆˙⟡" << this->_name << "⟡˙⋆" <<
		STANDARD << " is not up to anything " << SADFACE << std::endl;	
		return;
	}
	std::cout << GREEN << GREENBG << "⋆˙⟡" << this->_name << "⟡˙⋆" <<
	STANDARD << " (" << this->_HitPoint << "pv), " << "recovered " <<
	amount << " hit points .☘︎ ݁˖" << std::endl;
	this->_HitPoint += amount;
	if (_EnergyPoint > 0) this->_EnergyPoint -= 1;
	if (_EnergyPoint < 0) _EnergyPoint = 0;
}
