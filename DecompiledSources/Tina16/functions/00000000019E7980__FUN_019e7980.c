/* Ghidra address: 019e7980 */
/* Ghidra symbol: FUN_019e7980 */


void FUN_019e7980(undefined8 param_1,undefined4 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  
  iVar1 = 8;
  param_4 = param_4 + 0x40;
  do {
    FUN_00db1e00(param_1,param_2,param_3,param_4);
    param_4 = param_4 + 0x118;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

