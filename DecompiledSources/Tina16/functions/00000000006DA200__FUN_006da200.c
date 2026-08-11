/* Ghidra address: 006da200 */
/* Ghidra symbol: FUN_006da200 */


void FUN_006da200(longlong param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x30)) {
    *(int *)(param_1 + 0x30) = param_2;
    FUN_004b1830(param_1,0);
  }
  return;
}

