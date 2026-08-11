/* Ghidra address: 005b9800 */
/* Ghidra symbol: FUN_005b9800 */


undefined2 FUN_005b9800(longlong *param_1)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (*param_1 != 0) {
    iVar3 = *(int *)(*param_1 + -4);
  }
  if ((int)param_1[1] <= iVar3) {
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  }
  iVar3 = (int)param_1[1];
  if (iVar3 < 1) {
    bVar1 = false;
  }
  else {
    iVar4 = 0;
    if (*param_1 != 0) {
      iVar4 = *(int *)(*param_1 + -4);
    }
    bVar1 = iVar3 <= iVar4;
  }
  if (bVar1) {
    uVar2 = *(undefined2 *)(*param_1 + -2 + (longlong)iVar3 * 2);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

