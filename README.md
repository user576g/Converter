# Converter
Converts DOS-paths to Linux paths in bash for windows.



Для того, чтобы установить надо выполнить команды:

git clone https://github.com/user576g/Converter.git

sudo gcc ./Converter/convert.c -o /bin/convert


После установки можно удалить исходные файлы:

rm -r Converter


Как перейти в bash по пути DOS пример:

Из проводника файловой системы Windows копируем путь: 

D:\PROJECTS\WIN_API\Dll

Набираем в коммандной строке bash:

convert "   "

(Для удобства можно сделать пробелы между кавычками)

Кликаем правой кнопкой мыши между кавычками и получаем:

convert "   D:\PROJECTS\WIN_API\Dll   "

Нажимаем Enter, получаем:

Your input is: D:\PROJECTS\WIN_API\Dll

Converted path is:

/mnt/d/PROJECTS/WIN_API/Dll

The command to switch to this directory:

cd /mnt/d/PROJECTS/WIN_API/Dll

Выделяем последнюю строку, кликаем правой клавиши, кликаем правой клавишой куда надо втставить команду  (так выполняется копирование в bash для Windows) и нажимаем Enter.

Должно будет переключено на указанную директорию.


Если вам программа не понравилась вы можете её удалить:

sudo rm /bin/convert
