/* Ghidra address: 00e7ff20 */
/* Ghidra symbol: FUN_00e7ff20 */


void FUN_00e7ff20(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = 5;
  lVar1 = param_1 + 0x10;
  do {
    FUN_00db21b0(lVar1,param_2,param_3,param_4);
    lVar1 = lVar1 + 0x50;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (*(char *)(param_1 + 0x1e9) == '\x03') {
    FUN_00e753c0(param_1 + 0x1f0,param_2,param_3,param_4);
    FUN_00e753c0(param_1 + 0x308,param_2,param_3,param_4);
  }
  else {
    FUN_016873b0(param_1 + 0x1f0,param_2,param_3,param_4);
    FUN_016873b0(param_1 + 0x498,param_2,param_3,param_4);
  }
  return;
}

