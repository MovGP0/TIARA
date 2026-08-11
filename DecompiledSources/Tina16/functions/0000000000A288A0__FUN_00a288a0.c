/* Ghidra address: 00a288a0 */
/* Ghidra symbol: FUN_00a288a0 */


void FUN_00a288a0(longlong param_1,int *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *param_2;
  iVar4 = 0;
  if (param_1 != 0) {
    iVar4 = *(int *)(param_1 + -4);
  }
  for (; iVar3 <= iVar4; iVar3 = iVar3 + 1) {
    cVar2 = FUN_00a28850(*(undefined2 *)(param_1 + -2 + (longlong)iVar3 * 2));
    if (cVar2 == '\0') break;
  }
  if (((iVar3 < 3) || (iVar4 < iVar3)) || (*(short *)(param_1 + -2 + (longlong)iVar3 * 2) != 0x3a))
  {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    *param_2 = iVar3;
  }
  return;
}

