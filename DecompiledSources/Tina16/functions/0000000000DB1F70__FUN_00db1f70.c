/* Ghidra address: 00db1f70 */
/* Ghidra symbol: FUN_00db1f70 */


void FUN_00db1f70(undefined8 param_1,undefined4 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = *param_4;
  if (0 < iVar1) {
    param_4 = param_4 + 2;
    do {
      FUN_00db1e00(param_1,param_2,param_3,param_4);
      param_4 = param_4 + 0x46;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

