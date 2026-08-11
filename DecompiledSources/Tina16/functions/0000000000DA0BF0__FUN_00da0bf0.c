/* Ghidra address: 00da0bf0 */
/* Ghidra symbol: FUN_00da0bf0 */


void FUN_00da0bf0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_00d9ff60(param_1,param_2);
  uVar2 = FUN_00d9feb0(param_1,param_2,uVar1);
  if ((int)uVar2 < 0) {
    if (*(int *)(param_1 + 0x20) <= *(int *)(param_1 + 0x10)) {
      FUN_00d9fe80(param_1);
      uVar2 = FUN_00d9feb0(param_1,param_2,uVar1);
    }
    FUN_00da00e0(param_1,uVar1,~uVar2,param_2,param_3);
  }
  else {
    FUN_00da0150(param_1,uVar2,param_3);
  }
  return;
}

