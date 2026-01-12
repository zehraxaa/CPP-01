/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaydogdu <aaydogdu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 16:46:00 by aaydogdu          #+#    #+#             */
/*   Updated: 2026/01/12 16:47:13 by aaydogdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int convert(char *argv) {
  std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
  for (int i = 0; i < 4; i++) {
    if (levels[i] == argv)
      return i;
  }
  return -1;
}

void harlSwitch(char *argv, Harl &obj) {
  switch (convert(argv)) {
  case 0:
    obj.complain("DEBUG");
    /* fallthrough */
  case 1:
    obj.complain("INFO");
    /* fallthrough */
  case 2:
    obj.complain("WARNING");
    /* fallthrough */
  case 3:
    obj.complain("ERROR");
    break;
  default:
    std::cout << "[ " << argv << " ]" << std::endl;
    std::cout << "!!! Invalid value !!!" << std::endl;
  }
}

int main(int argc, char **argv) {
  Harl obj;

  if (argc != 2) {
    std::cout << "There must be 2 arguments." << std::endl;
    return (1);
  }
  harlSwitch(argv[1], obj);
}
