/* Ghidra address: 00a66700 */
/* Ghidra symbol: FUN_00a66700 */


undefined8 FUN_00a66700(undefined8 param_1)

{
  int iVar1;
  undefined2 *puVar2;
  longlong lVar3;
  undefined1 auStack_a8 [36];
  int local_84;
  undefined8 local_80;
  longlong local_78;
  undefined1 *local_70;
  int local_64;
  longlong local_60;
  longlong local_58;
  int local_4c;
  int local_48;
  longlong local_40;
  undefined2 local_32;
  longlong *local_30;
  undefined8 local_28;
  short local_1e;
  int local_1c;
  
  local_70 = auStack_a8;
  local_80 = 0;
  local_78 = 0;
  local_40 = 0;
  local_28 = 0;
  FUN_00414480(param_1);
  local_30 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_004b67b0(local_30,1);
  local_1c = 1;
  FUN_00a666a0(auStack_a8);
  while (local_1e != 0) {
    if (local_1e == 0x23) {
      local_32 = 0x33;
    }
    else if (local_1e == 0x2e) {
      local_32 = 0x31;
    }
    else if (local_1e == 0x3a) {
      local_32 = 0x32;
    }
    else {
      local_32 = 0x30;
    }
    FUN_004169f0(&local_40,2);
    puVar2 = (undefined2 *)FUN_00414de0(&local_40);
    *puVar2 = local_32;
    lVar3 = FUN_00414de0(&local_40);
    *(short *)(lVar3 + 2) = local_1e;
    FUN_00a666a0(auStack_a8);
    while ((((local_1e == 0x2d || ((ushort)(local_1e - 0x30U) < 10)) || (local_1e == 0x5f)) ||
           ((ushort)(local_1e - 0x61U) < 0x1a))) {
      local_48 = 0;
      if (local_40 != 0) {
        local_48 = *(int *)(local_40 + -4);
      }
      FUN_004169f0(&local_40,local_48 + 1);
      local_58 = FUN_00414de0(&local_40);
      local_4c = 0;
      if (local_40 != 0) {
        local_4c = *(int *)(local_40 + -4);
      }
      *(short *)(local_58 + -2 + (longlong)local_4c * 2) = local_1e;
      FUN_00a666a0(auStack_a8);
    }
    (**(code **)(*local_30 + 0x78))(local_30,local_40);
  }
  iVar1 = (**(code **)(*local_30 + 0x28))();
  local_84 = iVar1 + -1;
  local_1c = 0;
  if (-1 < local_84) {
    do {
      local_84 = iVar1;
      local_28 = 0;
      (**(code **)(*local_30 + 0x18))(local_30,&local_28,local_1c);
      (**(code **)(*local_30 + 0x18))(local_30,&local_78,local_1c);
      local_60 = local_78;
      local_64 = 0;
      if (local_78 != 0) {
        local_64 = *(int *)(local_78 + -4);
      }
      FUN_00416dc0(&local_80,local_28,2,local_64 + -1);
      FUN_00416ad0(param_1,local_80);
      FUN_00414480(&local_28);
      local_1c = local_1c + 1;
      local_84 = local_84 + -1;
      iVar1 = local_84;
    } while (local_84 != 0);
  }
  FUN_00410f20(local_30);
  FUN_00414560(&local_80,2);
  FUN_00414480(&local_40);
  return param_1;
}

