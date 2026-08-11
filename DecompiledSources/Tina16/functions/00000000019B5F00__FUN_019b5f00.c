/* Ghidra address: 019b5f00 */
/* Ghidra symbol: FUN_019b5f00 */


void FUN_019b5f00(undefined8 *param_1,int param_2,int param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  iVar3 = 0;
  iVar4 = param_2;
  if (-1 < param_2 + -1) {
    do {
      uVar1 = FUN_019b5ce0(local_40[0],param_4);
      uVar2 = FUN_019b60b0(*param_1,iVar3,param_4);
      FUN_019b5bb0(local_40,uVar1,uVar2,param_4);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = FUN_019b5ce0(*param_1,param_4);
  iVar4 = iVar4 - (param_2 + param_3);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar1 = FUN_019b5ce0(local_40[0],param_4);
      uVar2 = FUN_019b60b0(*param_1,param_2 + param_3 + iVar3,param_4);
      FUN_019b5bb0(local_40,uVar1,uVar2,param_4);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_019b6320(param_1);
  *param_1 = local_40[0];
  return;
}

