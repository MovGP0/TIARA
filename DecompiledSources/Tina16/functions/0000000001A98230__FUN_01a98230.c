/* Ghidra address: 01a98230 */
/* Ghidra symbol: FUN_01a98230 */


void FUN_01a98230(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_00b958f0(param_1 + 0x3c);
  if (cVar1 == '\0') {
    cVar1 = FUN_00b958f0(param_1 + 0x2c);
    if (cVar1 == '\0') {
      *(double *)(param_1 + 0x50) =
           (double)(*(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x2c)) /
           (double)(*(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x3c));
      *(double *)(param_1 + 0x58) =
           (double)*(int *)(param_1 + 0x2c) -
           *(double *)(param_1 + 0x50) * (double)*(int *)(param_1 + 0x3c);
      *(double *)(param_1 + 0x60) =
           (double)(*(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x30)) /
           (double)(*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x40));
      *(double *)(param_1 + 0x68) =
           (double)*(int *)(param_1 + 0x30) -
           *(double *)(param_1 + 0x60) * (double)*(int *)(param_1 + 0x40);
    }
  }
  return;
}

