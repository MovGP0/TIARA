/* Ghidra address: 00f56740 */
/* Ghidra symbol: FUN_00f56740 */


void FUN_00f56740(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = 2;
  do {
    FUN_00f56430(param_1,param_2,param_3,param_4);
    param_1 = param_1 + 0x88;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

