/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedIsForLosers.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljeribha <ljeribha@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 16:57:27 by ljeribha          #+#    #+#             */
/*   Updated: 2025/12/10 15:42:40 by ljeribha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/SedIsForLosers.hpp"

void writeFile(const std::string& filename, const std::string& text) {
        std::ofstream outfile(filename.c_str());
        
        if (!outfile) {
                throw std::runtime_error("Error: cannot open output file");
        }
        outfile << text;
        outfile.close();
}

std::string readFile(const std::string& filename) {
        std::ifstream infile(filename.c_str());
        
        if (!infile) {
                throw std::runtime_error("Error: cannot open input file");
        }
        std::stringstream buffer;
        buffer << infile.rdbuf();
        infile.close();
        return buffer.str();
}

std::string replaceAll(std::string fullString, std::string &wordFound, std::string &wordReplace) {
        if (wordFound.empty()) {
                return fullString;
        }
        std::string result;
        size_t pos = 0;
        size_t found_pos;

        while ((found_pos = fullString.find(wordFound, pos)) != std::string::npos) {
                result += fullString.substr(pos, found_pos - pos);
                result += wordReplace;
                pos = found_pos + wordFound.length();
        }
        result += fullString.substr(pos);
        return result;
}