/* Ghidra address: 00597b20 */
/* Ghidra symbol: FUN_00597b20 */


void FUN_00597b20(longlong *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_a8 [40];
  undefined1 *local_80;
  int local_70;
  int local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_80 = auStack_a8;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_6c = 0;
  local_70 = (int)param_1[1] + -1;
  puVar1 = auStack_a8;
  if (0 < local_70) {
    do {
      local_30[0] = 0;
      lVar2 = (longlong)local_6c;
      FUN_00414c70(local_30,*(undefined8 *)(*param_1 + lVar2 * 8));
      lVar3 = (longlong)local_70;
      FUN_00414bf0(*param_1 + lVar2 * 8,*(undefined8 *)(*param_1 + lVar3 * 8));
      FUN_00414bf0(*param_1 + lVar3 * 8,local_30[0]);
      FUN_004144d0(local_30);
      local_6c = local_6c + 1;
      local_70 = local_70 + -1;
      puVar1 = local_80;
    } while (local_6c < local_70);
  }
  local_80 = puVar1;
  FUN_00414520(&local_38);
  FUN_004144d0(local_30);
  FUN_00460ba0(&local_50);
  FUN_00419430(&local_58,&DAT_00406578);
  FUN_0041b800(&local_60);
  FUN_00414480(&local_68);
  return;
}

