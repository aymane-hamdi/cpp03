/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdi <ahamdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 22:07:22 by ahamdi            #+#    #+#             */
/*   Updated: 2024/12/15 16:51:08 by ahamdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    this->name = "defaultFT";
    Hit_points = 100;
    Energy_points = 100;
    Attack_damage = 30;
    std::cout << "Default constructor of FragTrap Called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    this->name = name;
    Hit_points = 100;
    Energy_points = 100;
    Attack_damage = 30;
    std::cout << "Parameterized constructor of FragTrap Called" << std::endl;
}
void FragTrap::attack(const std::string& target)
{
    if (this->Energy_points > 0 && this->Hit_points > 0)
	{
		std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->Attack_damage << " points of damage!" << std::endl;
		this->Energy_points--;
	}
	else
		std::cout << "FragTrap " << this->name << " is not able to attack " << target << ", because he has not enough hit points." << std::endl;
}
FragTrap::FragTrap(FragTrap &original)
{
    this->name = original.name;
    this->Hit_points = original.Hit_points;
    this->Energy_points = original.Energy_points;
    this->Attack_damage = original.Attack_damage;
    std::cout << "copy constructor of FragTrap Called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& original)
{
    if (this !=  &original)
    {
        this->name = original.name;
        this->Hit_points = original.Hit_points;
        this->Energy_points = original.Energy_points;
        this->Attack_damage = original.Attack_damage;
    }
    std::cout << "FragTrap Assignation operator called" << std::endl;
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "Deconstractor  of FragTrap Called" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << name << ": You want a high five?\n\t*WHAMM*\nHere you go." << std::endl;
}