/* Ghidra address: 00be7500 */
/* Ghidra symbol: FUN_00be7500 */


int FUN_00be7500(longlong param_1,uint param_2)

{
  int *piVar1;
  ushort *puVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 *local_a0;
  bool local_89;
  int local_88;
  ushort local_82;
  bool local_7f;
  ushort local_7e;
  int local_7c;
  int local_78;
  longlong local_70;
  uint local_64;
  int local_60;
  int local_5c;
  ushort *local_58;
  ushort *local_50;
  ushort *local_48;
  ushort *local_40;
  ushort *local_38;
  ushort *local_30;
  int local_24;
  longlong local_20;
  int local_18;
  int local_14;
  longlong local_10;
  
  local_a0 = auStack_c8;
  local_a8 = 0;
  local_20 = 0;
  FUN_00bcf900(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x4e8),&local_20,param_2);
  FUN_00bf6d50(*(undefined8 *)(param_1 + 0x38),&local_a8,local_20);
  FUN_00414b50(&local_20,local_a8);
  local_78 = 0;
  if (local_20 != 0) {
    local_78 = *(int *)(local_20 + -4);
  }
  local_18 = (local_78 + -1) / (int)(uint)*(ushort *)(param_1 + 0x40) + 1;
  local_10 = FUN_00409570(local_18 * 2,
                          (longlong)(local_78 + -1) %
                          (longlong)(int)(uint)*(ushort *)(param_1 + 0x40) & 0xffffffff);
  local_24 = 0;
  local_30 = (ushort *)FUN_00416740(local_20);
  local_40 = local_30 + *(ushort *)(param_1 + 0x42);
  local_7c = 0;
  if (local_20 != 0) {
    local_7c = *(int *)(local_20 + -4);
  }
  local_38 = local_30 + local_7c;
  if (local_40 < local_38) {
    do {
      if (DAT_01e9cd3c == '\0') {
        local_7f = false;
      }
      else {
        local_7e = *local_40;
        if (local_7e < 0x100) {
          local_7f = ((byte)(&DAT_00be7ba8)[(longlong)(ulonglong)local_7e >> 3] >>
                      ((ulonglong)local_7e & 7) & 1) != 0;
        }
        else {
          local_7f = false;
        }
      }
      if (local_7f == false) {
        local_50 = local_30 + *(ushort *)(param_1 + 0x40);
        local_48 = local_40;
        if (local_50 < local_40) {
          do {
            cVar3 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x370))
                              (*(longlong **)(param_1 + 0x38),*local_48);
            if (cVar3 != '\0') {
              local_40 = local_48;
              break;
            }
            local_48 = local_48 + -1;
          } while (local_50 < local_48);
        }
      }
      else {
        do {
          local_40 = local_40 + 1;
          local_82 = *local_40;
          if (local_82 < 0x100) {
            bVar5 = ((byte)(&DAT_00be7ba8)[(longlong)(ulonglong)local_82 >> 3] >>
                     ((ulonglong)local_82 & 7) & 1) != 0;
          }
          else {
            bVar5 = false;
          }
        } while (bVar5);
      }
      puVar2 = local_40;
      if ((DAT_01e9cd3c != '\0') && (0xffff < ((longlong)local_40 - (longlong)local_30) / 2)) {
        local_40 = local_30 + 0xffff;
        local_50 = local_40 +
                   -(longlong)
                    (int)(0xffff % (longlong)*(int *)(*(longlong *)(param_1 + 0x38) + 0x618));
        for (; (puVar2 = local_40, *local_40 == 9 && (local_50 < local_40));
            local_40 = local_40 + -1) {
        }
      }
      do {
        if (puVar2 <= local_30) break;
        local_58 = puVar2 + -1;
        local_40 = puVar2;
        puVar2 = local_58;
      } while (*local_58 == 0xe000);
      *(short *)(local_10 + (longlong)local_24 * 2) =
           (short)(((longlong)local_40 - (longlong)local_30) / 2);
      local_24 = local_24 + 1;
      local_30 = local_40;
      local_40 = local_40 + *(ushort *)(param_1 + 0x42);
    } while (local_40 < local_38);
  }
  if (local_30 < local_38) {
    local_89 = true;
  }
  else {
    local_88 = 0;
    if (local_20 != 0) {
      local_88 = *(int *)(local_20 + -4);
    }
    local_89 = local_88 == 0;
  }
  if (local_89 != false) {
    *(short *)(local_10 + (longlong)local_24 * 2) =
         (short)(((longlong)local_38 - (longlong)local_30) / 2);
    local_24 = local_24 + 1;
  }
  if (param_2 == 0) {
    local_5c = 0;
  }
  else {
    local_5c = *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)(int)(param_2 - 1) * 4);
  }
  local_60 = *(int *)(*(longlong *)(param_1 + 0x18) + (ulonglong)param_2 * 4);
  local_14 = local_24 - (local_60 - local_5c);
  if (local_14 != 0) {
    local_64 = param_2;
    if (local_14 < 1) {
      iVar4 = FUN_00be7fe0(param_1);
      if (local_60 < iVar4) {
        FUN_00be7460(param_1,local_60,local_14);
      }
      iVar4 = *(int *)(param_1 + 0x30) + -1;
      if ((int)param_2 <= iVar4) {
        iVar4 = (iVar4 - param_2) + 1;
        do {
          piVar1 = (int *)(*(longlong *)(param_1 + 0x18) + (longlong)(int)local_64 * 4);
          *piVar1 = *piVar1 + local_14;
          local_64 = local_64 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    else {
      iVar4 = FUN_00be7fe0(param_1);
      FUN_00be71a0(param_1,iVar4 + local_14);
      if (local_14 == 1) {
        local_70 = *(longlong *)(param_1 + 0x18);
        iVar4 = *(int *)(param_1 + 0x30) + -1;
        if ((int)param_2 <= iVar4) {
          iVar4 = (iVar4 - param_2) + 1;
          do {
            piVar1 = (int *)(local_70 + (longlong)(int)local_64 * 4);
            *piVar1 = *piVar1 + 1;
            local_64 = local_64 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
      else {
        local_70 = *(longlong *)(param_1 + 0x18);
        iVar4 = *(int *)(param_1 + 0x30) + -1;
        if ((int)param_2 <= iVar4) {
          iVar4 = (iVar4 - param_2) + 1;
          do {
            piVar1 = (int *)(local_70 + (longlong)(int)local_64 * 4);
            *piVar1 = *piVar1 + local_14;
            local_64 = local_64 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
      iVar4 = FUN_00be7fe0(param_1);
      if (local_60 < iVar4 - local_14) {
        FUN_00be7460(param_1,local_60,local_14);
      }
    }
  }
  FUN_00409a70(local_10,*(longlong *)(param_1 + 0x20) + (longlong)local_5c * 2,
               (longlong)(local_24 * 2));
  FUN_004095f0(local_10);
  FUN_00414480(&local_a8);
  FUN_00414480(&local_20);
  return local_14;
}

