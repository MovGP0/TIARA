/* Ghidra address: 010c8870 */
/* Ghidra symbol: FUN_010c8870 */


void FUN_010c8870(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_010c7d20(param_1);
  if (cVar1 == '\0') {
    *(double *)(param_1 + 0x20) = *(double *)(param_1 + 0x20) * *(double *)(param_1 + 0x20);
    *(double *)(param_1 + 0x28) = *(double *)(param_1 + 0x28) + *(double *)(param_1 + 0x28);
    FUN_010c7c90(param_1);
  }
  else {
    *(double *)(param_1 + 8) = *(double *)(param_1 + 8) * *(double *)(param_1 + 8);
  }
  return;
}

