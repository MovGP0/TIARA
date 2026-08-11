/* Ghidra address: 008369d0 */
/* Ghidra symbol: FUN_008369d0 */


longlong * FUN_008369d0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_a8 [44];
  int local_7c;
  undefined8 local_78;
  undefined1 *local_70;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  longlong local_40;
  byte local_32;
  byte local_31;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined8 local_20;
  
  local_70 = auStack_a8;
  local_78 = 0;
  local_20 = 0;
  local_2c = 1;
  FUN_00414ad0(param_2,param_3);
  local_40 = *(longlong *)(param_1 + 0x4d8);
  local_44 = 0;
  if (local_40 != 0) {
    local_44 = *(int *)(local_40 + -4);
  }
  local_7c = local_44;
  local_30 = 1;
  if (0 < local_44) {
    do {
      uVar2 = FUN_008317e0(*(undefined8 *)(param_1 + 0x4d8),local_30);
      local_31 = (byte)uVar2;
      if (local_31 < 8) {
        uVar1 = (int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) << (local_31 & 0x1f);
        uVar3 = (ulonglong)CONCAT31((int3)(uVar1 >> 8),(uVar1 & 6) != 0);
      }
      else {
        uVar3 = 0;
      }
      if ((char)uVar3 != '\0') {
        local_20 = 0;
        FUN_00416dc0(&local_20,*param_2,1,local_2c + -1);
        local_48 = 0;
        if (*param_2 != 0) {
          local_48 = *(int *)(*param_2 + -4);
        }
        FUN_00416dc0(&local_78,*param_2,local_2c + 1,local_48 - local_2c);
        FUN_00416ba0(param_2,local_20,local_78);
        uVar3 = FUN_00414480(&local_20);
      }
      if (local_31 < 8) {
        bVar7 = ((int)CONCAT71((int7)(uVar3 >> 8),1) << (local_31 & 0x1f) & 0x30U) != 0;
      }
      else {
        bVar7 = false;
      }
      if (bVar7) {
        local_2c = local_2c + 1;
      }
      local_30 = local_30 + 1;
      local_7c = local_7c + -1;
    } while (local_7c != 0);
  }
  local_32 = FUN_00831a60(*(undefined8 *)(param_1 + 0x4d8),1);
  if ((local_32 & 1) == 0) {
    local_54 = 0;
    if (*param_2 != 0) {
      local_54 = *(int *)(*param_2 + -4);
    }
    local_28 = local_54;
    local_24 = 1;
    iVar5 = local_54;
    if (0 < local_54) {
      do {
        if (*(short *)(*param_2 + -2 + (longlong)((local_28 - local_24) + 1) * 2) !=
            *(short *)(param_1 + 0x4e0)) break;
        local_58 = 0;
        if (*param_2 != 0) {
          local_58 = *(int *)(*param_2 + -4);
        }
        FUN_004169f0(param_2,local_58 + -1);
        local_24 = local_24 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  else {
    local_2c = 1;
    local_4c = 0;
    if (*param_2 != 0) {
      local_4c = *(int *)(*param_2 + -4);
    }
    local_24 = 1;
    iVar5 = local_4c;
    if (0 < local_4c) {
      do {
        if (*(short *)(*param_2 + -2 + (longlong)local_24 * 2) != *(short *)(param_1 + 0x4e0))
        break;
        local_2c = local_2c + 1;
        local_24 = local_24 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if (local_2c != 1) {
      local_50 = 0;
      if (*param_2 != 0) {
        local_50 = *(int *)(*param_2 + -4);
      }
      FUN_00416dc0(param_2,*param_2,local_2c,(local_50 - local_2c) + 1);
    }
  }
  if (*(short *)(param_1 + 0x4e0) != 0x20) {
    local_5c = 0;
    if (*param_2 != 0) {
      local_5c = *(int *)(*param_2 + -4);
    }
    local_28 = local_5c;
    local_24 = 1;
    iVar5 = local_5c;
    if (0 < local_5c) {
      do {
        lVar6 = (longlong)local_24;
        if (*(short *)(*param_2 + -2 + lVar6 * 2) == *(short *)(param_1 + 0x4e0)) {
          lVar4 = FUN_00414de0(param_2);
          *(undefined2 *)(lVar4 + -2 + lVar6 * 2) = 0x20;
        }
        if (local_28 < local_24) break;
        local_24 = local_24 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  FUN_00414480(&local_78);
  return param_2;
}

