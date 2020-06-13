set MATLAB=D:\MATLAB\R2018a

cd .

if "%1"=="" ("D:\MATLAB\R2018a\bin\win64\gmake"  -f System_20200611_0233_18.mk all) else ("D:\MATLAB\R2018a\bin\win64\gmake"  -f System_20200611_0233_18.mk %1)
@if errorlevel 1 goto error_exit

exit /B 0

:error_exit
echo The make command returned an error of %errorlevel%
An_error_occurred_during_the_call_to_make
