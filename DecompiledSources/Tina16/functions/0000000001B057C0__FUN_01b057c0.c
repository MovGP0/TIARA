/* Ghidra address: 01b057c0 */
/* Ghidra symbol: FUN_01b057c0 */


int FUN_01b057c0(longlong param_1,uint param_2)

{
  return *(int *)(param_1 + 0x7c) + (param_2 & 0xff) + -1;
}

