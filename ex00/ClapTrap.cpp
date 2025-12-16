/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 13:32:44 by maballet          #+#    #+#             */
/*   Updated: 2025/12/16 16:14:16 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap () {}

ClapTrap::ClapTrap ( std::string name ): _name(name), _HitPoint(10), _EnergyPoint(10), _AttackDmg(0){

	std::cout << "constructor called" << std::endl;
}

ClapTrap::ClapTrap ( const ClapTrap& other ) {

	std::cout << "copy constructor called" << std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator = ( const ClapTrap& other ) {

	std::cout << "copy assignment constructor called" << std::endl;
	if  (this != &other )
		this->_name = other._name;
	return *this;
}

ClapTrap::~ClapTrap () {

	std::cout << "destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {

		if (this->_HitPoint <= 0 || this->_EnergyPoint <= 0) {
			std::cout << GREEN << GREENBG << "⋆˙⟡" << this->_name << "⟡˙⋆" << STANDARD << " is not up to anything " << SADFACE << std::endl;	
			return;
		}
		std::cout << GREEN << GREENBG "⋆˙⟡" << this->_name << "⟡˙⋆" << STANDARD << " attacks " << target << ", causing " << this->_AttackDmg << " points of damage !" << std::endl;
		if (_EnergyPoint > 0) this->_EnergyPoint -= 1;
		if (_EnergyPoint < 0) _EnergyPoint = 0;
	}

void ClapTrap::takeDamage(unsigned int amount) {

	std::cout << GREEN << GREENBG << "⋆˙⟡" << this->_name << "⟡˙⋆" << STANDARD << " (" << this->_HitPoint << "pv), " << "took " << amount << " points of damage !" << std::endl;
	this->_HitPoint -= amount;
	if (_HitPoint > 0) this->_HitPoint -= 1;
	if (_HitPoint < 0) _HitPoint = 0;
}

void ClapTrap::beRepaired(unsigned int amount) {

	if (this->_HitPoint <= 0 || this->_EnergyPoint <= 0) {
		std::cout << GREEN << GREENBG << "⋆˙⟡" << this->_name << "⟡˙⋆" << STANDARD << " is not up to anything " << SADFACE << std::endl;	
		return;
	}
	std::cout << GREEN << GREENBG << "⋆˙⟡" << this->_name << "⟡˙⋆" << STANDARD << " (" << this->_HitPoint << "pv), " << "recovered " << amount << " hit points .☘︎ ݁˖" << std::endl;
	this->_HitPoint += amount;
	if (_EnergyPoint > 0) this->_EnergyPoint -= 1;
	if (_EnergyPoint < 0) _EnergyPoint = 0;
}
