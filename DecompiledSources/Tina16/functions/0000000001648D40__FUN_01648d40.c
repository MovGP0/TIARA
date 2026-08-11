/* Ghidra address: 01648d40 */
/* Ghidra symbol: FUN_01648d40 */


undefined8 FUN_01648d40(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  FUN_00414480(&local_40);
  FUN_00414b50(local_30,L"$abstime");
  FUN_00416ad0(&local_40,local_30[0]);
  FUN_00416ad0(&local_40,&LAB_01648ee8);
  iVar3 = 0;
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x5f8) + 0x10);
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x5f8),iVar3);
      if (*(char *)(lVar2 + 0x28) == 'f') {
        FUN_01637070(param_1,local_30,iVar3);
        FUN_00416ad0(&local_40,local_30[0]);
        FUN_00416ad0(&local_40,&LAB_01648ee8);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x600) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      FUN_01648bf0(param_1,local_30,iVar3);
      cVar1 = FUN_01648ca0(param_1,iVar3);
      if (cVar1 == '\0') {
        FUN_00416ad0(&local_40,local_30[0]);
        FUN_00416ad0(&local_40,&LAB_01648ee8);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_01b217a0(&local_40);
  FUN_00414ad0(param_2,local_40);
  FUN_00414560(&local_40,3);
  return param_2;
}

