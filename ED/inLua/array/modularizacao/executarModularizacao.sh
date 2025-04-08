 #!/bin/bash
set -e
echo "rodar e executar programam de modualrizacao"

gcc -c modularizacao.c -o module1.o
echo "arquivo um em codigo objeto"
gcc -c source/bs.c -o module2.o
echo "arquivo dois em codigo objeto"
gcc module1.o module2.o -o exec.out
echo "executavel criado"

varUm="g"
#necessario cuidado com os epsacamentos

if  [ -n "$1" ]; then

varUm=$1

fi

./exec.out "$varUm"
