/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:04:56 by maballet          #+#    #+#             */
/*   Updated: 2026/01/25 12:15:09 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    std::cout << GREYBG << "===== CLAPTRAP TEST =====" << STANDARD << std::endl << std::endl;
    ClapTrap clap("Stella");

    clap.attack("a wall");
    clap.takeDamage(5);
    clap.beRepaired(3);

    std::cout << std::endl << std::endl << GREYBG << "===== SCAVTRAP TEST =====" << STANDARD << std::endl << std::endl;
    ScavTrap scav("Blum");

    scav.attack("Stormy");
    scav.takeDamage(30);
    scav.beRepaired(10);
    scav.guardGate();

    std::cout << std::endl << std::endl << GREYBG << "===== POLYMORPHISM CHECK =====" << STANDARD << std::endl << std::endl;
    ClapTrap *ptr = new ScavTrap("Musa");

    ptr->attack("Darcy");
    delete ptr;

    return 0;
}
