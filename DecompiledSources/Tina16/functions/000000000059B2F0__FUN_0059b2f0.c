/* Ghidra address: 0059b2f0 */
/* Ghidra symbol: FUN_0059b2f0 */


void FUN_0059b2f0(longlong *param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = (int)param_1[1] + -1;
  if (0 < iVar3) {
    do {
      uVar1 = *(undefined2 *)(*param_1 + (longlong)iVar2 * 2);
      *(undefined2 *)(*param_1 + (longlong)iVar2 * 2) =
           *(undefined2 *)(*param_1 + (longlong)iVar3 * 2);
      *(undefined2 *)(*param_1 + (longlong)iVar3 * 2) = uVar1;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar2 < iVar3);
  }
  return;
}

