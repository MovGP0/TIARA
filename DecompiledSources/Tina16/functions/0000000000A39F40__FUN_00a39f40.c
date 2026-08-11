/* Ghidra address: 00a39f40 */
/* Ghidra symbol: FUN_00a39f40 */


void FUN_00a39f40(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_2[2];
  if (iVar1 < *param_2) {
    param_2[2] = *param_2;
    *param_2 = iVar1;
  }
  iVar1 = param_2[3];
  if (iVar1 < param_2[1]) {
    param_2[3] = param_2[1];
    param_2[1] = iVar1;
  }
  return;
}

