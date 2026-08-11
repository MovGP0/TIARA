/* Ghidra address: 014c07f0 */
/* Ghidra symbol: FUN_014c07f0 */


longlong * FUN_014c07f0(undefined8 param_1,longlong param_2)

{
  undefined8 local_res8;
  longlong local_res10;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  int local_4c;
  int local_48;
  int local_44;
  longlong local_40;
  undefined8 local_38;
  int local_2c;
  longlong *local_28;
  longlong *local_20;
  
  local_60 = auStack_88;
  local_38 = 0;
  local_40 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414610(param_1);
  FUN_00414610(local_res10);
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_48 = 0;
  if (local_res10 != 0) {
    local_48 = *(int *)(local_res10 + -4);
  }
  local_44 = local_48;
  FUN_00416ba0(&local_40,local_res8,local_res10);
  FUN_004b3260(local_20);
  (**(code **)(*local_20 + 0x90))(local_20);
  while( true ) {
    local_4c = 0;
    if (local_40 != 0) {
      local_4c = *(int *)(local_40 + -4);
    }
    if (local_4c < 1) break;
    local_2c = FUN_004170c0(local_res10,local_40,1);
    FUN_00416dc0(&local_38,local_40,0,local_2c + -1);
    (**(code **)(*local_20 + 0x78))(local_20,local_38);
    FUN_00416dc0(&local_40,local_40,local_2c + local_44,0x7fffffff);
  }
  FUN_004b3390(local_20);
  local_28 = local_20;
  FUN_00414560(&local_40,2);
  FUN_00414560(&local_res8,2);
  return local_28;
}

