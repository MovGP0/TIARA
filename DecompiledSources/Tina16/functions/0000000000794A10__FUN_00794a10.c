/* Ghidra address: 00794a10 */
/* Ghidra symbol: FUN_00794a10 */


void FUN_00794a10(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_00793c60(param_1,param_2);
  uVar2 = FUN_00793bb0(param_1,param_2,uVar1);
  if ((int)uVar2 < 0) {
    if (*(int *)(param_1 + 0x20) <= *(int *)(param_1 + 0x10)) {
      FUN_00793b80(param_1);
      uVar2 = FUN_00793bb0(param_1,param_2,uVar1);
    }
    FUN_00793e30(param_1,uVar1,~uVar2,param_2,param_3);
  }
  else {
    FUN_00793eb0(param_1,uVar2,param_3);
  }
  return;
}

