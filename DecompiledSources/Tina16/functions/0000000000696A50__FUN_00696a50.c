/* Ghidra address: 00696a50 */
/* Ghidra symbol: FUN_00696a50 */


void FUN_00696a50(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  iVar1 = (**(code **)(*param_1 + 0x60))(param_1);
  iVar2 = (**(code **)(*param_1 + 0x48))();
  iVar1 = iVar1 * iVar2;
  iVar2 = 0;
  if (-1 < iVar1 + -1) {
    do {
      iVar3 = (**(code **)(*param_1 + 0x48))(param_1);
      lVar4 = FUN_0060a050(param_1,iVar3 + -1);
      *(undefined1 *)(lVar4 + 3 + (longlong)iVar2 * 4) = 0xff;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

