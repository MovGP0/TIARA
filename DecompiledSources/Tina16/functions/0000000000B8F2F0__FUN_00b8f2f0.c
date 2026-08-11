/* Ghidra address: 00b8f2f0 */
/* Ghidra symbol: FUN_00b8f2f0 */


double FUN_00b8f2f0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  char local_31;
  double local_30;
  int local_24;
  double local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_40 = auStack_78;
  local_50 = 0;
  local_48 = 0;
  local_10 = 0;
  local_18 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414610(param_1);
  FUN_00414480(&local_10);
  FUN_004577b0(&local_res8,&local_10,*(undefined4 *)PTR_DAT_02005bd0);
  iVar1 = FUN_004170c0(&DAT_00b8f5f8,local_10,1);
  local_31 = 0 < iVar1;
  FUN_00414480(&local_10);
  if (local_31 == '\0') {
    for (local_24 = -5; local_24 < 5; local_24 = local_24 + 1) {
      FUN_00416780(&local_48,u_pnum_01e94254[(longlong)local_24 + 4]);
      iVar1 = FUN_004170c0(local_48,local_res8,1);
      if (iVar1 != 0) break;
    }
    if (local_24 < 5) {
      FUN_00416780(&local_50,u_pnum_01e94254[(longlong)local_24 + 4]);
      uVar2 = FUN_004170c0(local_50,local_res8,1);
      FUN_00416e20(&local_res8,uVar2,1);
    }
    local_30 = (double)FUN_00448650(local_res8,PTR_DAT_02004830);
    local_20 = local_30;
    if (local_24 < 5) {
      local_20 = (double)FUN_00b8efd0(local_24);
      local_20 = local_30 * local_20;
    }
  }
  else {
    FUN_00414480(&local_18);
    FUN_004577b0(&local_res8,&local_18,*(undefined4 *)PTR_DAT_02005bd0);
    uVar2 = FUN_004170c0(&DAT_00b8f5f8,local_18,1);
    FUN_00416e20(&local_res8,uVar2,3);
    FUN_00414480(&local_18);
    local_30 = (double)FUN_00448650(local_res8,PTR_DAT_02004830);
    local_20 = local_30 * 1000000.0;
  }
  FUN_00414560(&local_50,2);
  FUN_00414560(&local_18,2);
  FUN_00414480(&local_res8);
  return local_20;
}

