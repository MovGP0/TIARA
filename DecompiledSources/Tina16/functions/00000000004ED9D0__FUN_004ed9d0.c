/* Ghidra address: 004ed9d0 */
/* Ghidra symbol: FUN_004ed9d0 */


void FUN_004ed9d0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_004ecc20(param_1,param_2);
  uVar2 = FUN_004ecb70(param_1,param_2,uVar1);
  if ((int)uVar2 < 0) {
    if (*(int *)(param_1 + 0x20) <= *(int *)(param_1 + 0x10)) {
      FUN_004ecb40(param_1);
      uVar2 = FUN_004ecb70(param_1,param_2,uVar1);
    }
    FUN_004ecdb0(param_1,uVar1,~uVar2,param_2,param_3);
  }
  else {
    FUN_004ece30(param_1,uVar2,param_3);
  }
  return;
}

