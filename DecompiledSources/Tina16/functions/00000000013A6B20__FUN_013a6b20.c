/* Ghidra address: 013a6b20 */
/* Ghidra symbol: FUN_013a6b20 */


void FUN_013a6b20(undefined8 param_1,ushort *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 local_res8 [4];
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0;
  local_38 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  plVar1 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_00414480(&local_38);
  iVar2 = *param_2 - 1;
  iVar3 = local_3c;
  if (-1 < iVar2) {
    do {
      iVar3 = iVar2;
      if (*(short *)(*(longlong *)(param_2 + 4) + (longlong)iVar2 * 2) != 0) break;
      iVar2 = iVar2 + -1;
      iVar3 = local_3c;
    } while (iVar2 != -1);
  }
  local_3c = iVar3;
  iVar3 = 0;
  if (-1 < local_3c) {
    iVar2 = local_3c + 1;
    do {
      FUN_0043fba0(&local_30,*(undefined2 *)(*(longlong *)(param_2 + 4) + (longlong)iVar3 * 2),2);
      FUN_00416cd0(&local_38,3,local_38,local_30,&DAT_013a6cac);
      if ((iVar3 % 8 == 7) && (0 < iVar3)) {
        (**(code **)(*plVar1 + 0x78))(plVar1,local_38);
        FUN_00414480(&local_38);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  (**(code **)(*plVar1 + 0x78))(plVar1,local_38);
  (**(code **)(*plVar1 + 0x100))(plVar1,local_res8[0]);
  FUN_00410f20(plVar1);
  FUN_00414560(&local_38,2);
  FUN_00414480(local_res8);
  return;
}

