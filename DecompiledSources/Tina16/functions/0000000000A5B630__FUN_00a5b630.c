/* Ghidra address: 00a5b630 */
/* Ghidra symbol: FUN_00a5b630 */


longlong * FUN_00a5b630(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 *local_60;
  undefined **local_50;
  undefined **local_48;
  int local_3c;
  int local_38;
  int local_34;
  undefined *local_30;
  int local_24;
  undefined8 local_20 [2];
  
  local_60 = auStack_88;
  local_68 = 0;
  local_20[0] = 0;
  local_24 = FUN_004170c0(&LAB_00a5b8b4,*(undefined8 *)(param_1 + 0x78),1);
  if (local_24 < 1) {
    FUN_0043ea00(param_2,*(undefined8 *)(param_1 + 0x78));
    FUN_00414480(param_1 + 0x78);
  }
  else {
    FUN_00416dc0(&local_68,*(undefined8 *)(param_1 + 0x78),1,local_24 + -1);
    FUN_0043ea00(param_2,local_68);
    FUN_00416e20(param_1 + 0x78,1,local_24);
  }
  iVar2 = 5;
  local_48 = &PTR_u_serif_01e75948;
  local_50 = &PTR_u_Times_New_Roman_01e75970;
  do {
    local_30 = *local_48;
    iVar1 = FUN_0043e420(*param_2,local_30);
    if (iVar1 == 0) {
      FUN_00414ad0(param_2,*local_50);
      break;
    }
    local_50 = local_50 + 1;
    local_48 = local_48 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_00414480(local_20);
  local_38 = 0;
  if (*param_2 != 0) {
    local_38 = *(int *)(*param_2 + -4);
  }
  local_34 = local_38;
  if (((local_38 < 2) || (*(short *)(*param_2 + -2 + (longlong)local_38 * 2) != *(short *)*param_2))
     || ((*(short *)*param_2 != 0x27 && (*(short *)*param_2 != 0x22)))) {
    FUN_00414b50(local_20,*param_2);
  }
  else {
    local_3c = 0;
    if (*param_2 != 0) {
      local_3c = *(int *)(*param_2 + -4);
    }
    FUN_00416dc0(local_20,*param_2,2,local_3c + -2);
  }
  FUN_00414ad0(param_2,local_20[0]);
  FUN_00414480(local_20);
  FUN_00414480(&local_68);
  FUN_00414480(local_20);
  return param_2;
}

