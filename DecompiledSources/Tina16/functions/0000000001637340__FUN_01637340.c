/* Ghidra address: 01637340 */
/* Ghidra symbol: FUN_01637340 */


longlong FUN_01637340(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x30))
                        (*(longlong **)(param_1 + 0x68),iVar3);
      if (*(char *)(*(longlong *)(lVar2 + 0x20) + 0x49) != '\0') {
        return lVar2;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

