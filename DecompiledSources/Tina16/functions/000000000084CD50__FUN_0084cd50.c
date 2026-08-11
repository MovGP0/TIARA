/* Ghidra address: 0084cd50 */
/* Ghidra symbol: FUN_0084cd50 */


void FUN_0084cd50(longlong param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 == 0) {
    *param_3 = -1;
    *param_4 = -1;
  }
  else if (iVar1 < 1) {
    *param_3 = -1 - iVar1;
    *param_4 = param_2;
  }
  else {
    *param_3 = param_2;
    *param_4 = iVar1 + -1;
  }
  return;
}

