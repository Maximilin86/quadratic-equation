[![CI/CD GitHub Actions](https://github.com/Maximilin86/quadratic-equation/actions/workflows/test-action.yml/badge.svg)](https://github.com/Maximilin86/quadratic-equation/actions/workflows/test-action.yml)
[![Coverage Status](https://coveralls.io/repos/github/Maximilin86/quadratic-equation/badge.svg?branch=master)](https://coveralls.io/github/Maximilin86/quadratic-equation?branch=master)

[![Quality Gate](https://sonarcloud.io/api/project_badges/measure?project=Maximilin86_quadratic-equation&metric=alert_status)](https://sonarcloud.io/project/overview?id=Maximilin86_quadratic-equation)
[![Bugs](https://sonarcloud.io/api/project_badges/measure?project=Maximilin86_quadratic-equation&metric=bugs)](https://sonarcloud.io/summary/new_code?id=Maximilin86_quadratic-equation)
[![Code smells](https://sonarcloud.io/api/project_badges/measure?project=Maximilin86_quadratic-equation&metric=code_smells)](https://sonarcloud.io/dashboard?id=Maximilin86_quadratic-equation)


### Соединение с sonarcloud
1. Необходимо зайти на сайт https://sonarcloud.io и авторизоваться через github
2. Создать новый проект, выбрать github actions, указать свой репозиторий
3. Скопировать токен проекта, в настройках github в разделе `secrets - actions` создать ключ `sonar_token` со значением токена
4. продолжить настройку проекта на sonarcloud до раздела с конфигурационным файлом
5. Изменить значения названия проекта и организации в файле sonar-project.properties в соответствии с предложенными
6. Запустить github actions, проверить успешное выполнение задания gtest-tests
7. проверить появление результатов на sonarcloud
8. Обновить бейджи статистик в соответствии с названием профиля и репозитория
