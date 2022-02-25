# Turing Machine

Turing Machine was designed by Alan Turing in 1936 and it is utilized to accept Recursive Enumerable Languages (created by Type-0 Grammar). 
 
 A turing machine consists of a tape of infinite length on which examined and composes operation can be performed. The tape comprises of boundless cells on which each cell either contains input symbol or a special symbol called blank. It moreover comprises of a head pointer which focuses to cell as of now being read and it can move in both directions.


Deve-se implementar um simulador de máquinas de Turing padrão determinísticas,
que receba a especificação de uma MT e a seguir uma sequência de cadeias. O
simulador deve simular a execução do autômato para cada cadeia e responder com “S”
se a cadeia for aceita, ou com “N” se a cadeia não for aceita.
Entrada:
A primeira linha da entrada conterá o alfabeto �, o qual deverá ser constituído apenas de
dígitos (0 a 9), letras minúsculas (a até z) e sublinhado ( _ ).
A segunda linha conterá o alfabeto � de símbolos da fita, o qual será constituído apenas
por letras maiúsculas (A até Z). Nesta linha os símbolos pertencentes a � não devem estar
incluídos. O símbolo ‘$’ será usado para representar o símbolo "espaço em branco”, e
deverá estar incluído obrigatoriamente no início desta linha.
A terceira linha conterá um inteiro Q (1 ≤ Q ≤ 10) indicando o número de estados da
máquina. Os estados deverão ser numerados sequencialmente de 1 até Q.
A quarta linha conterá um único inteiro S, indicando o estado inicial.
A quinta linha conterá de 1 até no máximo Q inteiros, separados por espaço, indicando
os estados finais da MT.
A sexta linha conterá um inteiro D (1 ≤ D ≤ Q x |�| x |�| ) que indica o número de 1 2
transições da MT.
As D linhas seguintes conterão as transições da MT, uma por linha, na forma 

“Qi si sj Dir Qj” que indicam o estado corrente, o símbolo lido e o símbolo escrito, a
direção do movimento (D = direita, E = esquerda) e o próximo estado, respectivamente.
Após as transições haverá uma linha com um inteiro N (1 ≤ N ≤ 100) que indicará o
número de cadeias de teste. O comprimento de cada cadeia não excederá 200
caracteres.
As N linhas seguintes conterão as cadeias a serem analisadas. As cadeias estarão contidas
entre dois símbolos ‘@‘. Dois símbolos ‘@‘ seguidos indicarão uma cadeia vazia.
Saída:
Para cada cadeia a ser analisada, o simulador deve imprimir três linhas de dados: a cadeia
original na primeira linha, a cadeia final na segunda linha e a resposta da MT na terceira
linha. 

Exemplo:
Entrada 
01
$
3
1
3
4
1 $ $ R 2
2 0 1 R 2
2 1 0 R 2
2 $ $ R 3
10
@@
@0@
@1@
@00@
@01@
@10@
@11@
@000@
@001@
@010@

Saída
@@
@@
S
@0@
@1@
S
@1@
@0@
S
@00@
@11@
S
@01@
@10@
S
@10@
@01@
S
@11@
@00@
S
@000@
@111@
S
@001@
@110@
S
@010@
@101@
S
