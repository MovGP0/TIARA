/* Ghidra address: 0043ea00 */
/* Ghidra symbol: FUN_0043ea00 */


undefined8 FUN_0043ea00(undefined8 param_1,ushort *param_2)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_1c;
  int local_18;
  int local_14;
  undefined8 local_10;
  
  local_30 = auStack_58;
  local_10 = 0;
  local_1c = 0;
  if (param_2 != (ushort *)0x0) {
    local_1c = *(int *)(param_2 + -2);
  }
  local_18 = local_1c + -1;
  local_14 = 0;
  if (((local_18 < 0) || (*param_2 < 0x21)) || (param_2[local_18] < 0x21)) {
    for (; (local_14 <= local_18 && (param_2[local_14] < 0x21)); local_14 = local_14 + 1) {
    }
    if (local_18 < local_14) {
      local_30 = auStack_58;
      FUN_00414480(param_1);
    }
    else {
      for (; param_2[local_18] < 0x21; local_18 = local_18 + -1) {
      }
      FUN_00414480(&local_10);
      FUN_00416dc0(&local_10,param_2,local_14 + 1,(local_18 - local_14) + 1);
      FUN_00414ad0(param_1,local_10);
      FUN_00414480(&local_10);
    }
  }
  else {
    local_30 = auStack_58;
    FUN_00414ad0(param_1,param_2);
  }
  FUN_00414480(&local_10);
  return param_1;
}

