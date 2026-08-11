/* Ghidra address: 00eb0130 */
/* Ghidra symbol: FUN_00eb0130 */


void FUN_00eb0130(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_00eaf370(param_1,param_2);
  uVar2 = FUN_00eaf2c0(param_1,param_2,uVar1);
  if ((int)uVar2 < 0) {
    if (*(int *)(param_1 + 0x20) <= *(int *)(param_1 + 0x10)) {
      FUN_00eaf290(param_1);
      uVar2 = FUN_00eaf2c0(param_1,param_2,uVar1);
    }
    FUN_00eaf500(param_1,uVar1,~uVar2,param_2,param_3);
  }
  else {
    FUN_00eaf580(param_1,uVar2,param_3);
  }
  return;
}

