/* Ghidra address: 00a72740 */
/* Ghidra symbol: FUN_00a72740 */


longlong * FUN_00a72740(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 local_20;
  
  local_20 = 0;
  plVar1 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar4 = *(int *)(param_1 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_00a72910(param_1,iVar3);
      FUN_00416cd0(&local_20,3,*(undefined8 *)(lVar2 + 0x10),&LAB_00a72804,
                   *(undefined8 *)(lVar2 + 0x28));
      (**(code **)(*plVar1 + 0x78))(plVar1,local_20);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414480(&local_20);
  return plVar1;
}

