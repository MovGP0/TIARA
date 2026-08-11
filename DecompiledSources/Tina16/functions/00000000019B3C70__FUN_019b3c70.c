/* Ghidra address: 019b3c70 */
/* Ghidra symbol: FUN_019b3c70 */


void FUN_019b3c70(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_019b3030(param_1,param_2);
  uVar2 = FUN_019b2f80(param_1,param_2,uVar1);
  if ((int)uVar2 < 0) {
    if (*(int *)(param_1 + 0x20) <= *(int *)(param_1 + 0x10)) {
      FUN_019b2f50(param_1);
      uVar2 = FUN_019b2f80(param_1,param_2,uVar1);
    }
    FUN_019b31b0(param_1,uVar1,~uVar2,param_2,param_3);
  }
  else {
    FUN_019b3220(param_1,uVar2,param_3);
  }
  return;
}

