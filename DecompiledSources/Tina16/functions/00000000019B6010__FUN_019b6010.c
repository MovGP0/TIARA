/* Ghidra address: 019b6010 */
/* Ghidra symbol: FUN_019b6010 */


void FUN_019b6010(undefined8 *param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_019b6320(param_1);
  iVar3 = 0;
  if (-1 < param_4 + -1) {
    do {
      uVar1 = FUN_019b5ce0(*param_1,param_5);
      uVar2 = FUN_019b60b0(param_2,param_3 + iVar3,param_5);
      FUN_019b5bb0(param_1,uVar1,uVar2,param_5);
      iVar3 = iVar3 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}

