# mbed01

1. Goto mbed01

`cd ~/ee2405/mbed01`

2. create new project

`mbed new project_name --scm none`

3. add c file in project_name/

`cd project_name`
`code main.c`

4. Compile and burn into board 

`sudo mbed compile --source . --source ~/ee2405/mbed-os-build/ -m B_L4S5I_IOT01A -t GCC_ARM -f`


- mbed-os-test-program
    - loop LED2 amd LED1
- mbed-os-test-program2
    - loop
        - LED1 flicker 5 times
        - LED3 flicker 5 times
- mbed-os-test-program3
    - loop 
        - LED3 flicker 3 times
        - LED1 flicker 2 times
