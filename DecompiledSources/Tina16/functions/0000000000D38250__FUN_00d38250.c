/* Ghidra address: 00d38250 */
/* Ghidra symbol: FUN_00d38250 */


void FUN_00d38250(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  iVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  iVar2 = (**(code **)(*param_2 + 0x48))();
  iVar1 = iVar1 * iVar2;
  iVar2 = 0;
  if (-1 < iVar1 + -1) {
    do {
      iVar3 = (**(code **)(*param_2 + 0x48))(param_2);
      lVar4 = FUN_0060a050(param_2,iVar3 + -1);
      *(undefined1 *)(lVar4 + 3 + (longlong)iVar2 * 4) = 0;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

