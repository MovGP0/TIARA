/* Ghidra address: 004c0960 */
/* Ghidra symbol: FUN_004c0960 */


void FUN_004c0960(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined1 auStack_a8 [40];
  undefined1 *local_80;
  longlong local_78;
  longlong local_70;
  int local_64;
  longlong *local_60;
  undefined8 *local_58;
  longlong *local_50;
  int local_44;
  int local_40;
  int local_3c;
  undefined8 local_28;
  longlong local_20 [2];
  
  local_80 = auStack_a8;
  local_20[0] = 0;
  local_28 = 0;
  FUN_004c1d80(param_1,local_20);
  local_3c = 1;
  local_64 = 0;
  if (local_20[0] != 0) {
    local_64 = *(int *)(local_20[0] + -4);
  }
  local_44 = local_64;
  *(undefined1 *)(param_1 + 0x110) = 1;
  local_50 = param_2;
  while( true ) {
    local_40 = local_3c;
    while ((local_3c <= local_44 && (*(short *)(local_20[0] + -2 + (longlong)local_3c * 2) != 0x2e))
          ) {
      local_3c = local_3c + 1;
    }
    FUN_00414480(&local_28);
    FUN_00416dc0(&local_28,local_20[0],local_40,local_3c - local_40);
    FUN_00414ad0(param_1 + 0x100,local_28);
    FUN_00414480(&local_28);
    if (local_44 < local_3c) break;
    local_70 = *local_50;
    local_58 = (undefined8 *)
               FUN_00589ef0(*(undefined8 *)(local_70 + -0xa8),*(undefined8 *)(param_1 + 0x100));
    if (local_58 == (undefined8 *)0x0) {
      FUN_00414ad0(param_1 + 0x100,local_20[0]);
      *(undefined1 *)(param_1 + 0x110) = 0;
      (**(code **)(*local_50 + 8))(local_50,param_1);
      *(undefined1 *)(param_1 + 0x110) = 1;
      if (*(longlong *)(param_1 + 0x100) != 0) {
        FUN_004bea70(param_1,*(undefined8 *)(param_1 + 0x100));
      }
LAB_004c0c83:
      FUN_00414560(&local_28,2);
      return;
    }
    local_60 = (longlong *)0x0;
    if (**(char **)*local_58 == '\a') {
      local_60 = (longlong *)FUN_0058ada0(local_50,local_58);
    }
    cVar1 = FUN_004113d0(local_60,&LAB_00474bd8);
    if (cVar1 == '\0') {
      FUN_004c0930(auStack_a8);
    }
    local_50 = local_60;
    local_3c = local_3c + 1;
  }
  local_78 = *local_50;
  local_58 = (undefined8 *)
             FUN_00589ef0(*(undefined8 *)(local_78 + -0xa8),*(undefined8 *)(param_1 + 0x100));
  if (local_58 == (undefined8 *)0x0) {
    *(undefined1 *)(param_1 + 0x110) = 0;
    (**(code **)(*local_50 + 8))(local_50,param_1);
    *(undefined1 *)(param_1 + 0x110) = 1;
    if (*(longlong *)(param_1 + 0x100) != 0) {
      FUN_004bea70(param_1,*(undefined8 *)(param_1 + 0x100));
    }
  }
  else {
    FUN_004c0fa0(param_1,local_50,local_58);
  }
  goto LAB_004c0c83;
}

