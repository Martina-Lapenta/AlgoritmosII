@echo off
REM Cambiar al directorio donde está el archivo test.cpp
cd /d "%~dp0"

REM Compilar el archivo test.cpp y Proveedor.cpp con el compilador de C++
g++ test.cpp ../src/Proveedor.cpp -o test_executable -I ../include

REM Verificar si la compilación fue exitosa
if %errorlevel% neq 0 (
    echo Hubo un error en la compilacion.
    pause
    exit /b %errorlevel%
)

REM Ejecutar el ejecutable resultante
test_executable

REM Pausar para ver la salida
pause
