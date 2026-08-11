/* Ghidra address: 005b88b0 */
/* Ghidra symbol: FUN_005b88b0 */


longlong FUN_005b88b0(longlong param_1,int param_2,int param_3)

{
  ushort *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  ushort *puVar5;
  
  lVar3 = 0;
  if (param_2 < 1) {
    param_2 = 1;
  }
  iVar4 = 0;
  if (param_1 != 0) {
    iVar4 = *(int *)(param_1 + -4);
  }
  iVar4 = (iVar4 - param_2) + 1;
  if (0 < iVar4) {
    lVar3 = FUN_00416740();
    puVar1 = (ushort *)(lVar3 + -2 + (longlong)param_2 * 2);
    puVar5 = puVar1;
    for (; (0 < iVar4 && (0 < param_3)); param_3 = param_3 + -1) {
      iVar2 = 1;
      if ((0xd7ff < *puVar5) && (*puVar5 < 0xe000)) {
        lVar3 = FUN_0044f6b0(puVar5);
        iVar2 = (int)((lVar3 - (longlong)puVar5) / 2);
      }
      if (iVar4 < iVar2) {
        iVar2 = iVar4;
      }
      puVar5 = puVar5 + iVar2;
      iVar4 = iVar4 - iVar2;
    }
    lVar3 = ((longlong)puVar5 - (longlong)puVar1) / 2;
  }
  return lVar3;
}

