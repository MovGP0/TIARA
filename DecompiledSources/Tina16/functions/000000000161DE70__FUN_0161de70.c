/* Ghidra address: 0161de70 */
/* Ghidra symbol: FUN_0161de70 */


undefined1 FUN_0161de70(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  local_39 = 0;
  iVar4 = *(int *)(param_1 + 0x10) + -1;
  if (-1 < iVar4) {
    do {
      lVar3 = FUN_004aeac0(param_1,iVar4);
      lVar1 = *(longlong *)(lVar3 + 8);
      cVar2 = FUN_0161ddc0(lVar1);
      if (cVar2 != '\0') {
        local_39 = 1;
        FUN_004167a0(local_30,*(undefined8 *)(lVar1 + 0x40));
        (**(code **)(*param_2 + 0x78))(param_2,local_30[0]);
      }
      lVar1 = *(longlong *)(lVar3 + 0x10);
      cVar2 = FUN_0161ddc0(lVar1);
      if (cVar2 != '\0') {
        local_39 = 1;
        FUN_004167a0(&local_38,*(undefined8 *)(lVar1 + 0x40));
        (**(code **)(*param_2 + 0x78))(param_2,local_38);
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != -1);
  }
  FUN_00414560(&local_38,2);
  return local_39;
}

