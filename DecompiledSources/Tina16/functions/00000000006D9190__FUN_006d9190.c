/* Ghidra address: 006d9190 */
/* Ghidra symbol: FUN_006d9190 */


void FUN_006d9190(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x4a9) != param_2) {
    *(char *)(param_1 + 0x4a9) = param_2;
    FUN_006d9b20(param_1,1);
  }
  return;
}

