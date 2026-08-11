/* Ghidra address: 0065bcb0 */
/* Ghidra symbol: FUN_0065bcb0 */


void FUN_0065bcb0(longlong param_1,short param_2)

{
  if ((*(uint *)(param_1 + 0xa4) & 8) == 0) {
    FUN_0065bc40();
  }
  else {
    *(int *)(param_1 + 0x380) = (int)param_2;
  }
  return;
}

