/* Ghidra address: 019ea960 */
/* Ghidra symbol: FUN_019ea960 */


undefined8 FUN_019ea960(undefined8 param_1,longlong param_2,int *param_3)

{
  longlong local_res10;
  int *local_res18;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined1 *local_40;
  int local_2c;
  undefined4 local_28;
  bool local_21;
  int local_20;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  
  local_40 = auStack_68;
  local_48 = 0;
  local_10 = 0;
  local_18 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  do {
    local_1c = FUN_004564b0(&local_res10,&LAB_019eab90,*local_res18);
    if (local_1c < 0) {
      FUN_00414480(&local_18);
      local_28 = 0;
      if (local_res10 != 0) {
        local_28 = *(undefined4 *)(local_res10 + -4);
      }
      FUN_00416dc0(&local_18,local_res10,*local_res18 + 1,local_28);
      FUN_00414ad0(param_1,local_18);
      FUN_00414480(&local_18);
      local_2c = 0;
      if (local_res10 != 0) {
        local_2c = *(int *)(local_res10 + -4);
      }
      *local_res18 = local_2c;
    }
    else {
      FUN_00414480(&local_10);
      FUN_00416dc0(&local_10,local_res10,*local_res18 + 1,(local_1c - *local_res18) + 2);
      FUN_00414ad0(param_1,local_10);
      FUN_00414480(&local_10);
      *local_res18 = local_1c + 2;
    }
    FUN_00457870(param_1,&local_48);
    if (local_48 == 0) {
      local_20 = 0;
      if (local_res10 != 0) {
        local_20 = *(int *)(local_res10 + -4);
      }
      local_21 = local_20 <= *local_res18;
    }
    else {
      local_21 = true;
    }
  } while (local_21 == false);
  FUN_00414480(&local_48);
  FUN_00414560(&local_18,2);
  FUN_00414480(&local_res10);
  return param_1;
}

