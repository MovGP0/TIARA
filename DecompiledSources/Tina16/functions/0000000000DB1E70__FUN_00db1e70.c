/* Ghidra address: 00db1e70 */
/* Ghidra symbol: FUN_00db1e70 */


void FUN_00db1e70(int *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (0 < iVar1) {
    param_1 = param_1 + 2;
    do {
      FUN_00db19a0(param_1,param_2,param_3);
      param_1 = param_1 + 0x46;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

