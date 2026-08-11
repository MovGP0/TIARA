/* Ghidra address: 00457c30 */
/* Ghidra symbol: FUN_00457c30 */


undefined8 FUN_00457c30(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
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
  puVar1 = auStack_58;
  if (0 < local_18) {
    cVar2 = FUN_00456030(*(undefined2 *)*param_1,param_3,param_4);
    puVar1 = local_30;
    if (cVar2 == '\0') {
      cVar2 = FUN_00456030(*(undefined2 *)(*param_1 + (longlong)local_18 * 2),param_3,param_4);
      puVar1 = local_30;
      if (cVar2 == '\0') {
        FUN_00414ad0(param_2,*param_1);
        goto LAB_00457d86;
      }
    }
  }
  for (; local_30 = puVar1, local_14 <= local_18; local_14 = local_14 + 1) {
    cVar2 = FUN_00456030(*(undefined2 *)(*param_1 + (longlong)local_14 * 2),param_3,param_4);
    if (cVar2 == '\0') break;
    puVar1 = local_30;
  }
  if (local_18 < local_14) {
    FUN_00414480(param_2);
  }
  else {
    while( true ) {
      cVar2 = FUN_00456030(*(undefined2 *)(*param_1 + (longlong)local_18 * 2),param_3,param_4);
      if (cVar2 == '\0') break;
      local_18 = local_18 + -1;
    }
    FUN_00414480(&local_10);
    FUN_00416dc0(&local_10,*param_1,local_14 + 1,(local_18 - local_14) + 1);
    FUN_00414ad0(param_2,local_10);
    FUN_00414480(&local_10);
  }
LAB_00457d86:
  FUN_00414480(&local_10);
  return param_2;
}

