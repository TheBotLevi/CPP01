/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljeribha <ljeribha@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 12:41:10 by ljeribha          #+#    #+#             */
/*   Updated: 2025/11/21 14:53:59 by ljeribha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie::Zombie( std::string name ) : _name(name) {
        std::cout << "Zombie " << _name << " created!" << std::endl;
}

Zombie::~Zombie( void ) {
        std::cout << _name << " is destroyed!" << std::endl;
}

void    Zombie::announce( void ) {
        std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}