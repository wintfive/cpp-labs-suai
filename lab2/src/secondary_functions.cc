#include <iostream>
#include <limits>
/* функция получения целого числа для добавления его значения в очередь
 */
int StoiExceptionsProcessing() {
  std::string str    = "";
  int         number = 0;

  while (std::cin >> str) {
    if (str == "exit") {
      throw std::logic_error(
        "Введена команда 'exit', добавление элементов прекращено.");
    }
    try {
      number = std::stoi(str);
      break;
    }
    catch (const std::invalid_argument& e) {
      std::cerr << "Введено не число, попробуйте еще раз: ";
    }
    catch (const std::out_of_range& e) {
      std::cerr
        << "Введено слишком большое число, попробуйте еще раз: ";
    }
  }

  return number;
}

/* функция получения команд при извлечении элементов из очереди */
void StoiExceptionsProcessing(char) {
  std::string str = "";

  while (std::cin >> str) {
    if (str == "exit") {
      throw std::logic_error(
        "Введена команда 'exit', извлечение элементов прекращено.");
    }
    if (str == "yes") {
      return;
    }
    else {
      std::cerr << "Такой команды не существует, попробуйте еще раз: ";
    }
  }
}

/* функция получения числа, которое отвечает за пункт меню */
int StoiExceptionsProcessing(int) {
  std::string str    = "";
  int         number = 0;

  while (std::cin >> str) {
    try {
      number = std::stoi(str);
      if (number < 1 or number > 4)
        std::cerr << "Введено неподходящее число, попробуйте еще раз: ";
      else
        break;
    }
    catch (const std::invalid_argument& e) {
      std::cerr << "Введено не число, попробуйте еще раз: ";
    }
    catch (const std::out_of_range& e) {
      std::cerr
        << "Введено слишком большое число, попробуйте еще раз: ";
    }
  }

  return number;
}

double ReadDouble() {
  double user_data = 0;
  std::cout << "Введите пользовательское значение (действительное "
               "число через точку): ";
  std::cin >> user_data;
  while (std::cin.fail()) {
    std::cout
      << "Вы ввели что-то не то, попробуйте еще раз (необходимо "
         "действительное число через точку): ";
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin >> user_data;
  }
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  return user_data;
}