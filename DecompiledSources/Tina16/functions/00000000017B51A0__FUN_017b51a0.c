/* Ghidra address: 017b51a0 */
/* Ghidra symbol: FUN_017b51a0 */


void FUN_017b51a0(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (iVar1 < *param_1) {
    *param_1 = iVar1;
  }
  if (param_1[2] < iVar1) {
    param_1[2] = iVar1;
  }
  iVar1 = param_2[1];
  if (iVar1 < param_1[1]) {
    param_1[1] = iVar1;
  }
  if (param_1[3] < iVar1) {
    param_1[3] = iVar1;
  }
  return;
}

