/* Ghidra address: 0059b2b0 */
/* Ghidra symbol: FUN_0059b2b0 */


void FUN_0059b2b0(longlong *param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = (int)param_1[1] + -1;
  if (0 < iVar3) {
    do {
      uVar1 = *(undefined1 *)(*param_1 + (longlong)iVar2);
      *(undefined1 *)(*param_1 + (longlong)iVar2) = *(undefined1 *)(*param_1 + (longlong)iVar3);
      *(undefined1 *)(*param_1 + (longlong)iVar3) = uVar1;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar2 < iVar3);
  }
  return;
}

