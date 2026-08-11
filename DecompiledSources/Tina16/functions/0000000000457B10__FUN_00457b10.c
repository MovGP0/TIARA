/* Ghidra address: 00457b10 */
/* Ghidra symbol: FUN_00457b10 */


undefined8 FUN_00457b10(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  int local_18;
  int local_14;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_10 = 0;
  local_18 = 0;
  if (*param_1 != 0) {
    local_18 = *(int *)(*param_1 + -4);
  }
  local_14 = local_18 + -1;
  if ((local_14 < 0) || (*(ushort *)(*param_1 + (longlong)local_14 * 2) < 0x21)) {
    while ((-1 < local_14 && (*(ushort *)(*param_1 + (longlong)local_14 * 2) < 0x21))) {
      local_14 = local_14 + -1;
    }
    FUN_00414480(&local_10);
    FUN_00416dc0(&local_10,*param_1,1,local_14 + 1);
    FUN_00414ad0(param_2,local_10);
    FUN_00414480(&local_10);
  }
  else {
    local_20 = auStack_48;
    FUN_00414ad0(param_2,*param_1);
  }
  FUN_00414480(&local_10);
  return param_2;
}

