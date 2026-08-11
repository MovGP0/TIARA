/* Ghidra address: 00c412d0 */
/* Ghidra symbol: FUN_00c412d0 */


undefined8 FUN_00c412d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 *local_b0;
  longlong **local_a0;
  ushort local_98;
  ushort local_96;
  int local_94;
  int local_90;
  longlong local_80 [2];
  ushort *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong **local_28;
  char local_19;
  
  local_b0 = auStack_d8;
  local_b8 = 0;
  local_60 = 0;
  local_68 = (undefined8 *)0x0;
  local_70 = (ushort *)0x0;
  local_80[1] = 0;
  local_80[0] = 0;
  cVar3 = '\x04';
  local_a0 = &local_48;
  do {
    plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    *local_a0 = plVar2;
    local_a0 = local_a0 + 1;
    cVar3 = cVar3 + -1;
  } while (cVar3 != '\0');
  FUN_00414b50(local_80,param_3);
  while (local_80[0] != 0) {
    FUN_00648720(&local_68,local_80[0]);
    iVar1 = FUN_00416db0(local_68,local_80[0]);
    if (iVar1 == 0) {
      FUN_00414480(local_80);
    }
    else {
      FUN_00648780(&local_b8,local_80[0]);
      FUN_00414b50(local_80,local_b8);
    }
    FUN_00c41210(&local_70,&local_68,0x5e);
    local_90 = 0;
    if (local_70 != (ushort *)0x0) {
      local_90 = *(int *)(local_70 + -2);
    }
    if (local_90 == 1) {
      local_94 = 0;
      if (local_68 != (undefined8 *)0x0) {
        local_94 = *(int *)((longlong)local_68 + -4);
      }
      if (1 < local_94) {
        local_96 = *local_70;
        local_98 = local_96;
        if ((ushort)(local_96 - 0x61) < 0x1a) {
          local_98 = local_96 & 0xffdf;
        }
        if (local_98 == 0x42) {
          (**(code **)(*local_30 + 0x78))(local_30,local_68);
        }
        else if (local_98 == 0x4c) {
          (**(code **)(*local_38 + 0x78))(local_38,local_68);
        }
        else if (local_98 == 0x52) {
          (**(code **)(*local_48 + 0x78))(local_48,local_68);
        }
        else if (local_98 == 0x54) {
          (**(code **)(*local_40 + 0x78))(local_40,local_68);
        }
      }
    }
  }
  local_50 = FUN_00c3da20(param_1,1,param_2,&local_48);
  local_19 = '\0';
  local_28 = &local_48;
  do {
    FUN_00410f20(*local_28);
    local_19 = local_19 + '\x01';
    local_28 = local_28 + 1;
  } while (local_19 != '\x04');
  FUN_00414480(&local_b8);
  FUN_00414560(local_80,5);
  return local_50;
}

