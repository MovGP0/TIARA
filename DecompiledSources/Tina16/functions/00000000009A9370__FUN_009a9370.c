/* Ghidra address: 009a9370 */
/* Ghidra symbol: FUN_009a9370 */


void FUN_009a9370(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_009a83e0(param_1,param_2);
  uVar2 = FUN_009a8330(param_1,param_2,uVar1);
  if ((int)uVar2 < 0) {
    if (*(int *)(param_1 + 0x20) <= *(int *)(param_1 + 0x10)) {
      FUN_009a8300(param_1);
      uVar2 = FUN_009a8330(param_1,param_2,uVar1);
    }
    FUN_009a8610(param_1,uVar1,~uVar2,param_2,param_3);
  }
  else {
    FUN_009a8690(param_1,uVar2,param_3);
  }
  return;
}

