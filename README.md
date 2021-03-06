Задание 3. Симуляция работы компании


Что нужно сделать

Реализуйте симуляцию работы компании. В компании осуществляется вертикальное управление с иерархией. Есть основные рабочие подчинённые, разбитые на команды. У каждой команды есть свой менеджер среднего звена. Во главе всей компании стоит её руководитель — глава компании.

Глава компании осуществляет стратегическое управление. Он определяет основной вектор движения — задачи верхнего уровня. Менеджеры среднего звена разбивают эти задачи на подзадачи и раздают их своим подчинённым. Подчинённые осуществляют выполнение работ.

Реализация данной логики должна проходить упрощённым образом. Указания главы компании поступают из стандартного ввода и являются не более чем целочисленными идентификаторами.

Данные идентификаторы служат зерном для генератора случайных чисел. Каждый из менеджеров, принимая себе эту целочисленную команду, добавляет к ней свой порядковый номер и вызывает с результирующей суммой функцию std::srand().

На основе этой суммы вычисляется общее количество задач, которое требуется выполнить данной командой, — от 1 до количества работников в группе. Всего существует три типа задач для работников: A, B и C. Они тоже выбираются случайно и распределяются между незанятыми рабочими.

При старте программы пользователь указывает в стандартном вводе количество команд и количество работников в каждой из команд.

Далее пользователь вводит целые числа, которые соответствуют указаниям руководителя компании. Программа завершается, когда все работники заняты какими-то задачами.


Советы и рекомендации

Пользуйтесь всем изученным в модуле, включая иерархии классов для представления сотрудников и указатель this, если потребуется.


Что оценивается

Корректность работы программы и элегантность архитектурных решений.