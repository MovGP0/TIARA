/* Ghidra address: 01242770 */
/* Ghidra symbol: FUN_01242770 */


undefined8 * FUN_01242770(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined4 local_18;
  int local_14;
  longlong local_10;
  
  local_20 = auStack_48;
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414ad0(param_1,local_res10[0]);
  local_14 = FUN_00456820(param_1,0x7c);
  if (0 < local_14) {
    FUN_00414480(&local_10);
    FUN_00414b50(&local_10,*param_1);
    local_18 = 0;
    if (local_10 != 0) {
      local_18 = *(undefined4 *)(local_10 + -4);
    }
    FUN_00416e20(&local_10,local_14 + 1,local_18);
    FUN_00414ad0(param_1,local_10);
    FUN_00414480(&local_10);
  }
  FUN_00414480(&local_10);
  FUN_00414480(local_res10);
  return param_1;
}

