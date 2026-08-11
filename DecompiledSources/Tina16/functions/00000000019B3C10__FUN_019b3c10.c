/* Ghidra address: 019b3c10 */
/* Ghidra symbol: FUN_019b3c10 */


void FUN_019b3c10(longlong param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_019b3030(param_1,param_2);
  iVar2 = FUN_019b2f80(param_1,param_2,uVar1);
  if (iVar2 < 0) {
    *param_3 = 0;
  }
  else {
    *param_3 = *(undefined4 *)(*(longlong *)(param_1 + 8) + 8 + (longlong)iVar2 * 0xc);
  }
  return;
}

