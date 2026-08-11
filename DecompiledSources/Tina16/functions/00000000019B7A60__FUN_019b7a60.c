/* Ghidra address: 019b7a60 */
/* Ghidra symbol: FUN_019b7a60 */


void FUN_019b7a60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 local_20;
  
  local_20 = 0;
  iVar1 = FUN_019b5ce0(param_2,param_3);
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar2 = FUN_019b60b0(param_2,iVar3,param_3);
      FUN_00416780(&local_20,uVar2);
      FUN_00416ad0(param_1,local_20);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(&local_20);
  return;
}

