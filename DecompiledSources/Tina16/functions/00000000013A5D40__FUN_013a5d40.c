/* Ghidra address: 013a5d40 */
/* Ghidra symbol: FUN_013a5d40 */


longlong * FUN_013a5d40(ushort *param_1)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong local_38;
  longlong local_30;
  
  local_30 = 0;
  local_38 = 0;
  FUN_00414480(&local_30);
  plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  uVar5 = (uint)*param_1;
  iVar4 = 0;
  if (-1 < (int)(uVar5 - 1)) {
    do {
      FUN_0043f750(&local_38,*(undefined2 *)(*(longlong *)(param_1 + 4) + (longlong)iVar4 * 2));
      if (iVar4 < (int)(*param_1 - 1)) {
        FUN_00416ad0(&local_38,&LAB_013a5e88);
      }
      iVar1 = 0;
      if (local_30 != 0) {
        iVar1 = *(int *)(local_30 + -4);
      }
      iVar3 = 0;
      if (local_38 != 0) {
        iVar3 = *(int *)(local_38 + -4);
      }
      if (iVar1 + iVar3 < 0xff) {
        FUN_00416ad0(&local_30,local_38);
      }
      else {
        (**(code **)(*plVar2 + 0x78))(plVar2,local_30);
        FUN_00414b50(&local_30,local_38);
      }
      iVar4 = iVar4 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (local_30 != 0) {
    (**(code **)(*plVar2 + 0x78))(plVar2,local_30);
  }
  FUN_00414560(&local_38,2);
  return plVar2;
}

