```bash
# Compile all files
for i in {1..7}; do gcc -o "bug$i" "bug$i.c" && chmod +x "bug$i"; done
```
```bash
# Trace specific PID
PID=$(pidof bug3); strace -p $PID
```