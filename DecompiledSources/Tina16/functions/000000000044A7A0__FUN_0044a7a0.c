/* Ghidra address: 0044a7a0 */
/* Ghidra symbol: FUN_0044a7a0 */


undefined1 FUN_0044a7a0(longlong param_1,int *param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  int iVar2;
  ushort uVar3;
  bool bVar4;
  undefined1 auStack_d8 [40];
  undefined1 *local_b0;
  int local_9c;
  char local_95;
  undefined4 local_94;
  longlong *local_90;
  char local_85;
  undefined4 local_84;
  longlong *local_80;
  int local_74;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  int local_40;
  byte local_3a;
  byte local_39;
  undefined1 local_38;
  byte local_37;
  ushort local_36;
  ushort local_34;
  ushort local_32;
  ushort local_30;
  ushort local_2e;
  ushort local_2c;
  char local_2a;
  undefined1 local_29;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  local_b0 = auStack_d8;
  local_48 = 0;
  local_50 = 0;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  local_29 = 0;
  local_2a = FUN_0044a620(*(undefined8 *)(param_4 + 0x10));
  local_c = 0;
  if (**(short **)(param_4 + 0x10) == 0x67) {
    FUN_0044a690(param_1,param_2);
    FUN_00414480(&local_18);
    FUN_00416dc0(&local_18,param_1,1,*param_2 + -1);
    FUN_00414b50(&local_50,local_18);
    FUN_00457870(&local_50,&local_48);
    FUN_00414480(&local_18);
    local_c = FUN_0044cf50(param_4,local_48);
  }
  else {
    iVar2 = FUN_0044f900(&DAT_0044af64,*(undefined8 *)(param_4 + 0x10));
    if (0 < iVar2) {
      local_58 = *(longlong *)(param_4 + 0x170);
      local_60 = local_58;
      if (local_58 != 0) {
        local_60 = *(longlong *)(local_58 + -8);
      }
      if (-1 < local_60 + -1) {
        local_68 = *(longlong *)(param_4 + 0x170);
        local_70 = local_68;
        if (local_68 != 0) {
          local_70 = *(longlong *)(local_68 + -8);
        }
        local_c = *(int *)(*(longlong *)(param_4 + 0x170) + 8 + (local_70 + -1) * 0x20);
      }
    }
  }
  cVar1 = FUN_0044a3f0(param_1,param_2,&local_2c,&local_37);
  if (cVar1 != '\0') {
    cVar1 = FUN_0044a5d0(param_1,param_2,*(undefined2 *)(param_4 + 10));
    if (cVar1 != '\0') {
      cVar1 = FUN_0044a3f0(param_1,param_2,&local_2e,&local_38);
      if (cVar1 != '\0') {
        cVar1 = FUN_0044a5d0(param_1,param_2,*(undefined2 *)(param_4 + 10));
        if (cVar1 == '\0') {
          local_32 = FUN_00448f30();
          if (local_2a == '\x01') {
            local_36 = local_2c;
            local_34 = local_2e;
          }
          else {
            local_34 = local_2c;
            local_36 = local_2e;
          }
        }
        else {
          cVar1 = FUN_0044a3f0(param_1,param_2,&local_30,&local_39);
          if (cVar1 == '\0') goto LAB_0044ae84;
          if (local_2a == '\0') {
            local_32 = local_30;
            local_3a = local_39;
            local_34 = local_2c;
            local_36 = local_2e;
          }
          else if (local_2a == '\x01') {
            local_32 = local_30;
            local_3a = local_39;
            local_34 = local_2e;
            local_36 = local_2c;
          }
          else {
            local_32 = local_2c;
            local_3a = local_37;
            local_34 = local_2e;
            local_36 = local_30;
          }
          if (local_c < 1) {
            if (local_3a < 3) {
              uVar3 = FUN_00448f30();
              local_40 = (uint)uVar3 - (uint)*(ushort *)(param_4 + 0x17c);
              local_32 = local_32 + (short)(local_40 / 100) * 100;
              if ((*(short *)(param_4 + 0x17c) != 0) && ((int)(uint)local_32 < local_40)) {
                local_32 = local_32 + 100;
              }
            }
          }
          else {
            local_32 = FUN_0044a720(auStack_d8,local_32);
          }
        }
        FUN_0044a5d0(param_1,param_2,*(undefined2 *)(param_4 + 10));
        FUN_0044a3c0(param_1,param_2);
        if (DAT_0200c44c != '\0') {
          cVar1 = FUN_004562e0(param_4 + 0x10,L"dddd");
          if (cVar1 != '\0') {
            uVar3 = **(short **)(param_4 + 0x30) - 0x30;
            if (uVar3 < 0x10) {
              bVar4 = ((int)CONCAT62((int6)((ulonglong)*(short **)(param_4 + 0x30) >> 0x10),1) <<
                       ((byte)uVar3 & 0x1f) & 0x3ffU) != 0;
            }
            else {
              bVar4 = false;
            }
            if (bVar4) {
              FUN_0044a690(param_1,param_2);
            }
            else {
              do {
                while( true ) {
                  local_9c = 0;
                  if (param_1 != 0) {
                    local_9c = *(int *)(param_1 + -4);
                  }
                  if ((local_9c < *param_2) ||
                     (*(short *)(param_1 + -2 + (longlong)*param_2 * 2) == 0x20)) break;
                  *param_2 = *param_2 + 1;
                }
                FUN_0044a3c0(param_1,param_2);
                local_74 = 0;
                if (param_1 != 0) {
                  local_74 = *(int *)(param_1 + -4);
                }
                if (local_74 < *param_2) {
                  local_85 = '\x01';
                }
                else {
                  local_80 = (longlong *)(param_4 + 0x20);
                  local_84 = 0;
                  if (*local_80 != 0) {
                    local_84 = *(undefined4 *)(*local_80 + -4);
                  }
                  FUN_00414480(&local_20);
                  FUN_00416dc0(&local_20,param_1,*param_2,local_84);
                  iVar2 = FUN_0043e6d0(*(undefined8 *)(param_4 + 0x20),local_20);
                  local_85 = iVar2 == 0;
                  FUN_00414480(&local_20);
                }
                if (local_85 == '\0') {
                  local_90 = (longlong *)(param_4 + 0x28);
                  local_94 = 0;
                  if (*local_90 != 0) {
                    local_94 = *(undefined4 *)(*local_90 + -4);
                  }
                  FUN_00414480(&local_28);
                  FUN_00416dc0(&local_28,param_1,*param_2,local_94);
                  iVar2 = FUN_0043e6d0(*(undefined8 *)(param_4 + 0x28),local_28);
                  local_95 = iVar2 == 0;
                  FUN_00414480(&local_28);
                }
                else {
                  local_95 = '\x01';
                }
              } while (local_95 == '\0');
            }
          }
        }
        local_29 = FUN_00448b70(local_32,local_34,local_36,param_3);
      }
    }
  }
LAB_0044ae84:
  FUN_00414560(&local_50,2);
  FUN_00414560(&local_28,3);
  return local_29;
}

