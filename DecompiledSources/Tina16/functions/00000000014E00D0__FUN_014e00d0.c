/* Ghidra address: 014e00d0 */
/* Ghidra symbol: FUN_014e00d0 */


void FUN_014e00d0(longlong *param_1,longlong param_2,undefined8 param_3,byte *param_4,char param_5,
                 longlong param_6)

{
  undefined8 *puVar1;
  longlong *plVar2;
  char *pcVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ushort uVar10;
  undefined8 uVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong local_a0;
  undefined8 local_98;
  byte *local_90;
  char local_81;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  short *local_40;
  undefined8 *local_38;
  char *local_30;
  
  local_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  local_40 = (short *)0x0;
  local_a8 = param_1;
  local_a0 = param_2;
  local_98 = param_3;
  local_90 = param_4;
  local_30 = (char *)FUN_00409570(0x58);
  plVar2 = local_a8;
  uVar8 = (**(code **)(*local_a8 + 0xf8))(local_a8);
  pcVar3 = local_30;
  uVar10 = (short)uVar8 - 8;
  if (uVar10 < 0x10) {
    bVar13 = ((int)CONCAT62((int6)((ulonglong)uVar8 >> 0x10),1) << ((byte)uVar10 & 0x1f) & 0x180U)
             != 0;
  }
  else {
    bVar13 = false;
  }
  if (bVar13) {
    if (local_90 != (byte *)0x0) {
      iVar5 = FUN_00414f50(local_90,&DAT_014e066a,(ulonglong)*local_90 + 1);
      if (iVar5 == 0) {
        *pcVar3 = '\x01';
      }
      else {
        iVar5 = FUN_00414f50(local_90,&DAT_014e066e,(ulonglong)*local_90 + 1);
        if (iVar5 == 0) {
          *pcVar3 = '\x02';
        }
        else {
          iVar5 = FUN_00414f50(local_90,&DAT_014e0674,(ulonglong)*local_90 + 1);
          if (iVar5 == 0) {
            *pcVar3 = '\x03';
          }
          else {
            iVar5 = FUN_00414f50(local_90,&DAT_014e0679,(ulonglong)*local_90 + 1);
            if (iVar5 == 0) {
              *pcVar3 = '\x04';
            }
            else {
              *pcVar3 = '\x05';
            }
          }
        }
      }
    }
    FUN_014dfb10(local_30,param_6);
    local_81 = '\0';
    iVar5 = *(int *)(local_a0 + 0x10);
    iVar12 = 0;
    if (-1 < iVar5 + -1) {
      do {
        local_80 = FUN_01d347d0(local_a0,iVar12);
        if (*pcVar3 == '\x01') {
          if ((local_81 == '\0') &&
             (iVar6 = FUN_00414f50(*(undefined8 *)(local_80 + 8),&DAT_014e067d,
                                   (ulonglong)**(byte **)(local_80 + 8) + 1), iVar6 != 0)) {
            local_81 = '\0';
          }
          else {
            local_81 = '\x01';
          }
        }
        FUN_014dffe0(auStack_c8,local_80);
        iVar12 = iVar12 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if ((*pcVar3 == '\x01') && (local_81 == '\0')) {
      *(double *)(local_30 + 0x40) = *(double *)(local_30 + 0x30) + *(double *)(param_6 + 0xda8);
    }
  }
  else {
    iVar5 = *(int *)(local_a0 + 0x10);
    iVar12 = 0;
    if (-1 < iVar5 + -1) {
      do {
        uVar8 = FUN_01d347d0(local_a0,iVar12);
        FUN_014dffe0(auStack_c8,uVar8);
        iVar12 = iVar12 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  uVar11 = 0;
  (**(code **)(*plVar2 + 0x2d0))(plVar2,0,&local_38);
  uVar8 = (**(code **)(*plVar2 + 0xf8))(plVar2);
  uVar10 = (short)uVar8 - 8;
  if (uVar10 < 0x10) {
    uVar7 = (int)CONCAT62((int6)((ulonglong)uVar8 >> 0x10),1) << ((byte)uVar10 & 0x1f);
    bVar13 = (uVar7 & 0x180) != 0;
    uVar9 = (ulonglong)CONCAT31((int3)(uVar7 >> 8),bVar13);
  }
  else {
    uVar9 = 0;
    bVar13 = false;
  }
  if (bVar13) {
    if (param_5 == '\x01') {
      *local_38 = *(undefined8 *)(local_30 + 8);
    }
    else if (param_5 == '\x06') {
      if (*local_30 == '\0') {
        *local_38 = *(undefined8 *)(local_30 + 8);
        (**(code **)(*plVar2 + 0x2d0))(plVar2,1,&local_38);
        **(undefined8 **)((longlong)local_38 + 1) = 0;
      }
      else {
        if (*local_30 != '\x05') {
          *local_38 = *(undefined8 *)(local_30 + 0x20);
        }
        FUN_01cfab80(local_a8,&local_70);
        FUN_01d396b0(&local_70,1,1);
        (**(code **)(*plVar2 + 0x2d0))(plVar2,1,&local_38);
        FUN_014dfc40(local_38,local_a0,local_30);
      }
    }
    else {
      if ((byte)(param_5 - 8U) < 8) {
        bVar13 = ((int)CONCAT71((int7)(uVar9 >> 8),1) << (param_5 - 8U & 0x1f) & 0x11U) != 0;
      }
      else {
        bVar13 = false;
      }
      if (bVar13) {
        *local_38 = *(undefined8 *)(local_30 + 8);
        (**(code **)(*plVar2 + 0x2d0))(plVar2,1,&local_38);
        puVar1 = *(undefined8 **)((longlong)local_38 + 1);
        *puVar1 = *(undefined8 *)(local_30 + 0x10);
        puVar1[1] = 0x3ff0000000000000;
        puVar1[2] = *(double *)(local_30 + 0x18) - 90.0;
        FUN_004169a0(&local_78,local_98);
        iVar5 = FUN_004170c0(&DAT_014e0690,local_78,1);
        if ((iVar5 == 0) && (0 < *(int *)(param_6 + 0x99c))) {
          (**(code **)(*plVar2 + 0x2d0))(plVar2,3,&local_38);
          *(undefined1 *)local_38 = 1;
        }
      }
    }
    (**(code **)(*local_a8 + 0x288))(local_a8,&local_40);
    if ((*local_40 == 0x58) || (*(char *)(param_6 + 0x9aa) != '\0')) {
      (**(code **)(*plVar2 + 0x2d0))(plVar2,3,&local_38);
      *(undefined1 *)local_38 = 1;
    }
  }
  else {
    sVar4 = (**(code **)(*plVar2 + 0xf8))(plVar2);
    if ((ushort)(sVar4 - 8U) < 8) {
      bVar13 = ((int)CONCAT71((int7)((ulonglong)uVar11 >> 8),1) << ((byte)(sVar4 - 8U) & 0x1f) &
               0x60U) != 0;
    }
    else {
      bVar13 = false;
    }
    if (bVar13) {
      *local_38 = *(undefined8 *)(local_30 + 8);
    }
  }
  FUN_004095f0(local_30);
  FUN_00414480(&local_78);
  FUN_00417740(&local_70,&DAT_01d36af8);
  FUN_00414480(&local_40);
  return;
}

