/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:04:56 by maballet          #+#    #+#             */
/*   Updated: 2025/12/16 22:39:49 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    std::cout << GREYBG << "===== CLAPTRAP TEST =====" << STANDARD << std::endl;

    ClapTrap clap("CLAPPY");
    clap.attack("target");
    clap.takeDamage(5);
    clap.beRepaired(3);

    std::cout << std::endl;

    std::cout << GREYBG << "===== SCAVTRAP TEST =====" << STANDARD << std::endl;

    ScavTrap scav("SCAVVY");
    scav.attack("intruder");
    scav.takeDamage(20);
    scav.beRepaired(10);
    scav.guardGate();

    std::cout << std::endl;

    std::cout << GREYBG << "===== FRAGTRAP CONSTRUCTION TEST =====" << STANDARD << std::endl;

    FragTrap frag("FR4G-TP");

    std::cout << std::endl;

    std::cout << GREYBG << "===== FRAGTRAP ATTACK TEST =====" << STANDARD << std::endl;

    frag.attack("dummy");
    frag.attack("training bot");

    std::cout << std::endl;

    std::cout << GREYBG << "===== FRAGTRAP DAMAGE / REPAIR TEST =====" << STANDARD << std::endl;

    frag.takeDamage(40);
    frag.beRepaired(20);
    frag.takeDamage(90);
    frag.beRepaired(10); // ne doit rien faire si mort

    std::cout << std::endl;

    std::cout << GREYBG << "===== FRAGTRAP SPECIAL ABILITY TEST =====" << STANDARD << std::endl;

    FragTrap highFive("HIGHFIVE");
    highFive.highFivesGuys();

    std::cout << std::endl;

    std::cout << GREYBG << "===== ENERGY DEPLETION TEST =====" << STANDARD << std::endl;

    FragTrap tired("TIRED");

    for (int i = 0; i < 105; i++)
        tired.attack("wall");

    std::cout << std::endl;

    std::cout << GREYBG << "===== POLYMORPHISM & DESTRUCTION TEST =====" << STANDARD << std::endl;

    ClapTrap* poly = new FragTrap("POLY");
    poly->attack("polymorphic target");
    delete poly; // destruction inverse (FragTrap -> ClapTrap)

    std::cout << std::endl;

    std::cout << GREYBG << "===== END OF TESTS =====" << STANDARD << std::endl;

    return 0;
}
