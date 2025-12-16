/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:04:56 by maballet          #+#    #+#             */
/*   Updated: 2025/12/16 17:38:43 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    std::cout << GREYBG << "===== CLAPTRAP TEST =====" << STANDARD << std::endl;
    ClapTrap clap("BasicBot");

    clap.attack("a wall");
    clap.takeDamage(5);
    clap.beRepaired(3);

    std::cout << std::endl << std::endl << GREYBG << "===== SCAVTRAP TEST =====" << STANDARD << std::endl << std::endl;
    ScavTrap scav("Serena");

    scav.attack("an intruder");
    scav.takeDamage(30);
    scav.beRepaired(10);
    scav.guardGate();

    std::cout << std::endl << std::endl << GREYBG << "===== POLYMORPHISM CHECK =====" << STANDARD << std::endl << std::endl;
    ClapTrap *ptr = new ScavTrap("Guardian");

    ptr->attack("someone");   // calls ClapTrap::attack (not virtual)
    delete ptr;                // MUST call ScavTrap then ClapTrap destructor

    std::cout << std::endl << std::endl << GREYBG << "===== END OF MAIN =====" << STANDARD << std::endl << std::endl;
    return 0;
}
