/* Ghidra address: 019b6e50 */
/* Ghidra symbol: FUN_019b6e50 */


void FUN_019b6e50(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar3 = 0;
  if (local_res10[0] != 0) {
    iVar3 = *(int *)(local_res10[0] + -4);
  }
  iVar1 = FUN_019b5ce0(*param_1,param_3);
  iVar2 = 1;
  if (0 < iVar3) {
    do {
      FUN_019b5bb0(param_1,iVar1 + iVar2 + -1,
                   *(undefined2 *)(local_res10[0] + -2 + (longlong)iVar2 * 2),param_3);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414480(local_res10);
  return;
}

