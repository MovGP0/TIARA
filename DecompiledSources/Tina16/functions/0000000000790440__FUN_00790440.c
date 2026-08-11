/* Ghidra address: 00790440 */
/* Ghidra symbol: FUN_00790440 */


void FUN_00790440(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_0078f680(param_1,param_2);
  uVar2 = FUN_0078f5d0(param_1,param_2,uVar1);
  if ((int)uVar2 < 0) {
    if (*(int *)(param_1 + 0x20) <= *(int *)(param_1 + 0x10)) {
      FUN_0078f5a0(param_1);
      uVar2 = FUN_0078f5d0(param_1,param_2,uVar1);
    }
    FUN_0078f810(param_1,uVar1,~uVar2,param_2,param_3);
  }
  else {
    FUN_0078f890(param_1,uVar2,param_3);
  }
  return;
}

