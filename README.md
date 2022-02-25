# Turing Machine

> Status: Developed ✔️

### A program that simulates a Turing Machine

Turing Machine was designed by Alan Turing in 1936 and it is utilized to accept Recursive Enumerable Languages (created by Type-0 Grammar). 
 
A turing machine consists of a tape of infinite length on which examined and composes operation can be performed. The tape comprises of boundless cells on which each cell either contains input symbol or a special symbol called blank. It moreover comprises of a head pointer which focuses to cell as of now being read and it can move in both directions.

## Simulation of Turing Machine

A Deterministic Standard Turing Machine simulator was implemented, which receives the specification of an Turing Machine and then a sequence of strings. The simulator must simulate the execution of the automaton for each chain and respond with “S” if the chain is accepted, or with “N” if the chain is not accepted.


## Input
- The first input line will contain the alphabet (represented by $\sum$), which must consist only of digits (0 to 9), lowercase letters (a to z), and underscore ( _ ).
- The second line will contain the alphabet $\Gamma$ of tape symbols, which will consist of capital letters only (A through Z). In this line the symbols belonging to $\sum$ must not be included. The symbol '$' will be used to represent the symbol "blank space", and must be included at the beginning of this line.
- The third line will contain an integer Q (1 ≤ Q ≤ 10) indicating the number of machine states. The states must be numbered sequentially from 1 to Q.
- The fourth line will contain a single integer S, indicating the initial state.
- The fifth line will contain from 1 to at most Q integers, separated by spaces, indicating the final states of the Turing Machine.
- The sixth line will contain an integer D (1 ≤ D ≤ Q x | | x | | ) that indicates the number of TM transitions.
- The following D lines will contain the TM transitions, one per line, in the form “Qi si sj Dir Qj” that indicate the current state, the read symbol and the written symbol, the direction of movement (D = right, E = left) and the next state, respectively. After the transitions there will be a line with an integer N (1 ≤ N ≤ 100) that will indicate the number of test strings. The length of each string will not exceed 200 characters.
- The following N lines will contain the strings to be analyzed. The strings will be enclosed between two '@' symbols. Two '@' symbols in a row will indicate an empty string.

## Output

For each string to be analyzed, the simulator must print three lines of data: the original string on the first line, the final string on the second line, and the MT response on the third line.

## Example

Input 
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

Output
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

## Technologies Used:
[C++](https://www.cplusplus.com)
