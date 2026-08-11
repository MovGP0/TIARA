/* Ghidra address: 005b97c0 */
/* Ghidra symbol: FUN_005b97c0 */


undefined2 FUN_005b97c0(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  undefined2 uVar3;
  int iVar4;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < 1) {
    bVar2 = false;
  }
  else {
    iVar4 = 0;
    if (*param_1 != 0) {
      iVar4 = *(int *)(*param_1 + -4);
    }
    bVar2 = iVar1 <= iVar4;
  }
  if (bVar2) {
    uVar3 = *(undefined2 *)(*param_1 + -2 + (longlong)iVar1 * 2);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

