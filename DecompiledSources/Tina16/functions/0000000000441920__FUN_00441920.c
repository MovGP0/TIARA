/* Ghidra address: 00441920 */
/* Ghidra symbol: FUN_00441920 */


undefined8 FUN_00441920(undefined8 param_1,longlong param_2)

{
  longlong local_res10 [3];
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined4 local_18;
  int local_14;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_10 = 0;
  local_res10[0] = param_2;
  local_14 = FUN_00456870(local_res10,&LAB_00441a04);
  FUN_00414480(&local_10);
  local_18 = 0;
  if (local_res10[0] != 0) {
    local_18 = *(undefined4 *)(local_res10[0] + -4);
  }
  FUN_00416dc0(&local_10,local_res10[0],local_14 + 2,local_18);
  FUN_00414ad0(param_1,local_10);
  FUN_00414480(&local_10);
  FUN_00414480(&local_10);
  return param_1;
}

