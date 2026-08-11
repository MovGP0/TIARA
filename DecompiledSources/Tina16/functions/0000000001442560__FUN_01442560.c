/* Ghidra address: 01442560 */
/* Ghidra symbol: FUN_01442560 */


undefined1 FUN_01442560(char param_1,longlong param_2,undefined1 param_3,uint param_4)

{
  byte *pbVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  char cVar4;
  byte bVar5;
  undefined1 uVar6;
  ushort uVar7;
  undefined4 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  char *pcVar12;
  int iVar13;
  bool bVar14;
  undefined1 auStack_2d8 [32];
  char *local_2b8;
  undefined1 *local_2b0;
  undefined1 *local_2a8;
  undefined1 *local_290;
  undefined8 local_288;
  undefined1 *local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined1 local_248 [256];
  undefined8 local_148;
  undefined1 *local_140;
  int local_12c;
  longlong local_128;
  int local_11c;
  longlong local_118;
  longlong local_110;
  int local_104;
  longlong local_100;
  int local_f4;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  byte *local_b0;
  byte *local_a8;
  byte *local_a0;
  byte *local_90;
  undefined1 local_83;
  char local_82;
  undefined1 local_81;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  uint local_70;
  undefined1 local_6c [4];
  longlong *local_68;
  char local_59;
  undefined1 local_58 [22];
  char local_42;
  byte local_41;
  byte *local_40;
  undefined1 local_31;
  
  local_140 = auStack_2d8;
  local_288 = 0;
  local_290 = (undefined1 *)0x0;
  local_278 = 0;
  local_280 = (undefined1 *)0x0;
  local_270 = 0;
  local_268 = 0;
  local_260 = 0;
  local_258 = 0;
  local_250 = 0;
  local_148 = 0;
  local_31 = 1;
  puVar3 = auStack_2d8;
  if (*(longlong *)(param_2 + 0xe68) != 0) {
    iVar13 = *(int *)(*(longlong *)(param_2 + 0xe68) + 0x10);
    local_70 = 0;
    puVar3 = auStack_2d8;
    if (-1 < iVar13 + -1) {
      do {
        local_140 = puVar3;
        local_b8 = *(longlong *)(param_2 + 0xe68);
        if (*(uint *)(local_b8 + 0x10) <= local_70) {
          FUN_00594f90();
        }
        FUN_004095f0(*(undefined8 *)(*(longlong *)(local_b8 + 8) + (longlong)(int)local_70 * 8));
        local_70 = local_70 + 1;
        iVar13 = iVar13 + -1;
        puVar3 = local_140;
      } while (iVar13 != 0);
    }
    local_c0 = *(longlong *)(param_2 + 0xe68);
    FUN_00598010(local_c0 + 8);
    puVar3 = local_140;
  }
  local_140 = puVar3;
  local_2b8 = (char *)CONCAT71(local_2b8._1_7_,param_3);
  local_2b0 = (undefined1 *)CONCAT62(local_2b0._2_6_,1);
  local_2a8 = local_6c;
  cVar4 = FUN_014b7d50(0xe,*(undefined8 *)(param_2 + 0xe78),1,0);
  if (cVar4 == '\0') {
    *PTR_DAT_02002ce0 = 1;
    FUN_00ef4260(8,param_2);
    goto LAB_0144457a;
  }
  FUN_01440040(*(undefined8 *)(param_2 + 0xe78),*(undefined8 *)(param_2 + 0xe90),0);
  *(undefined1 *)(param_2 + 0xb3e) = 0;
  *(undefined2 *)(param_2 + 0x10) = 0xb;
  *(undefined2 *)(param_2 + 0x12) = 0xb;
  if (*PTR_DAT_020052b8 == '\0') {
    *(undefined1 *)(param_2 + 0xb1) = 0;
  }
  *(undefined1 *)(param_2 + 0xb2) = 1;
  local_40 = (byte *)FUN_004095c0(0xb8);
  local_40[0xb0] = 0;
  local_40[0xb1] = 0;
  local_40[0xb2] = 0;
  local_40[0xb3] = 0;
  local_40[0xb4] = 0;
  local_40[0xb5] = 0;
  local_40[0xb6] = 0;
  local_40[0xb7] = 0;
  if (local_40 == (byte *)0x0) {
    FUN_00ef4260(1,param_2);
    goto LAB_0144457a;
  }
  *(byte **)(param_2 + 8) = local_40;
  cVar4 = FUN_01995600(*(undefined8 *)(param_2 + 0xe78),1,0);
  if (cVar4 == '\0') {
    FUN_00ef4260(8,param_2);
    goto LAB_0144457a;
  }
  uVar8 = FUN_019954d0(*(undefined8 *)(param_2 + 0xe78));
  *(undefined4 *)(param_2 + 0x40) = uVar8;
  local_68 = (longlong *)FUN_01995660(*(undefined8 *)(param_2 + 0xe78),0,1);
  if (local_68 == (longlong *)0x0) {
    FUN_00ef4260(8,param_2);
    goto LAB_0144457a;
  }
  while (local_68 != (longlong *)0x0) {
    lVar9 = FUN_004095c0(0xb8);
    *(longlong *)(local_40 + 0xb0) = lVar9;
    if (lVar9 == 0) {
      FUN_00ef4260(1,param_2);
      goto LAB_0144457a;
    }
    local_90 = *(byte **)(local_40 + 0xb0);
    local_40 = local_90;
    bVar5 = (**(code **)(*local_68 + 0xf8))(local_68);
    *local_90 = bVar5;
    local_90[0xa8] = 0;
    local_90[0xa9] = 0;
    local_90[0xaa] = 0;
    local_90[0xab] = 0;
    local_90[0xac] = 0;
    local_90[0xad] = 0;
    local_90[0xae] = 0;
    local_90[0xaf] = 0;
    local_90[0xb0] = 0;
    local_90[0xb1] = 0;
    local_90[0xb2] = 0;
    local_90[0xb3] = 0;
    local_90[0xb4] = 0;
    local_90[0xb5] = 0;
    local_90[0xb6] = 0;
    local_90[0xb7] = 0;
    local_41 = 1;
    do {
      pbVar1 = local_90 + (ulonglong)local_41 * 4;
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      local_41 = local_41 + 1;
    } while (local_41 != 5);
    local_41 = 1;
    do {
      pbVar1 = local_90 + (ulonglong)local_41 * 4 + 0x50;
      pbVar1[0] = 0xff;
      pbVar1[1] = 0xff;
      pbVar1[2] = 0xff;
      pbVar1[3] = 0xff;
      local_41 = local_41 + 1;
    } while (local_41 != 5);
    uVar8 = (**(code **)(*local_68 + 0x1c8))(local_68);
    cVar4 = FUN_00b905f0(uVar8,0x14);
    local_41 = 1;
    local_42 = cVar4;
    for (; cVar4 != '\0'; cVar4 = cVar4 + -1) {
      uVar8 = (**(code **)(*local_68 + 0x210))(local_68,local_41 - 1);
      *(undefined4 *)(local_90 + (ulonglong)local_41 * 4) = uVar8;
      local_41 = local_41 + 1;
    }
    local_41 = 1;
    for (cVar4 = local_42; cVar4 != '\0'; cVar4 = cVar4 + -1) {
      uVar8 = (**(code **)(*local_68 + 0x220))(local_68,local_41 - 1);
      *(undefined4 *)(local_90 + (ulonglong)local_41 * 4 + 0x50) = uVar8;
      local_41 = local_41 + 1;
    }
    local_90[0xa4] = 0;
    local_90[0xa5] = 0;
    uVar10 = (ulonglong)*local_40;
    if (uVar10 < 0x56) {
      if (uVar10 == 0x55) {
LAB_01442fbf:
        (**(code **)(*local_68 + 0x288))(local_68,&local_250);
        FUN_00416910(local_248,local_250,0xff);
        FUN_00415020(local_58,local_248,0x14);
        *local_40 = 0x56;
      }
      else if (uVar10 < 0x1a) {
        if (uVar10 < 0xd) {
          if (uVar10 != 0xc) {
            if (uVar10 < 10) {
              if (uVar10 == 9) goto LAB_0144315d;
              if (uVar10 < 3) goto LAB_01443b22;
              if (uVar10 - 3 < 5) goto LAB_0144301b;
              if (uVar10 - 3 == 5) goto LAB_0144306d;
            }
            else {
              if (uVar10 == 10) goto LAB_014431c9;
              if (uVar10 == 0xb) goto LAB_01443200;
            }
            goto LAB_01443afa;
          }
          FUN_01440b40(local_40,local_68,param_2);
          *(undefined1 *)(param_2 + 0xb2) = 0;
        }
        else if (uVar10 < 0x16) {
          if (uVar10 == 0x15) goto LAB_01442fbf;
          if (uVar10 - 0xd < 2) {
            FUN_01442050(local_40,local_68,param_2);
          }
          else {
            if (1 < uVar10 - 0xf) {
              if (uVar10 - 0x11 < 4) goto LAB_0144315d;
              goto LAB_01443afa;
            }
LAB_014430d7:
            FUN_01441cd0(local_40,local_68,param_2);
          }
        }
        else {
          if (uVar10 != 0x16) {
            if (uVar10 - 0x18 < 2) goto LAB_01443291;
            goto LAB_01443afa;
          }
LAB_0144301b:
          (**(code **)(*local_68 + 0x288))(local_68,&local_258);
          FUN_00416910(local_248,local_258,0xff);
          FUN_00415020(local_58,local_248,0x14);
        }
      }
      else if (uVar10 < 0x35) {
        if (uVar10 == 0x34) {
          FUN_01440fd0(local_40,local_68,param_2);
        }
        else {
          if (uVar10 < 0x25) {
            if (uVar10 - 0x1a < 4) goto LAB_01443335;
            if (uVar10 - 0x1e < 2) goto LAB_014433d9;
            if (uVar10 - 0x21 < 2) goto LAB_0144301b;
            goto LAB_01443afa;
          }
          if (uVar10 - 0x25 < 2) {
            FUN_014412c0(&local_40,local_68,param_2);
            *(undefined1 *)(param_2 + 0xb2) = 0;
          }
          else if (uVar10 != 0x27) {
            if (uVar10 - 0x32 < 2) goto LAB_01443451;
            goto LAB_01443afa;
          }
        }
      }
      else if (uVar10 < 0x3d) {
        if (uVar10 == 0x39) {
          if ((*(char *)(local_68[0x35] + 0x70) == '\x02') &&
             (plVar2 = *(longlong **)(*(longlong *)(param_2 + 0xe78) + 0x458),
             iVar13 = (**(code **)(*plVar2 + 0xb0))(plVar2,*(undefined8 *)(local_68[0x35] + 0x40)),
             -1 < iVar13)) {
            (**(code **)(*local_68 + 0x288))(local_68,&local_148);
            FUN_00416910(local_248,local_148,0xff);
            FUN_00415020(local_58,local_248,0x14);
            *local_40 = 0x56;
            uVar8 = FUN_01442440(local_68,*(undefined8 *)(*(longlong *)(param_2 + 0xe78) + 0x458),1,
                                 *(undefined4 *)(local_40 + 4));
            *(undefined4 *)(local_40 + 4) = uVar8;
            uVar8 = FUN_01442440(local_68,*(undefined8 *)(*(longlong *)(param_2 + 0xe78) + 0x458),2,
                                 *(undefined4 *)(local_40 + 8));
            *(undefined4 *)(local_40 + 8) = uVar8;
            uVar8 = FUN_01442440(local_68,*(undefined8 *)(*(longlong *)(param_2 + 0xe78) + 0x458),3,
                                 *(undefined4 *)(local_40 + 0xc));
            *(undefined4 *)(local_40 + 0xc) = uVar8;
          }
          else {
            *(longlong **)(param_2 + 0xb20) = local_68;
            FUN_00ef4260(7,param_2);
          }
        }
        else if (uVar10 != 0x3a) {
          if (uVar10 == 0x3c) goto LAB_0144315d;
          goto LAB_01443afa;
        }
      }
      else if (uVar10 - 0x3d < 2) {
LAB_0144347a:
        if ((byte)(*local_40 + 0xa0) < 8) {
          bVar14 = ((int)CONCAT71((int7)((ulonglong)local_40 >> 8),1) << (*local_40 + 0xa0 & 0x1f) &
                   0x60U) != 0;
        }
        else {
          bVar14 = false;
        }
        if (bVar14) {
          local_74 = *(undefined4 *)(local_40 + 8);
          local_78 = *(undefined4 *)(local_40 + 4);
          *(undefined4 *)(local_40 + 4) = *(undefined4 *)(local_40 + 0xc);
          *(undefined4 *)(local_40 + 8) = local_78;
          local_7c = *(undefined4 *)(local_40 + 0x5c);
          local_80 = *(undefined4 *)(local_40 + 0x54);
        }
        else {
          local_74 = *(undefined4 *)(local_40 + 0xc);
          local_78 = *(undefined4 *)(local_40 + 0x10);
          local_7c = *(undefined4 *)(local_40 + 0x5c);
          local_80 = *(undefined4 *)(local_40 + 0x60);
        }
        local_40[0xc] = 0;
        local_40[0xd] = 0;
        local_40[0xe] = 0;
        local_40[0xf] = 0;
        local_40[0x10] = 0;
        local_40[0x11] = 0;
        local_40[0x12] = 0;
        local_40[0x13] = 0;
        local_40[0x5c] = 0;
        local_40[0x5d] = 0;
        local_40[0x5e] = 0;
        local_40[0x5f] = 0;
        local_40[0x60] = 0;
        local_40[0x61] = 0;
        local_40[0x62] = 0;
        local_40[99] = 0;
        *local_40 = 5;
        (**(code **)(*local_68 + 0x288))(local_68,&local_268);
        FUN_00416910(local_248,local_268,0xff);
        FUN_00415020(local_58,local_248,0x14);
        uVar11 = FUN_004095c0(0xb8);
        *(undefined8 *)(local_40 + 0xb0) = uVar11;
        if (*(longlong *)(local_40 + 0xb0) == 0) {
          FUN_00ef4260(1,param_2);
          goto LAB_0144457a;
        }
        local_a0 = *(byte **)(local_40 + 0xb0);
        *local_a0 = 5;
        local_a0[0xa8] = 0;
        local_a0[0xa9] = 0;
        local_a0[0xaa] = 0;
        local_a0[0xab] = 0;
        local_a0[0xac] = 0;
        local_a0[0xad] = 0;
        local_a0[0xae] = 0;
        local_a0[0xaf] = 0;
        local_a0[0xb0] = 0;
        local_a0[0xb1] = 0;
        local_a0[0xb2] = 0;
        local_a0[0xb3] = 0;
        local_a0[0xb4] = 0;
        local_a0[0xb5] = 0;
        local_a0[0xb6] = 0;
        local_a0[0xb7] = 0;
        local_41 = 1;
        do {
          pbVar1 = local_a0 + (ulonglong)local_41 * 4;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          local_41 = local_41 + 1;
        } while (local_41 != 5);
        local_41 = 1;
        do {
          pbVar1 = local_a0 + (ulonglong)local_41 * 4 + 0x50;
          pbVar1[0] = 0xff;
          pbVar1[1] = 0xff;
          pbVar1[2] = 0xff;
          pbVar1[3] = 0xff;
          local_41 = local_41 + 1;
        } while (local_41 != 5);
        *(undefined4 *)(local_a0 + 4) = local_74;
        *(undefined4 *)(local_a0 + 8) = local_78;
        *(undefined4 *)(local_a0 + 0x54) = local_7c;
        *(undefined4 *)(local_a0 + 0x58) = local_80;
        local_a0[0xa4] = 0;
        local_a0[0xa5] = 0;
        local_41 = 5;
        local_40 = local_a0;
      }
      else if (uVar10 == 0x3f) {
        local_74 = *(undefined4 *)(local_40 + 0xc);
        local_78 = *(undefined4 *)(local_40 + 0x10);
        local_7c = *(undefined4 *)(local_40 + 0x5c);
        local_80 = *(undefined4 *)(local_40 + 0x60);
        local_40[0xc] = 0;
        local_40[0xd] = 0;
        local_40[0xe] = 0;
        local_40[0xf] = 0;
        local_40[0x10] = 0;
        local_40[0x11] = 0;
        local_40[0x12] = 0;
        local_40[0x13] = 0;
        local_40[0x5c] = 0xff;
        local_40[0x5d] = 0xff;
        local_40[0x5e] = 0xff;
        local_40[0x5f] = 0xff;
        local_40[0x60] = 0xff;
        local_40[0x61] = 0xff;
        local_40[0x62] = 0xff;
        local_40[99] = 0xff;
        *local_40 = 5;
        uVar11 = FUN_004095c0(0xb8);
        *(undefined8 *)(local_40 + 0xb0) = uVar11;
        if (*(longlong *)(local_40 + 0xb0) == 0) {
          FUN_00ef4260(1,param_2);
          goto LAB_0144457a;
        }
        local_a8 = *(byte **)(local_40 + 0xb0);
        *local_a8 = 6;
        local_a8[0xa8] = 0;
        local_a8[0xa9] = 0;
        local_a8[0xaa] = 0;
        local_a8[0xab] = 0;
        local_a8[0xac] = 0;
        local_a8[0xad] = 0;
        local_a8[0xae] = 0;
        local_a8[0xaf] = 0;
        local_a8[0xb0] = 0;
        local_a8[0xb1] = 0;
        local_a8[0xb2] = 0;
        local_a8[0xb3] = 0;
        local_a8[0xb4] = 0;
        local_a8[0xb5] = 0;
        local_a8[0xb6] = 0;
        local_a8[0xb7] = 0;
        local_41 = 1;
        do {
          pbVar1 = local_a8 + (ulonglong)local_41 * 4;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          local_41 = local_41 + 1;
        } while (local_41 != 5);
        local_41 = 1;
        do {
          pbVar1 = local_a8 + (ulonglong)local_41 * 4 + 0x50;
          pbVar1[0] = 0xff;
          pbVar1[1] = 0xff;
          pbVar1[2] = 0xff;
          pbVar1[3] = 0xff;
          local_41 = local_41 + 1;
        } while (local_41 != 5);
        *(undefined4 *)(local_a8 + 4) = local_74;
        *(undefined4 *)(local_a8 + 8) = local_78;
        *(undefined4 *)(local_a8 + 0x54) = local_7c;
        *(undefined4 *)(local_a8 + 0x58) = local_80;
        local_a8[0xa4] = 0;
        local_a8[0xa5] = 0;
        local_41 = 5;
        local_40 = local_a8;
      }
      else {
        if (uVar10 != 0x43) goto LAB_01443afa;
        *local_40 = 0xe;
        FUN_01442050(local_40,local_68,param_2);
      }
    }
    else if (uVar10 < 0x74) {
      if (uVar10 < 0x69) {
        if (uVar10 != 0x68) {
          if (uVar10 < 0x5d) {
            if (uVar10 == 0x56) goto LAB_0144301b;
            if (uVar10 - 0x57 < 2) goto LAB_01443291;
            if (uVar10 - 0x59 < 4) goto LAB_01443335;
            goto LAB_01443afa;
          }
          if (uVar10 - 0x5d < 2) {
LAB_014433d9:
            lVar9 = FUN_01cfd6a0(local_68);
            local_40[0xa5] = **(byte **)(lVar9 + 0x26);
            if (local_40[0xa5] != 2) {
              *(longlong **)(param_2 + 0xb20) = local_68;
              FUN_00ef4260(7,param_2);
              break;
            }
            FUN_01440d10(local_40,local_68,param_2);
          }
          else {
            if (uVar10 != 0x62) {
              if (uVar10 - 0x65 < 2) goto LAB_0144347a;
              goto LAB_01443afa;
            }
LAB_0144306d:
            (**(code **)(*local_68 + 0x288))(local_68,&local_260);
            FUN_00416910(local_248,local_260,0xff);
            FUN_00415020(local_58,local_248,0x14);
            if (*PTR_DAT_020052b8 == '\0') {
              *(undefined1 *)(param_2 + 0xb1) = 1;
            }
          }
        }
      }
      else if (uVar10 < 0x6f) {
        if (uVar10 == 0x6e) goto LAB_01443200;
        if (uVar10 != 0x6a) {
          if (uVar10 == 0x6b) goto LAB_0144315d;
          if (uVar10 == 0x6d) goto LAB_014431c9;
          goto LAB_01443afa;
        }
        local_74 = *(undefined4 *)(local_40 + 8);
        local_78 = *(undefined4 *)(local_40 + 4);
        local_7c = *(undefined4 *)(local_40 + 0x58);
        local_80 = *(undefined4 *)(local_40 + 0x54);
        local_40[0xc] = 0;
        local_40[0xd] = 0;
        local_40[0xe] = 0;
        local_40[0xf] = 0;
        local_40[0x10] = 0;
        local_40[0x11] = 0;
        local_40[0x12] = 0;
        local_40[0x13] = 0;
        local_40[0x5c] = 0xff;
        local_40[0x5d] = 0xff;
        local_40[0x5e] = 0xff;
        local_40[0x5f] = 0xff;
        local_40[0x60] = 0xff;
        local_40[0x61] = 0xff;
        local_40[0x62] = 0xff;
        local_40[99] = 0xff;
        *local_40 = 5;
        local_2b8 = &local_82;
        local_2b0 = &local_83;
        pcVar12 = (char *)FUN_01cfde70(local_68,2,0,&local_81);
        if ((byte)(*pcVar12 - 3U) < 2) {
          uVar11 = FUN_004095c0(0xb8);
          *(undefined8 *)(local_40 + 0xb0) = uVar11;
          if (*(longlong *)(local_40 + 0xb0) == 0) {
            FUN_00ef4260(1,param_2);
            goto LAB_0144457a;
          }
          local_b0 = *(byte **)(local_40 + 0xb0);
          *local_b0 = 6;
          local_b0[0xa8] = 0;
          local_b0[0xa9] = 0;
          local_b0[0xaa] = 0;
          local_b0[0xab] = 0;
          local_b0[0xac] = 0;
          local_b0[0xad] = 0;
          local_b0[0xae] = 0;
          local_b0[0xaf] = 0;
          local_b0[0xb0] = 0;
          local_b0[0xb1] = 0;
          local_b0[0xb2] = 0;
          local_b0[0xb3] = 0;
          local_b0[0xb4] = 0;
          local_b0[0xb5] = 0;
          local_b0[0xb6] = 0;
          local_b0[0xb7] = 0;
          local_41 = 1;
          do {
            pbVar1 = local_b0 + (ulonglong)local_41 * 4;
            pbVar1[0] = 0;
            pbVar1[1] = 0;
            pbVar1[2] = 0;
            pbVar1[3] = 0;
            local_41 = local_41 + 1;
          } while (local_41 != 5);
          local_41 = 1;
          do {
            pbVar1 = local_b0 + (ulonglong)local_41 * 4 + 0x50;
            pbVar1[0] = 0xff;
            pbVar1[1] = 0xff;
            pbVar1[2] = 0xff;
            pbVar1[3] = 0xff;
            local_41 = local_41 + 1;
          } while (local_41 != 5);
          *(undefined4 *)(local_b0 + 4) = local_74;
          *(undefined4 *)(local_b0 + 8) = local_78;
          *(undefined4 *)(local_b0 + 0x54) = local_7c;
          *(undefined4 *)(local_b0 + 0x58) = local_80;
          local_b0[0xa4] = 0;
          local_b0[0xa5] = 0;
          local_41 = 5;
          local_40 = local_b0;
        }
      }
      else if (uVar10 == 0x6f) {
LAB_01443451:
        *local_40 = 9;
        FUN_01441110(local_40,local_68,param_2);
      }
      else {
        if (1 < uVar10 - 0x72) goto LAB_01443afa;
LAB_01443291:
        if (*local_40 == 0x72) {
          *local_40 = 0x18;
        }
        if (*local_40 == 0x73) {
          *local_40 = 0x19;
        }
        lVar9 = FUN_01cfd6a0(local_68);
        local_40[0xa5] = **(byte **)(lVar9 + 0x26);
        if (local_40[0xa5] == 3) {
          FUN_01440d10(local_40,local_68,param_2);
        }
        else {
          *(longlong **)(param_2 + 0xb20) = local_68;
          FUN_00ef4260(7,param_2);
        }
      }
    }
    else {
      if (0xd2 < uVar10) {
        if (uVar10 < 0xdd) {
          if (uVar10 == 0xdc) goto LAB_0144315d;
          if (uVar10 == 0xd4) goto LAB_014431c9;
          if (uVar10 == 0xd6) goto LAB_01443200;
          if (uVar10 - 0xd9 < 2) goto LAB_014430d7;
        }
        else {
          if (uVar10 == 0xde) {
LAB_014431c9:
            *local_40 = 10;
            FUN_014419c0(&local_40,local_68,param_2);
            *(undefined1 *)(param_2 + 0xb2) = 0;
            goto LAB_01443b22;
          }
          if (uVar10 == 0xe0) {
LAB_01443200:
            *local_40 = 0xb;
            FUN_01441650(&local_40,local_68,param_2);
            *(undefined1 *)(param_2 + 0xb2) = 0;
            goto LAB_01443b22;
          }
        }
LAB_01443afa:
        *(longlong **)(param_2 + 0xb20) = local_68;
        FUN_00ef4260(7,param_2);
        goto LAB_0144457a;
      }
      if (uVar10 != 0xd2) {
        if (200 < uVar10) {
          if (uVar10 != 0xca) {
            if (uVar10 == 0xcc) goto LAB_01443200;
            goto LAB_01443afa;
          }
          goto LAB_014431c9;
        }
        if (uVar10 != 200) {
          if (uVar10 - 0x74 < 2) {
LAB_01443335:
            if (*local_40 == 0x74) {
              *local_40 = 0x1a;
            }
            if (*local_40 == 0x75) {
              *local_40 = 0x1b;
            }
            lVar9 = FUN_01cfd6a0(local_68);
            local_40[0xa5] = **(byte **)(lVar9 + 0x26);
            if (local_40[0xa5] == 8) {
              FUN_01440d10(local_40,local_68,param_2);
            }
            else {
              *(longlong **)(param_2 + 0xb20) = local_68;
              FUN_00ef4260(7,param_2);
            }
          }
          else {
            if (uVar10 == 0x77) goto LAB_0144301b;
            if (uVar10 != 0x96) goto LAB_01443afa;
          }
          goto LAB_01443b22;
        }
      }
LAB_0144315d:
      bVar5 = *local_40 - 0x38;
      if (bVar5 < 0xa8) {
        bVar14 = ((byte)(&DAT_01444600)[(longlong)(ulonglong)bVar5 >> 3] >> ((ulonglong)bVar5 & 7) &
                 1) != 0;
      }
      else {
        bVar14 = false;
      }
      if (bVar14) {
        *local_40 = 9;
      }
      FUN_014407c0(local_40,local_68,param_2);
    }
LAB_01443b22:
    FUN_01995800(*(undefined8 *)(param_2 + 0xe78),0,1);
    local_68 = (longlong *)FUN_01995660(*(undefined8 *)(param_2 + 0xe78),0);
  }
  local_40 = *(byte **)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(*(longlong *)(param_2 + 8) + 0xb0);
  FUN_004095f0(local_40);
  if (*PTR_DAT_020052b8 == '\0') {
    local_2b8 = &local_59;
    cVar4 = FUN_016f30d0(*(undefined8 *)(param_2 + 0xe78),param_1,param_2 + 0xe40,param_2 + 0xe68);
    if (cVar4 != '\0') {
      if (local_59 == '\0') {
        if (*(char *)(param_2 + 0xe40) == '\0') {
          FUN_00ef4260(5,param_2);
        }
        else {
          FUN_00ef4260(0x13,param_2);
        }
      }
      else {
        FUN_00ef4260(0x11,param_2);
      }
      goto LAB_0144457a;
    }
    *(undefined4 *)(param_2 + 0xe70) = *(undefined4 *)(*(longlong *)(param_2 + 0xe68) + 0x10);
    if (*(int *)(*(longlong *)(param_2 + 0xe68) + 0x10) <= (int)param_4) {
      local_31 = 0;
      goto LAB_0144457a;
    }
    if ((param_1 == '\0') || (*(char *)(param_2 + 0xe40) == '\0')) {
      *(undefined1 *)(param_2 + 0x50) = 0;
      *(undefined1 *)(param_2 + 0x51) = 0;
      *(undefined1 *)(param_2 + 0x52) = 0;
      *(undefined1 *)(param_2 + 0x53) = 0;
      *(undefined1 *)(param_2 + 0x54) = 1;
    }
    else {
      *(undefined1 *)(param_2 + 0x50) = *(undefined1 *)(param_2 + 0xe54);
      uVar6 = (**(code **)(**(longlong **)(param_2 + 0xe60) + 0x220))
                        (*(longlong **)(param_2 + 0xe60),0);
      *(undefined1 *)(param_2 + 0x51) = uVar6;
      *(undefined1 *)(param_2 + 0x52) = *(undefined1 *)(param_2 + 0xe58);
      uVar6 = (**(code **)(**(longlong **)(param_2 + 0xe60) + 0x220))
                        (*(longlong **)(param_2 + 0xe60),1);
      *(undefined1 *)(param_2 + 0x53) = uVar6;
      uVar10 = (ulonglong)*(byte *)(param_2 + 0xe40);
      if (uVar10 < 5) {
        if (uVar10 - 1 < 2) {
          *(undefined1 *)(param_2 + 0x54) = 1;
        }
        else if (uVar10 - 3 < 2) {
LAB_01443d7e:
          *(undefined1 *)(param_2 + 0x54) = 1;
        }
      }
      else {
        if (1 < uVar10 - 5) {
          if (uVar10 == 7) goto LAB_01443d7e;
          if (uVar10 != 8) goto LAB_01443da3;
        }
        *(undefined1 *)(param_2 + 0x54) = 0;
      }
LAB_01443da3:
      if (*(char *)(param_2 + 0xe40) != '\0') {
        FUN_01442240(*(undefined1 *)(param_2 + 0x50),*(undefined1 *)(param_2 + 0x52),param_2);
      }
    }
    local_c8 = *(longlong *)(param_2 + 0xe68);
    if (*(uint *)(local_c8 + 0x10) <= param_4) {
      FUN_00594f90();
    }
    lVar9 = (longlong)(int)param_4;
    *(undefined1 *)(param_2 + 0x60) =
         *(undefined1 *)(*(longlong *)(*(longlong *)(local_c8 + 8) + lVar9 * 8) + 4);
    local_d0 = *(longlong *)(param_2 + 0xe68);
    if (*(uint *)(local_d0 + 0x10) <= param_4) {
      FUN_00594f90();
    }
    plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(local_d0 + 8) + lVar9 * 8) + 0x18);
    uVar6 = (**(code **)(*plVar2 + 0x220))(plVar2,0);
    *(undefined1 *)(param_2 + 0x61) = uVar6;
    local_d8 = *(longlong *)(param_2 + 0xe68);
    if (*(uint *)(local_d8 + 0x10) <= param_4) {
      FUN_00594f90();
    }
    *(undefined1 *)(param_2 + 0x62) =
         *(undefined1 *)(*(longlong *)(*(longlong *)(local_d8 + 8) + lVar9 * 8) + 8);
    local_e0 = *(longlong *)(param_2 + 0xe68);
    if (*(uint *)(local_e0 + 0x10) <= param_4) {
      FUN_00594f90();
    }
    plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(local_e0 + 8) + lVar9 * 8) + 0x18);
    uVar6 = (**(code **)(*plVar2 + 0x220))(plVar2,1);
    *(undefined1 *)(param_2 + 99) = uVar6;
    local_e8 = *(longlong *)(param_2 + 0xe68);
    if (*(uint *)(local_e8 + 0x10) <= param_4) {
      FUN_00594f90();
    }
    plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(local_e8 + 8) + lVar9 * 8) + 0x18);
    (**(code **)(*plVar2 + 0x288))(plVar2,&local_270);
    FUN_00414ad0(param_2 + 0x68,local_270);
    iVar13 = FUN_004170c0(&DAT_01444624,*(undefined8 *)(param_2 + 0x68),1);
    if (0 < iVar13) {
      iVar13 = FUN_004170c0(&DAT_01444624,*(undefined8 *)(param_2 + 0x68),1);
      FUN_00416dc0(param_2 + 0x68,*(undefined8 *)(param_2 + 0x68),1,iVar13 + -1);
    }
    local_f0 = *(longlong *)(param_2 + 0x68);
    local_f4 = 0;
    if (local_f0 != 0) {
      local_f4 = *(int *)(local_f0 + -4);
    }
    if (1 < local_f4) {
      uVar7 = **(short **)(param_2 + 0x68) - 0x40;
      if (uVar7 < 0x40) {
        bVar14 = (1L << ((byte)uVar7 & 0x3f) & 0x7fffffe07fffffeU) != 0;
      }
      else {
        bVar14 = false;
      }
      if (bVar14) {
        local_100 = *(longlong *)(param_2 + 0x68);
        local_104 = 0;
        if (local_100 != 0) {
          local_104 = *(int *)(local_100 + -4);
        }
        FUN_00416780(&local_278,**(undefined2 **)(param_2 + 0x68));
        FUN_00416dc0(&local_280,*(undefined8 *)(param_2 + 0x68),2,local_104 + -1);
        local_2b8 = ",";
        local_2b0 = local_280;
        local_2a8 = &LAB_01444660;
        FUN_00416cd0(param_2 + 0x68,5,&DAT_0144463c,local_278);
      }
    }
    local_110 = *(longlong *)(param_2 + 0xe68);
    if (*(uint *)(local_110 + 0x10) <= param_4) {
      FUN_00594f90();
    }
    cVar4 = **(char **)(*(longlong *)(local_110 + 8) + lVar9 * 8);
    if (cVar4 == '\0') {
LAB_014441b5:
      *(undefined1 *)(param_2 + 100) = 1;
    }
    else if (cVar4 == '\x01') {
      *(undefined1 *)(param_2 + 100) = 1;
    }
    else if (cVar4 == '\x02') {
      *(undefined1 *)(param_2 + 100) = 0;
    }
    else if (cVar4 == '\x03') goto LAB_014441b5;
    if (*(char *)(param_2 + 0xb1) != '\0') {
      *(undefined1 *)(param_2 + 100) = 2;
    }
  }
  else {
    local_2b8 = &local_59;
    FUN_016f30d0(*(undefined8 *)(param_2 + 0xe78),param_1,param_2 + 0xe40,param_2 + 0xe68);
    *(undefined4 *)(param_2 + 0xe70) = *(undefined4 *)(*(longlong *)(param_2 + 0xe68) + 0x10);
    *(undefined1 *)(param_2 + 0x50) = *(undefined1 *)(param_2 + 0x70);
    *(undefined1 *)(param_2 + 0x51) = *(undefined1 *)(param_2 + 0x71);
    *(undefined1 *)(param_2 + 0x52) = *(undefined1 *)(param_2 + 0x72);
    *(undefined1 *)(param_2 + 0x53) = *(undefined1 *)(param_2 + 0x73);
    if (*(char *)(param_2 + 0x74) == '\0') {
      *(undefined1 *)(param_2 + 0x54) = 0;
    }
    else if (*(char *)(param_2 + 0x74) == '\x01') {
      *(undefined1 *)(param_2 + 0x54) = 1;
    }
    FUN_01442240(*(undefined1 *)(param_2 + 0x50),*(undefined1 *)(param_2 + 0x52),param_2);
    *(undefined1 *)(param_2 + 0x60) = *(undefined1 *)(param_2 + 0x80);
    *(undefined1 *)(param_2 + 0x61) = *(undefined1 *)(param_2 + 0x81);
    *(undefined1 *)(param_2 + 0x62) = *(undefined1 *)(param_2 + 0x82);
    *(undefined1 *)(param_2 + 99) = *(undefined1 *)(param_2 + 0x83);
    FUN_00414ad0(param_2 + 0x68,*(undefined8 *)(param_2 + 0x88));
    iVar13 = FUN_004170c0(&DAT_01444624,*(undefined8 *)(param_2 + 0x68),1);
    if (0 < iVar13) {
      iVar13 = FUN_004170c0(&DAT_01444624,*(undefined8 *)(param_2 + 0x68),1);
      FUN_00416dc0(param_2 + 0x68,*(undefined8 *)(param_2 + 0x68),1,iVar13 + -1);
    }
    local_118 = *(longlong *)(param_2 + 0x68);
    local_11c = 0;
    if (local_118 != 0) {
      local_11c = *(int *)(local_118 + -4);
    }
    if (1 < local_11c) {
      uVar7 = **(short **)(param_2 + 0x68) - 0x40;
      if (uVar7 < 0x40) {
        bVar14 = (1L << ((byte)uVar7 & 0x3f) & 0x7fffffe07fffffeU) != 0;
      }
      else {
        bVar14 = false;
      }
      if (bVar14) {
        local_128 = *(longlong *)(param_2 + 0x68);
        local_12c = 0;
        if (local_128 != 0) {
          local_12c = *(int *)(local_128 + -4);
        }
        FUN_00416780(&local_288,**(undefined2 **)(param_2 + 0x68));
        FUN_00416dc0(&local_290,*(undefined8 *)(param_2 + 0x68),2,local_12c + -1);
        local_2b8 = ",";
        local_2b0 = local_290;
        local_2a8 = &LAB_01444660;
        FUN_00416cd0(param_2 + 0x68,5,&DAT_0144463c,local_288);
      }
    }
    if (*(char *)(param_2 + 0x84) == '\0') {
      *(undefined1 *)(param_2 + 100) = 0;
    }
    else if (*(char *)(param_2 + 0x84) == '\x01') {
      *(undefined1 *)(param_2 + 100) = 1;
    }
    if (*(char *)(param_2 + 0xb1) != '\0') {
      *(undefined1 *)(param_2 + 100) = 2;
    }
  }
  *(undefined2 *)(param_2 + 0x12) = *(undefined2 *)(param_2 + 0x10);
LAB_0144457a:
  FUN_00414560(&local_290,9);
  FUN_00414480(&local_148);
  return local_31;
}

