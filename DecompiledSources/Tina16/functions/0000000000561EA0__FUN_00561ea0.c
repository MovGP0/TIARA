/* Ghidra address: 00561ea0 */
/* Ghidra symbol: FUN_00561ea0 */


void FUN_00561ea0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_00560fe0(param_1,param_2);
  uVar2 = FUN_00560f30(param_1,param_2,uVar1);
  if ((int)uVar2 < 0) {
    if (*(int *)(param_1 + 0x20) <= *(int *)(param_1 + 0x10)) {
      FUN_00560f00(param_1);
      uVar2 = FUN_00560f30(param_1,param_2,uVar1);
    }
    FUN_005611f0(param_1,uVar1,~uVar2,param_2,param_3);
  }
  else {
    FUN_00561270(param_1,uVar2,param_3);
  }
  return;
}

