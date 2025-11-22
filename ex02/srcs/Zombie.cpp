/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljeribha <ljeribha@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 15:35:45 by ljeribha          #+#    #+#             */
/*   Updated: 2025/11/22 15:37:27 by ljeribha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie::Zombie( void ) {
        
}

Zombie::Zombie( std::string name ) : _name(name) {
        std::cout << "Zombie " << _name << " created!" << std::endl;
}

Zombie::~Zombie( void ) {
        std::cout << _name << " is destroyed!" << std::endl;
}

void    Zombie::announce( void ) {
        std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setName( std::string name ) {
        _name = name;
        std::cout << "Zombie " << _name << " created!" << std::endl;
}