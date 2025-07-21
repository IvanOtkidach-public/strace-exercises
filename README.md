### How to solve these problems yourself:


1. It is not recommended to run these programs as root, since some issues only occur when run as a regular user.

2. A bug is considered successfully resolved if the word "success" is printed to the terminal and the exit code `echo $?` is 0.

3. It is not recommended to look at the source code before attempting a solution, as it would significantly simplify your troubleshooting process.

4. Compile all files
`for i in {1..7}; do gcc -o "bug$i" "bug$i.c" && chmod +x "bug$i"; done`

5. Run and debug
`./bug1`
