/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdi <ahamdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:11:08 by ahamdi            #+#    #+#             */
/*   Updated: 2024/12/15 16:45:05 by ahamdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->name = "defaultCT";
    Hit_points = 10;
    Energy_points = 10;
    Attack_damage = 0;
    std::cout << "Default constructor of ClapTrap Called" << std::endl;
}
ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    Hit_points = 100;
    Energy_points = 50;
    Attack_damage = 20;
    std::cout << "Parameterized constructor of ClapTrap Called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Deconstractor  of ClapTrap Called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &original)
{
    this->name = original.name;
    this->Hit_points = original.Hit_points;
    this->Energy_points = original.Energy_points;
    this->Attack_damage = original.Attack_damage;
    std::cout << "ClapTrap Copy Constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& original)
{
    if (this !=  &original)
    {
        this->name = original.name;
        this->Hit_points = original.Hit_points;
        this->Energy_points = original.Energy_points;
        this->Attack_damage = original.Attack_damage;
    }
    std::cout << "ClapTrap Assignation operator called" << std::endl;
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (this->Energy_points > 0 && this->Hit_points > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->Attack_damage << " points of damage!" << std::endl;
		this->Energy_points--;
	}
	else
		std::cout << "ClapTrap " << this->name << " is not able to attack " << target << ", because he has not enough hit points." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->Hit_points <= 0 || this->Energy_points <= 0)
    {
        this->Hit_points -= amount;
        if (Hit_points < 0) 
		    this->Hit_points = 0;
        std::cout << this->name << " took " << amount << " damage, remaining Hit points: " << Hit_points << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->name << " is not able to takeDamage " << amount << ", because he has not enough hit points." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->Hit_points <= 0 || this->Energy_points <= 0)
	{
        std::cout << name << " cannot repair itself because it has no hit points or energy." << std::endl;
    }
	else
	{
		this->Energy_points--;
    	this->Hit_points += amount;
   		std::cout << this->name << " is repaired for " << amount << " Remaining Hit points: " << this->Hit_points << std::endl;
	}
    
}