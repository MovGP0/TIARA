/* Ghidra address: 00837690 */
/* Ghidra symbol: FUN_00837690 */


int FUN_00837690(longlong param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined4 local_50;
  int local_4c;
  longlong local_48;
  ushort local_3a;
  longlong local_38;
  byte local_29;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  
  local_70 = auStack_d8;
  local_a8 = 0;
  local_b0 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_78 = 0;
  local_80 = 0;
  local_38 = 0;
  local_10 = 0;
  local_18 = 0;
  puVar1 = auStack_d8;
  local_1c = param_4;
  if (param_3 != 0) {
    local_20 = 1;
    FUN_00414b50(&local_38,param_3);
    local_28 = FUN_00832450(*(undefined8 *)(param_1 + 0x4d8),param_4);
    puVar1 = local_70;
    iVar2 = local_28;
    if (-1 < local_28) {
      while( true ) {
        local_24 = iVar2;
        local_48 = *(longlong *)(param_1 + 0x4d8);
        local_4c = 0;
        if (local_48 != 0) {
          local_4c = *(int *)(local_48 + -4);
        }
        if (local_4c < local_24) break;
        uVar4 = FUN_008317e0(*(undefined8 *)(param_1 + 0x4d8),local_24);
        local_29 = (byte)uVar4;
        if (local_29 < 8) {
          bVar7 = ((int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) << (local_29 & 0x1f) & 0x36U) != 0
          ;
        }
        else {
          bVar7 = false;
        }
        if (bVar7) {
          local_3a = *(ushort *)(local_38 + -2 + (longlong)local_20 * 2);
          uVar5 = FUN_00837040(param_1,&local_3a,local_24);
          if ((char)uVar5 == '\0') {
            if ((0xd7ff < local_3a) && (local_3a < 0xe000)) {
              lVar6 = FUN_00414de0(&local_38);
              *(undefined2 *)(lVar6 + -2 + (longlong)(local_20 + 1) * 2) =
                   *(undefined2 *)(param_1 + 0x4e0);
            }
            local_3a = *(ushort *)(param_1 + 0x4e0);
            uVar5 = (ulonglong)local_3a;
          }
          if (local_29 < 8) {
            bVar7 = ((int)CONCAT71((int7)(uVar5 >> 8),1) << (local_29 & 0x1f) & 6U) != 0;
          }
          else {
            bVar7 = false;
          }
          if ((bVar7) && (local_3a != *(ushort *)(local_38 + -2 + (longlong)local_20 * 2))) {
            local_10 = 0;
            FUN_00416dc0(&local_78,local_38,1,local_20 + -1);
            FUN_00416780(&local_80,local_3a);
            FUN_00416ba0(&local_10,local_78,local_80);
            local_50 = 0;
            if (local_38 != 0) {
              local_50 = *(undefined4 *)(local_38 + -4);
            }
            FUN_00416dc0(&local_88,local_38,local_20,local_50);
            FUN_00416ba0(&local_38,local_10,local_88);
            FUN_00414480(&local_10);
          }
          else {
            lVar6 = FUN_00414de0(&local_38);
            *(ushort *)(lVar6 + -2 + (longlong)local_20 * 2) = local_3a;
            if ((0xd7ff < local_3a) && (local_3a < 0xe000)) {
              local_20 = local_20 + 1;
              local_24 = local_24 + 1;
            }
          }
          local_20 = local_20 + 1;
        }
        if (*(int *)(param_1 + 0x4e4) < local_20 + param_4) break;
        local_54 = 0;
        if (local_38 != 0) {
          local_54 = *(int *)(local_38 + -4);
        }
        if (local_54 < local_20) break;
        iVar2 = local_24 + 1;
      }
      local_58 = 0;
      if (local_38 != 0) {
        local_58 = *(int *)(local_38 + -4);
      }
      if (param_4 + local_58 < *(int *)(param_1 + 0x4e4)) {
        local_5c = 0;
        if (local_38 != 0) {
          local_5c = *(int *)(local_38 + -4);
        }
        cVar3 = FUN_0044f380(*param_2,param_4 + local_5c + 1);
        if (cVar3 == '\x02') {
          FUN_00416780(&local_90,*(undefined2 *)(param_1 + 0x4e0));
          FUN_00416ad0(&local_38,local_90);
          local_20 = local_20 + 1;
        }
        local_18 = 0;
        FUN_00416dc0(&local_98,*param_2,1,param_4);
        FUN_00416ba0(&local_18,local_98,local_38);
        local_60 = 0;
        if (local_38 != 0) {
          local_60 = *(int *)(local_38 + -4);
        }
        local_64 = 0;
        if (local_38 != 0) {
          local_64 = *(int *)(local_38 + -4);
        }
        FUN_00416dc0(&local_a0,*param_2,param_4 + local_60 + 1,
                     *(int *)(param_1 + 0x4e4) - (param_4 + local_64));
        FUN_00416ba0(param_2,local_18,local_a0);
        FUN_00414480(&local_18);
      }
      else {
        local_28 = param_4;
        cVar3 = FUN_0044f380(local_38,*(int *)(param_1 + 0x4e4) - param_4);
        if (cVar3 == '\x01') {
          local_28 = local_28 + 1;
        }
        FUN_00416dc0(&local_a8,*param_2,1,param_4);
        FUN_00416dc0(&local_b0,local_38,1,*(int *)(param_1 + 0x4e4) - local_28);
        FUN_00416ba0(param_2,local_a8,local_b0);
      }
      local_1c = local_20 + param_4 + -1;
      puVar1 = local_70;
    }
  }
  local_70 = puVar1;
  FUN_00414560(&local_b0,8);
  FUN_00414480(&local_38);
  return local_1c;
}

