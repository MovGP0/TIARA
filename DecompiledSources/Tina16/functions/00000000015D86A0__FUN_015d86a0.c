/* Ghidra address: 015d86a0 */
/* Ghidra symbol: FUN_015d86a0 */


int FUN_015d86a0(longlong *param_1,undefined8 param_2,undefined8 param_3,char param_4,
                undefined4 param_5,undefined8 param_6)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 local_1c0;
  undefined2 local_1b4;
  undefined8 local_130;
  undefined2 local_122;
  undefined8 local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_70;
  int local_64;
  int local_60;
  longlong local_58;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40;
  int local_34;
  char local_2d;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  
  puVar4 = &local_1c0;
  for (lVar2 = 0x12; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = &local_130;
  for (lVar2 = 0x12; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_a0 = 0;
  local_40 = 0;
  local_48 = 0;
  local_58 = 0;
  if (param_4 == '\0') {
    FUN_015bf0c0(&local_a0,param_2);
    FUN_015bf370(&local_40,local_a0,&DAT_015d8ff0,&DAT_015d8fe0,1);
  }
  else {
    FUN_015c14a0(&local_40,param_2,param_3,*(undefined1 *)(param_1[0x18] + 8),param_1[0xf]);
    cVar1 = FUN_015bf150(param_2);
    if (cVar1 != '\0') {
      local_60 = 0;
      if (local_40 != 0) {
        local_60 = *(int *)(local_40 + -4);
      }
      if (0 < local_60) {
        local_64 = 0;
        if (local_40 != 0) {
          local_64 = *(int *)(local_40 + -4);
        }
        if (*(short *)(local_40 + -2 + (longlong)local_64 * 2) != 0x2f) {
          FUN_00416ad0(&local_40,&DAT_015d8fe0);
        }
      }
    }
  }
  FUN_00414b50(&local_48,local_40);
  if (param_4 == '\0') {
    local_4c = param_5;
  }
  else {
    cVar1 = FUN_015bf1b0(param_2);
    if ((cVar1 == '\0') && (cVar1 = FUN_015bf150(param_2), cVar1 == '\0')) {
      local_4c = 0x20;
    }
    else {
      local_4c = FUN_015bf640(param_2);
    }
  }
  FUN_004144d0(&local_58);
  uVar5 = param_2;
  (**(code **)(*param_1 + 0x100))(param_1,&local_48,&local_4c,&local_58,param_2);
  uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
  cVar1 = FUN_015c33c0(*(undefined8 *)(param_1[0x47] + 0x28),local_48,&local_28);
  if (cVar1 == '\0') {
    iVar3 = FUN_015c2df0(*(undefined8 *)(param_1[0x47] + 0x28));
    FUN_015c2ad0(*(undefined8 *)(param_1[0x47] + 0x28),iVar3 + 1);
    local_24 = FUN_015c2df0(*(undefined8 *)(param_1[0x47] + 0x28));
    local_24 = local_24 + -1;
    lVar2 = FUN_015c2a60(*(undefined8 *)(param_1[0x47] + 0x28),local_24);
    *(undefined1 *)(lVar2 + 0x8e) = 0;
  }
  else {
    cVar1 = *(char *)(param_1[0x18] + 0xb);
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0xb0))(param_1,param_2,&local_48,&local_2d);
    }
    else if (cVar1 == '\x01') {
      local_2d = '\x01';
    }
    else if (cVar1 == '\x02') {
      local_2d = '\0';
    }
    else if ((byte)(cVar1 - 3U) < 2) {
      FUN_015c29e0(*(undefined8 *)(param_1[0x47] + 0x28),&local_130,local_28);
      local_1c._2_2_ = local_122;
      FUN_015c29e0(*(undefined8 *)(param_1[0x47] + 0x28),&local_1c0,local_28);
      local_1c = CONCAT22(local_1c._2_2_,local_1b4);
      if (param_4 == '\0') {
        local_34 = FUN_00442310(param_6);
      }
      else {
        local_34 = FUN_00440970(param_2);
      }
      if (((local_1c < local_34) || (*(char *)(param_1[0x18] + 0xb) != '\x03')) &&
         ((local_34 < local_1c || (*(char *)(param_1[0x18] + 0xb) != '\x04')))) {
        local_2d = '\x01';
      }
      else {
        local_2d = '\0';
      }
    }
    if (local_2d == '\0') {
      local_24 = -1;
    }
    else {
      local_24 = local_28;
      lVar2 = FUN_015c2a60(*(undefined8 *)(param_1[0x47] + 0x28),local_28);
      *(undefined1 *)(lVar2 + 0x6c) = 1;
      lVar2 = FUN_015c2a60(*(undefined8 *)(param_1[0x47] + 0x28),local_24);
      FUN_00414ad0(lVar2 + 0x83,param_2);
      lVar2 = FUN_015c2a60(*(undefined8 *)(param_1[0x47] + 0x28),local_24);
      *(undefined1 *)(lVar2 + 0x8e) = 3;
    }
  }
  if (local_24 != -1) {
    FUN_015d3190(param_1,local_24,param_2,param_4,CONCAT44(uVar6,param_5),param_6);
    lVar2 = FUN_015c2a60(*(undefined8 *)(param_1[0x47] + 0x28),local_24);
    FUN_00414ad0(lVar2 + 0x2e,local_48);
    FUN_015c3450(*(undefined8 *)(param_1[0x47] + 0x28),local_24,local_48);
    lVar2 = FUN_015c2a60(*(undefined8 *)(param_1[0x47] + 0x28),local_24);
    local_70 = *(longlong *)(lVar2 + 0x2e);
    local_74 = 0;
    if (local_70 != 0) {
      local_74 = *(undefined4 *)(local_70 + -4);
    }
    lVar2 = FUN_015c2a60(*(undefined8 *)(param_1[0x47] + 0x28),local_24);
    *(undefined2 *)(lVar2 + 0x1c) = (undefined2)local_74;
    lVar2 = FUN_015c2a60(*(undefined8 *)(param_1[0x47] + 0x28),local_24);
    *(undefined4 *)(lVar2 + 0x26) = local_4c;
    lVar2 = FUN_015c2a60(*(undefined8 *)(param_1[0x47] + 0x28),local_24);
    FUN_00414bf0(lVar2 + 0x3e,local_58);
    local_78 = 0;
    if (local_58 != 0) {
      local_78 = *(undefined4 *)(local_58 + -4);
    }
    lVar2 = FUN_015c2a60(*(undefined8 *)(param_1[0x47] + 0x28),local_24);
    *(undefined2 *)(lVar2 + 0x20) = (undefined2)local_78;
    lVar2 = FUN_015c2a60(*(undefined8 *)(param_1[0x47] + 0x28),local_24);
    *(undefined1 *)(lVar2 + 0x8f) = 0;
    lVar2 = FUN_015c2a60(*(undefined8 *)(param_1[0x47] + 0x28),local_24);
    local_80 = *(longlong *)(lVar2 + 0x46);
    local_88 = local_80;
    if (local_80 != 0) {
      local_88 = *(longlong *)(local_80 + -8);
    }
    if (local_88 != 0) {
      lVar2 = FUN_015c2a60(*(undefined8 *)(param_1[0x47] + 0x28),local_24);
      local_90 = *(longlong *)(lVar2 + 0x46);
      local_98 = local_90;
      if (local_90 != 0) {
        local_98 = *(longlong *)(local_90 + -8);
      }
      local_2c = 0;
      iVar3 = (int)local_98;
      if (-1 < (int)local_98 + -1) {
        do {
          lVar2 = FUN_015c2a60(*(undefined8 *)(param_1[0x47] + 0x28),local_24);
          if (*(longlong *)(*(longlong *)(lVar2 + 0x46) + 4 + (longlong)local_2c * 0xc) != 0) {
            lVar2 = FUN_015c2a60(*(undefined8 *)(param_1[0x47] + 0x28),local_24);
            FUN_004095f0(*(undefined8 *)(*(longlong *)(lVar2 + 0x46) + 4 + (longlong)local_2c * 0xc)
                        );
          }
          local_2c = local_2c + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      lVar2 = FUN_015c2a60(*(undefined8 *)(param_1[0x47] + 0x28),local_24);
      FUN_00419430(lVar2 + 0x46,&DAT_015b93d0);
      lVar2 = FUN_015c2a60(*(undefined8 *)(param_1[0x47] + 0x28),local_24);
      FUN_00419430(lVar2 + 0x46,&DAT_015b93d0);
    }
  }
  local_20 = local_24;
  FUN_00417840(&local_1c0,&DAT_015b9418,2);
  FUN_00414480(&local_a0);
  FUN_004144d0(&local_58);
  FUN_00414560(&local_48,2);
  return local_20;
}

