/* Ghidra address: 004e67d0 */
/* Ghidra symbol: FUN_004e67d0 */


void FUN_004e67d0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_004e5a10(param_1,param_2);
  uVar2 = FUN_004e5960(param_1,param_2,uVar1);
  if ((int)uVar2 < 0) {
    if (*(int *)(param_1 + 0x20) <= *(int *)(param_1 + 0x10)) {
      FUN_004e5930(param_1);
      uVar2 = FUN_004e5960(param_1,param_2,uVar1);
    }
    FUN_004e5ba0(param_1,uVar1,~uVar2,param_2,param_3);
  }
  else {
    FUN_004e5c20(param_1,uVar2,param_3);
  }
  return;
}

