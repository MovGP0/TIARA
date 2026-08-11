/* Ghidra address: 00c703b0 */
/* Ghidra symbol: FUN_00c703b0 */


void FUN_00c703b0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong local_res8;
  longlong *local_res10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 *local_60;
  int local_54;
  longlong local_50;
  undefined8 local_40;
  undefined2 *local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  
  local_60 = auStack_88;
  local_68 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414610(param_1);
  local_54 = 0;
  if (local_res8 != 0) {
    local_54 = *(int *)(local_res8 + -4);
  }
  local_28 = FUN_00442b60(local_54 + 1);
  local_20 = local_28;
  FUN_00442620(local_28,local_res8);
  (**(code **)(*local_res10 + 0x90))(local_res10);
  local_30 = FUN_00442980(local_28,0x22);
  if (local_30 == local_28) {
    while (iVar1 = FUN_00414d00(local_28), 0 < iVar1) {
      local_30 = FUN_00442980(local_28,0x22);
      if (local_30 == 0) break;
      local_50 = thunk_FUN_041d655c(local_30);
      if (local_50 == 0) {
        local_38 = (undefined2 *)0x0;
      }
      else {
        local_38 = (undefined2 *)FUN_00442980(local_50,0x22);
      }
      if ((local_30 == 0) || (local_38 == (undefined2 *)0x0)) break;
      local_40 = thunk_FUN_041d655c(local_30);
      thunk_FUN_040f0ee7(local_40,local_38);
      local_28 = thunk_FUN_041d655c(local_38);
      *local_38 = 0;
      FUN_004167d0(&local_68,local_40);
      (**(code **)(*local_res10 + 0x78))(local_res10,local_68);
      *local_38 = 0x4f;
    }
  }
  iVar1 = (**(code **)(*local_res10 + 0x28))(local_res10);
  if ((iVar1 == 0) && (local_res8 != 0)) {
    (**(code **)(*local_res10 + 0x78))(local_res10,local_res8);
  }
  FUN_00442c30(local_20);
  FUN_00414480(&local_68);
  FUN_00414480(&local_res8);
  return;
}

