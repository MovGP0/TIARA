/* Ghidra address: 00457de0 */
/* Ghidra symbol: FUN_00457de0 */


undefined8 FUN_00457de0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
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
  local_18 = local_1c;
  for (local_14 = 0; local_14 < local_18; local_14 = local_14 + 1) {
    cVar1 = FUN_00456030(*(undefined2 *)(*param_1 + (longlong)local_14 * 2),param_3,param_4);
    if (cVar1 == '\0') break;
  }
  if (local_14 < 1) {
    FUN_00414ad0(param_2,*param_1);
  }
  else {
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

