/* Ghidra address: 00a29560 */
/* Ghidra symbol: FUN_00a29560 */


longlong * FUN_00a29560(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_40;
  int local_2c;
  int local_28;
  char local_21;
  undefined8 local_20;
  int local_14;
  undefined8 local_10;
  
  local_40 = auStack_68;
  local_48 = 0;
  local_10 = 0;
  *param_3 = 0;
  FUN_00a290e0(param_1,param_2);
  local_14 = 1;
  FUN_00414480(&local_10);
  FUN_00416dc0(&local_48,*param_1,1,4);
  local_20 = local_48;
  FUN_0043e600(&local_10,local_48);
  iVar1 = FUN_00416db0(local_10,L"res:");
  local_21 = iVar1 == 0;
  FUN_00414480(&local_10);
  if (local_21 != '\0') {
    local_14 = 5;
  }
  while( true ) {
    local_28 = 0;
    if (*param_1 != 0) {
      local_28 = *(int *)(*param_1 + -4);
    }
    if ((local_28 < local_14) || (*(short *)(*param_1 + -2 + (longlong)local_14 * 2) != 0x2f))
    break;
    local_14 = local_14 + 1;
  }
  if (1 < local_14) {
    FUN_00416e20(param_1,1,local_14 + -1);
  }
  FUN_00414480(param_3);
  local_2c = 0;
  if (*param_1 != 0) {
    local_2c = *(int *)(*param_1 + -4);
  }
  local_14 = local_2c;
  if (0 < local_2c) {
    do {
      if (*(short *)(*param_1 + -2 + (longlong)local_14 * 2) == 0x2e) {
        FUN_00416dc0(param_3,*param_1,local_14 + 1,0x7fffffff);
        FUN_004169f0(param_1,local_14 + -1);
        break;
      }
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  FUN_00414480(&local_48);
  FUN_00414480(&local_10);
  return param_1;
}

