/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdi <ahamdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 21:35:19 by ahamdi            #+#    #+#             */
/*   Updated: 2024/12/15 15:34:48 by ahamdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    this->name = "defaultST";
    Hit_points = 100;
    Energy_points = 50;
    Attack_damage = 20;
    this->guarding = false;
    std::cout << "Default constructor of ScavTrap Called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    this->name = name;
    Hit_points = 100;
    Energy_points = 50;
    Attack_damage = 20;
    this->guarding = false;
    std::cout << "Parameterized constructor of ScavTrap Called" << std::endl;
}
ScavTrap::ScavTrap(ScavTrap &original)
{
    this->name = original.name;
    this->Hit_points = original.Hit_points;
    this->Energy_points = original.Energy_points;
    this->Attack_damage = original.Attack_damage;
    std::cout << "Parameterized constructor of ScavTrap Called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& original)
{
    if (this !=  &original)
    {
        this->name = original.name;
        this->Hit_points = original.Hit_points;
        this->Energy_points = original.Energy_points;
        this->Attack_damage = original.Attack_damage;
    }
    std::cout << "ScavTrap Assignation operator called" << std::endl;
    return (*this);
}
void ScavTrap::attack(const std::string& target)
{
    if (this->Energy_points > 0 && this->Hit_points > 0)
	{
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->Attack_damage << " points of damage!" << std::endl;
		this->Energy_points--;
	}
	else
		std::cout << "ScavTrap " << this->name << " is not able to attack " << target << ", because he has not enough hit points." << std::endl;
}
ScavTrap::~ScavTrap()
{
    std::cout << "Deconstractor  of ScavTrap Called" << std::endl;
}
void	ScavTrap::guardGate(void)
{
	if (this->guarding == false)
	{
		this->guarding = true;
		std::cout << "ScavTrap " << this->name << " is now guarding the gate." << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->name << " is already guarding the gate." << std::endl;
}