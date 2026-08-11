/* Ghidra address: 00f35ff0 */
/* Ghidra symbol: FUN_00f35ff0 */


void FUN_00f35ff0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_00f35190(param_1,param_2);
  uVar2 = FUN_00f350e0(param_1,param_2,uVar1);
  if ((int)uVar2 < 0) {
    if (*(int *)(param_1 + 0x20) <= *(int *)(param_1 + 0x10)) {
      FUN_00f350b0(param_1);
      uVar2 = FUN_00f350e0(param_1,param_2,uVar1);
    }
    FUN_00f35380(param_1,uVar1,~uVar2,param_2,param_3);
  }
  else {
    FUN_00f353f0(param_1,uVar2,param_3);
  }
  return;
}

