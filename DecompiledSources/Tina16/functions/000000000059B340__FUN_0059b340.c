/* Ghidra address: 0059b340 */
/* Ghidra symbol: FUN_0059b340 */


void FUN_0059b340(longlong *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = (int)param_1[1] + -1;
  if (0 < iVar3) {
    do {
      uVar1 = *(undefined4 *)(*param_1 + (longlong)iVar2 * 4);
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 4) =
           *(undefined4 *)(*param_1 + (longlong)iVar3 * 4);
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 4) = uVar1;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar2 < iVar3);
  }
  return;
}

