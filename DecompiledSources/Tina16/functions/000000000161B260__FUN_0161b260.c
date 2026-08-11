/* Ghidra address: 0161b260 */
/* Ghidra symbol: FUN_0161b260 */


longlong * FUN_0161b260(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  plVar1 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar4 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 8),iVar3);
      if (*(int *)(lVar2 + 8) == 5) {
        (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(lVar2 + 0x10));
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return plVar1;
}

