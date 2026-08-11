/* Ghidra address: 008541a0 */
/* Ghidra symbol: FUN_008541a0 */


void FUN_008541a0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_00853250(param_1,param_2);
  uVar2 = FUN_008531a0(param_1,param_2,uVar1);
  if ((int)uVar2 < 0) {
    if (*(int *)(param_1 + 0x20) <= *(int *)(param_1 + 0x10)) {
      FUN_00853170(param_1);
      uVar2 = FUN_008531a0(param_1,param_2,uVar1);
    }
    FUN_00853460(param_1,uVar1,~uVar2,param_2,param_3);
  }
  else {
    FUN_008534e0(param_1,uVar2,param_3);
  }
  return;
}

