## Условие лабораторной работы №3:
### Важно учитывать при реализации:
  - Необходимо выполнить разделение на h и cpp файлы для каждого класса. h файлы содержат определение, cpp файлы содержат реализацию. функция main обязана располагаться в отдельном cpp файле.
  - Необходимо написать для каждого класса все конструкторы: с параметром, без, конструктор копирования, виртуальный деструктор.
  - Результат работы программы должен сохраняться в выходной файл. Также должна быть возможность загрузки из файла данных.
  - Реализовать пользовательское меню согласно заданию. Все параметры вводятся пользователем или из файла, не должно существовать в программе параметров, заданных по умолчанию. Должно быть представлено максимально возможное меню пользователя, со всеми действиями, которые может выполнить пользователь при работе с программой.
  - Обратите внимание на формулировку задания, если не указано создание абстрактного класса, то НЕ нужно создавать абстрактный класс.
### Задание:
Создать базовый абстрактный класс «Рубль», наследниками являются «Евро», «Доллар», «Фунт стерлингов» и «Японская иена». С клавиатуры вводятся соотношения валют друг относительно друга. Определить функции преобразования рублей в соответствующую валюту и наоборот, и вывод на экран.