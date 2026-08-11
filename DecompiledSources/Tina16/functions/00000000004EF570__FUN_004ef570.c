/* Ghidra address: 004ef570 */
/* Ghidra symbol: FUN_004ef570 */


void FUN_004ef570(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_004ee8e0(param_1,param_2);
  uVar2 = FUN_004ee830(param_1,param_2,uVar1);
  if ((int)uVar2 < 0) {
    if (*(int *)(param_1 + 0x20) <= *(int *)(param_1 + 0x10)) {
      FUN_004ee800(param_1);
      uVar2 = FUN_004ee830(param_1,param_2,uVar1);
    }
    FUN_004eea60(param_1,uVar1,~uVar2,param_2,param_3);
  }
  else {
    FUN_004eead0(param_1,uVar2,param_3);
  }
  return;
}

