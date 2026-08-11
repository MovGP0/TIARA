/* Ghidra address: 004579e0 */
/* Ghidra symbol: FUN_004579e0 */


undefined8 FUN_004579e0(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined8 local_10;
  
  local_30 = auStack_58;
  local_10 = 0;
  local_1c = 0;
  if (*param_1 != 0) {
    local_1c = *(int *)(*param_1 + -4);
  }
  local_18 = local_1c + -1;
  local_14 = 0;
  while ((local_14 <= local_18 && (*(ushort *)(*param_1 + (longlong)local_14 * 2) < 0x21))) {
    local_14 = local_14 + 1;
  }
  if (local_14 < 1) {
    FUN_00414ad0(param_2,*param_1);
  }
  else {
    local_30 = auStack_58;
    FUN_00414480(&local_10);
    local_20 = 0;
    if (*param_1 != 0) {
      local_20 = *(undefined4 *)(*param_1 + -4);
    }
    FUN_00416dc0(&local_10,*param_1,local_14 + 1,local_20);
    FUN_00414ad0(param_2,local_10);
    FUN_00414480(&local_10);
  }
  FUN_00414480(&local_10);
  return param_2;
}

