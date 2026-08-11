/* Ghidra address: 01cb1b70 */
/* Ghidra symbol: FUN_01cb1b70 */


int FUN_01cb1b70(longlong param_1)

{
  return *(int *)(param_1 + 0xc) * (*(int *)(param_1 + 0x20) + 8) + 8;
}

