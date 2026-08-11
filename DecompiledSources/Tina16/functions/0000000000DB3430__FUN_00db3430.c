/* Ghidra address: 00db3430 */
/* Ghidra symbol: FUN_00db3430 */


void FUN_00db3430(int *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (0 < iVar1) {
    param_1 = param_1 + 2;
    do {
      FUN_00db23a0(param_1,param_2,param_3,param_4);
      param_1 = param_1 + 0x46;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

