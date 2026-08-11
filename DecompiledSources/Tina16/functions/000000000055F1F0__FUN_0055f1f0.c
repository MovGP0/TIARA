/* Ghidra address: 0055f1f0 */
/* Ghidra symbol: FUN_0055f1f0 */


void FUN_0055f1f0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_0055e560(param_1,param_2);
  uVar2 = FUN_0055e4b0(param_1,param_2,uVar1);
  if ((int)uVar2 < 0) {
    if (*(int *)(param_1 + 0x20) <= *(int *)(param_1 + 0x10)) {
      FUN_0055e480(param_1);
      uVar2 = FUN_0055e4b0(param_1,param_2,uVar1);
    }
    FUN_0055e6e0(param_1,uVar1,~uVar2,param_2,param_3);
  }
  else {
    FUN_0055e750(param_1,uVar2,param_3);
  }
  return;
}

