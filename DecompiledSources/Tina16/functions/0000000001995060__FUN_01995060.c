/* Ghidra address: 01995060 */
/* Ghidra symbol: FUN_01995060 */


int FUN_01995060(longlong param_1,int param_2)

{
  return ((param_2 + *(int *)(param_1 + 0x7c) / 2) / *(int *)(param_1 + 0x7c)) *
         *(int *)(param_1 + 0x7c);
}

