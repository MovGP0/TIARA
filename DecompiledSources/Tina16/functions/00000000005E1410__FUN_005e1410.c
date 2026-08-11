/* Ghidra address: 005e1410 */
/* Ghidra symbol: FUN_005e1410 */


void FUN_005e1410(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_005e0660(param_1,param_2);
  uVar2 = FUN_005e05b0(param_1,param_2,uVar1);
  if ((int)uVar2 < 0) {
    if (*(int *)(param_1 + 0x20) <= *(int *)(param_1 + 0x10)) {
      FUN_005e0580(param_1);
      uVar2 = FUN_005e05b0(param_1,param_2,uVar1);
    }
    FUN_005e07f0(param_1,uVar1,~uVar2,param_2,param_3);
  }
  else {
    FUN_005e0870(param_1,uVar2,param_3);
  }
  return;
}

