/* Ghidra address: 016acdc0 */
/* Ghidra symbol: FUN_016acdc0 */


void FUN_016acdc0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*param_2 != 0) {
    iVar3 = *(int *)(*param_2 + -4);
  }
  iVar2 = 1;
  if (0 < iVar3) {
    do {
      if (*(char *)(*param_2 + -1 + (longlong)iVar2) == '\t') {
        lVar1 = FUN_00414df0(param_2);
        *(undefined1 *)(lVar1 + -1 + (longlong)iVar2) = 0x20;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

