/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljeribha <ljeribha@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 16:55:18 by ljeribha          #+#    #+#             */
/*   Updated: 2025/12/10 15:38:07 by ljeribha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/SedIsForLosers.hpp"

int main(int ac, char **av) {
        if (ac != 4) {
                std::cout << "Usage: ./program <filename> <search> <replace>" << std::endl;
        }
        std::string filename(av[1]);
        std::string wordSearch(av[2]);
        std::string wordReplace(av[3]);
        std::string newText;

        try {
                std::string content = readFile(filename);
                std::string replaced = replaceAll(content, wordSearch, wordReplace);
                writeFile(filename + ".replace", replaced);
        }
        catch (const std::exception& e) {
                std::cerr << e.what() << std::endl;
                return 1;
        }
        return 0;
}