/* Ghidra address: 019b6f10 */
/* Ghidra symbol: FUN_019b6f10 */


void FUN_019b6f10(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = FUN_019b5ce0(param_2,param_3);
  iVar2 = FUN_019b5ce0(*param_1,param_3);
  iVar4 = 1;
  if (0 < iVar1) {
    do {
      uVar3 = FUN_019b60b0(param_2,iVar4 + -1,param_3);
      FUN_019b5bb0(param_1,iVar2 + iVar4 + -1,uVar3,param_3);
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

