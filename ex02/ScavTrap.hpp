/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 16:23:47 by maballet          #+#    #+#             */
/*   Updated: 2025/12/16 21:43:53 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class ScavTrap : public ClapTrap {

	public:

	ScavTrap( std::string name = "");
	ScavTrap(const ScavTrap&);
	ScavTrap& operator=(const ScavTrap&);
	virtual ~ScavTrap();
	
	void attack(const std::string& target);
	void guardGate();

};

#endif