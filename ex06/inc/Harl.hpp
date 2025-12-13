/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljeribha <ljeribha@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 17:22:32 by ljeribha          #+#    #+#             */
/*   Updated: 2025/12/13 12:18:31 by ljeribha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Harl {
        public:
                void complain(std::string level);
                static void (Harl::*functions[4])();
        private:
                enum Level {
                        DEBUG,
                        INFO,
                        WARNING,
                        ERROR,
                        INVALID
                };
                Level parseLevel(const std::string& level) const;
                void debug( void );
                void info( void );
                void warning( void );
                void error( void );
};