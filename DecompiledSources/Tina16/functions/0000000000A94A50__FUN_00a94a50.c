/* Ghidra address: 00a94a50 */
/* Ghidra symbol: FUN_00a94a50 */


longlong FUN_00a94a50(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  do {
    if (iVar2 < 1) {
      return 0;
    }
    iVar2 = iVar2 + -1;
    lVar1 = FUN_004aeac0(param_1,iVar2);
  } while (param_2 < *(int *)(lVar1 + 0x30));
  return lVar1;
}

