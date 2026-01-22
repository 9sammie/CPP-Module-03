/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:04:56 by maballet          #+#    #+#             */
/*   Updated: 2026/01/22 20:50:17 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    std::cout << std::endl << GREYBG << "===== CLAPTRAP TEST =====" << STANDARD << std::endl << std::endl;

    ClapTrap clap("CLAPPY");
    clap.attack("target");
    clap.takeDamage(5);
    clap.beRepaired(3);

    std::cout << std::endl;

    std::cout << std::endl << GREYBG << "===== SCAVTRAP TEST =====" << STANDARD << std::endl << std::endl;

    ScavTrap scav("SCAVY");
    scav.attack("intruder");
    scav.takeDamage(20);
    scav.beRepaired(10);
    scav.guardGate();

    std::cout << std::endl;

    std::cout << std::endl << GREYBG << "===== FRAGTRAP CONSTRUCTION TEST =====" << STANDARD << std::endl << std::endl;

    FragTrap frag("FRAGGY");

    std::cout << std::endl;

    std::cout << std::endl << GREYBG << "===== FRAGTRAP ATTACK TEST =====" << STANDARD << std::endl << std::endl;

    frag.attack("FRAGGY");
    frag.attack("FRAGOS");

    std::cout << std::endl;

    std::cout << std::endl << GREYBG << "===== FRAGTRAP DAMAGE / REPAIR TEST =====" << STANDARD << std::endl << std::endl;

    frag.takeDamage(40);
    frag.beRepaired(20);
    frag.takeDamage(90);
    frag.beRepaired(10);

    std::cout << std::endl;

    std::cout << std::endl << GREYBG << "===== FRAGTRAP SPECIAL ABILITY TEST =====" << STANDARD << std::endl << std::endl;

    FragTrap highFive("FRAGGY");
    highFive.highFivesGuys();

    std::cout << std::endl;

    std::cout << std::endl << GREYBG << "===== ENERGY DEPLETION TEST =====" << STANDARD << std::endl << std::endl;

    FragTrap tired("FRAGGY");

    for (int i = 0; i < 105; i++)
        tired.attack("wall");

    std::cout << std::endl;

    std::cout << std::endl << GREYBG << "===== POLYMORPHISM & DESTRUCTION TEST =====" << STANDARD << std::endl << std::endl;

    ClapTrap* poly = new FragTrap("POLY");
    poly->attack("polymorphic target");
    delete poly;

    return 0;
}
