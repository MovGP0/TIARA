/* Ghidra address: 01b23780 */
/* Ghidra symbol: FUN_01b23780 */


undefined8 * FUN_01b23780(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  longlong local_res10;
  undefined8 local_res18;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_40 = auStack_68;
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414480(param_1);
  local_24 = FUN_004170c0(L"@ Configuration begin",local_res10,1);
  local_24 = local_24 + -1;
  if (-1 < local_24) {
    FUN_00414480(&local_10);
    local_28 = 0;
    if (local_res10 != 0) {
      local_28 = *(undefined4 *)(local_res10 + -4);
    }
    FUN_00416dc0(&local_10,local_res10,local_24 + 1,local_28);
    FUN_00414ad0(param_1,local_10);
    FUN_00414480(&local_10);
    local_24 = FUN_004170c0(L".@ Configuration end",*param_1,1);
    local_24 = local_24 + -1;
    if (0 < local_24) {
      FUN_00414480(&local_18);
      FUN_00414b50(&local_18,*param_1);
      local_2c = 0;
      if (local_18 != 0) {
        local_2c = *(undefined4 *)(local_18 + -4);
      }
      FUN_00416e20(&local_18,local_24 + 1,local_2c);
      FUN_00414ad0(param_1,local_18);
      FUN_00414480(&local_18);
      FUN_00414480(&local_20);
      FUN_00414b50(&local_20,*param_1);
      FUN_00416e20(&local_20,1,0x15);
      FUN_00414ad0(param_1,local_20);
      FUN_00414480(&local_20);
      FUN_004b4b10(local_res18,*param_1);
    }
  }
  FUN_00414560(&local_20,3);
  FUN_00414480(&local_res10);
  return param_1;
}

