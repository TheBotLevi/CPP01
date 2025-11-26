/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljeribha <ljeribha@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 15:32:57 by ljeribha          #+#    #+#             */
/*   Updated: 2025/11/26 13:50:36 by ljeribha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB {
        public:
                HumanB(const std::string &name);
                void    attack();
                void    setWeapon(Weapon &weapon);
        private:
                Weapon *weapon;
                std::string _name;
};

#endif