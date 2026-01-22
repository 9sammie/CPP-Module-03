/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:04:56 by maballet          #+#    #+#             */
/*   Updated: 2026/01/22 11:52:25 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    std::cout << GREYBG << "=== Creating ClapTraps ===" << STANDARD << std::endl << std::endl;
    ClapTrap a("Glinda");
    ClapTrap b("Elphaba");

    std::cout << std::endl << std::endl << GREYBG << "=== Basic attacks ===" <<STANDARD << std::endl << std::endl;
    a.attack("flyingMonkey");
    b.takeDamage(0);

    std::cout << std::endl << std::endl << GREYBG << "=== Taking damage ===" <<STANDARD << std::endl << std::endl;
    b.takeDamage(5);
    b.takeDamage(3);
    b.takeDamage(0);

    std::cout << std::endl << std::endl << GREYBG << "=== Repairing ===" <<STANDARD << std::endl << std::endl;
    b.beRepaired(4);
	a.beRepaired(1);
	
    std::cout << std::endl << std::endl << GREYBG << "=== Energy depletion ===" <<STANDARD << std::endl << std::endl;
    for (int i = 0; i < 11; i++)
        a.attack("theGreatWizard");

    std::cout << std::endl << std::endl << GREYBG << "=== Trying to act with no energy ===" <<STANDARD << std::endl << std::endl;
    a.beRepaired(5);

    std::cout << std::endl << std::endl << GREYBG << "=== Killing a ClapTrap ===" <<STANDARD << std::endl << std::endl;
    b.takeDamage(20);

    std::cout << std::endl << std::endl << GREYBG << "=== Trying to act with 0 HP ===" <<STANDARD << std::endl << std::endl;
    b.attack("EmeraldSoldier");
    b.beRepaired(5);

    return 0;
}
