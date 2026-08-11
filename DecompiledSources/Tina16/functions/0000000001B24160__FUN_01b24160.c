/* Ghidra address: 01b24160 */
/* Ghidra symbol: FUN_01b24160 */


undefined8 FUN_01b24160(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong local_res10;
  undefined8 *local_res18;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined4 local_20;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = auStack_58;
  local_10 = 0;
  local_18 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  *local_res18 = 0;
  local_1c = FUN_004170c0(&LAB_01b24308,local_res10,1);
  local_1c = local_1c + -1;
  if (local_1c < 1) {
    FUN_00414ad0(param_1,local_res10);
    FUN_00414480(local_res18);
  }
  else {
    FUN_00414480(&local_10);
    FUN_00416dc0(&local_10,local_res10,1,local_1c);
    FUN_00414ad0(param_1,local_10);
    FUN_00414480(&local_10);
    FUN_00414480(&local_18);
    local_20 = 0;
    if (local_res10 != 0) {
      local_20 = *(undefined4 *)(local_res10 + -4);
    }
    FUN_00416dc0(&local_18,local_res10,local_1c + 2,local_20);
    FUN_00414ad0(local_res18,local_18);
    FUN_00414480(&local_18);
  }
  FUN_00414560(&local_18,2);
  FUN_00414480(&local_res10);
  return param_1;
}

