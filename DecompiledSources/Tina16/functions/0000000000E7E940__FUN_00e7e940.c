/* Ghidra address: 00e7e940 */
/* Ghidra symbol: FUN_00e7e940 */


void FUN_00e7e940(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = 5;
  lVar1 = param_1 + 0x10;
  do {
    FUN_00db18c0(lVar1,param_2,param_3);
    lVar1 = lVar1 + 0x50;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (*(char *)(param_1 + 0x1e9) == '\x03') {
    FUN_00e74c90(param_1 + 0x1f0,param_2,param_3);
    FUN_00e74c90(param_1 + 0x308,param_2,param_3);
  }
  else {
    FUN_01684670(param_1 + 0x1f0,param_2,param_3);
    FUN_01684670(param_1 + 0x498,param_2,param_3);
  }
  return;
}

