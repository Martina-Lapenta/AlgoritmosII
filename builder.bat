@echo off
REM Compilar el programa
g++ -I include -o MiPrograma main.cpp src/*.cpp

REM Verifica si la compilación fue exitosa
if %errorlevel% neq 0 (
    echo Error durante la compilación.
    pause
    exit /b %errorlevel%
)

REM Ejecutar el programa
echo Compilación exitosa. Ejecutando el programa...
MiPrograma.exe

pause
