/* Ghidra address: 00457f20 */
/* Ghidra symbol: FUN_00457f20 */


undefined8 FUN_00457f20(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  char cVar2;
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
  puVar1 = auStack_48;
  if ((local_14 < 0) ||
     (cVar2 = FUN_00456030(*(undefined2 *)(*param_1 + (longlong)local_14 * 2),param_3,param_4),
     puVar1 = local_20, cVar2 != '\0')) {
    do {
      local_20 = puVar1;
      local_14 = local_14 + -1;
      if (local_14 < 0) break;
      cVar2 = FUN_00456030(*(undefined2 *)(*param_1 + (longlong)local_14 * 2),param_3,param_4);
      puVar1 = local_20;
    } while (cVar2 != '\0');
    FUN_00414480(&local_10);
    FUN_00416dc0(&local_10,*param_1,1,local_14 + 1);
    FUN_00414ad0(param_2,local_10);
    FUN_00414480(&local_10);
  }
  else {
    FUN_00414ad0(param_2,*param_1);
  }
  FUN_00414480(&local_10);
  return param_2;
}

