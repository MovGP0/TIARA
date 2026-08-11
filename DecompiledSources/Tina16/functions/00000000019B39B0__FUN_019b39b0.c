/* Ghidra address: 019b39b0 */
/* Ghidra symbol: FUN_019b39b0 */


void FUN_019b39b0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0x20) <= *(int *)(param_1 + 0x10)) {
    FUN_019b2f50(param_1);
  }
  uVar1 = FUN_019b3030(param_1,param_2);
  uVar2 = FUN_019b2f80(param_1,param_2,uVar1);
  if (-1 < (int)uVar2) {
    uVar3 = FUN_0044d710(&PTR_FUN_004347c0,1,PTR_PTR_020015f8);
    uVar2 = FUN_004134c0(uVar3);
  }
  FUN_019b31b0(param_1,uVar1,~uVar2,param_2,param_3);
  return;
}

