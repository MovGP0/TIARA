/* Ghidra address: 00b956f0 */
/* Ghidra symbol: FUN_00b956f0 */


void FUN_00b956f0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (param_1[2] < iVar1) {
    *param_1 = param_1[2];
    param_1[2] = iVar1;
  }
  iVar1 = param_1[1];
  if (param_1[3] < iVar1) {
    param_1[1] = param_1[3];
    param_1[3] = iVar1;
  }
  return;
}

