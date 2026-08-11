/* Ghidra address: 00563e60 */
/* Ghidra symbol: FUN_00563e60 */


void FUN_00563e60(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_005630a0(param_1,param_2);
  uVar2 = FUN_00562ff0(param_1,param_2,uVar1);
  if ((int)uVar2 < 0) {
    if (*(int *)(param_1 + 0x20) <= *(int *)(param_1 + 0x10)) {
      FUN_00562fc0(param_1);
      uVar2 = FUN_00562ff0(param_1,param_2,uVar1);
    }
    FUN_00563230(param_1,uVar1,~uVar2,param_2,param_3);
  }
  else {
    FUN_005632b0(param_1,uVar2,param_3);
  }
  return;
}

