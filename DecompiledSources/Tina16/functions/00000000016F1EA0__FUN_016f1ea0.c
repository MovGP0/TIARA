/* Ghidra address: 016f1ea0 */
/* Ghidra symbol: FUN_016f1ea0 */


void FUN_016f1ea0(longlong param_1,undefined8 param_2,int *param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  char cVar3;
  byte *pbVar4;
  byte bVar5;
  uint uVar6;
  uint *puVar7;
  bool bVar8;
  undefined1 auStack_248 [32];
  uint local_228;
  char *local_220;
  ulonglong local_218;
  undefined8 local_210;
  longlong local_208;
  undefined1 *local_200;
  undefined1 *local_1f8;
  ulonglong local_1e8;
  ulonglong local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined1 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined1 *local_160;
  undefined4 local_144;
  char *local_140;
  longlong local_138;
  longlong local_130;
  uint local_124;
  longlong local_120;
  byte *local_118;
  uint local_10c;
  longlong local_108;
  longlong local_100;
  uint local_f4;
  longlong local_f0;
  byte *local_e8;
  uint local_dc;
  longlong local_d8;
  undefined1 *local_d0;
  uint local_c4;
  longlong local_c0;
  undefined1 *local_b8;
  uint local_ac;
  longlong local_a8;
  char *local_a0;
  byte *local_98;
  char *local_90;
  undefined8 local_88;
  undefined1 local_80 [5];
  undefined1 local_7b;
  char local_7a;
  char local_79;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  char local_3d;
  uint local_3c;
  undefined4 local_38;
  uint local_34;
  int local_30;
  int local_2c;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_160 = auStack_248;
  local_1e8 = 0;
  local_1e0 = 0;
  local_1d0 = 0;
  local_1d8 = 0;
  local_1c0 = 0;
  local_1c8 = 0;
  local_1a8 = 0;
  local_1b0 = 0;
  local_1b8 = 0;
  local_190 = 0;
  local_198 = 0;
  local_1a0 = 0;
  local_168 = 0;
  local_170 = 0;
  local_188 = 0;
  local_20[0] = 0;
  local_28 = 0;
  bVar5 = (byte)param_2;
  *(undefined1 *)(param_1 + 0x4c8) = 0;
  *param_3 = -1;
  local_98 = (byte *)(param_1 + 0x4c8);
  if (bVar5 < 0x10) {
    bVar8 = ((int)CONCAT62((int6)((ulonglong)param_2 >> 0x10),1) << (bVar5 & 0x1f) & 0x640U) != 0;
  }
  else {
    bVar8 = false;
  }
  puVar1 = auStack_248;
  if (!bVar8) {
    puVar7 = &local_34;
    local_228 = local_228 & 0xffffff00;
    local_220 = &local_7a;
    local_218 = CONCAT71(local_218._1_7_,bVar5);
    local_210 = *(undefined8 *)(param_1 + 0xa0);
    bVar2 = FUN_017c5f00(&local_30,puVar7,&local_2c,&local_58);
    *local_98 = bVar2;
    local_48 = (longlong *)FUN_0199aaf0(*(undefined8 *)(param_1 + 0xa0));
    local_50 = (longlong *)0x0;
    if (*local_98 == 0) {
      if (local_48 == (longlong *)0x0) {
        *local_98 = 0;
      }
      else {
        *(longlong **)(local_98 + 0x20) = local_48;
        local_30 = (**(code **)(*local_48 + 0x210))(local_48,0);
        local_34 = (**(code **)(*local_48 + 0x210))(local_48,1);
        (**(code **)(*local_48 + 0x1f0))(local_48,0,&local_5c,&local_60);
        (**(code **)(*local_48 + 0x1f0))(local_48,1,&local_64,&local_68);
        puVar7 = (uint *)(ulonglong)local_5c;
        local_228 = local_68;
        local_50 = (longlong *)
                   FUN_019960d0(*(undefined8 *)(param_1 + 0xa0),puVar7,local_60,local_64);
        if (local_50 != (longlong *)0x0) {
          (**(code **)(*local_50 + 0x1f0))(local_50,0,&local_6c,&local_70);
          puVar7 = (uint *)0x0;
          (**(code **)(*local_50 + 0x1f0))(local_50,1,&local_74,&local_78);
          if (((((local_5c != local_6c) || (local_60 != local_70)) || (local_64 != local_74)) ||
              (local_68 != local_78)) &&
             (((local_5c != local_74 || (local_60 != local_78)) ||
              ((local_64 != local_6c || (local_68 != local_70)))))) {
            local_50 = (longlong *)0x0;
          }
        }
        if ((-1 < local_30) && (-1 < (int)local_34)) {
          puVar7 = (uint *)(ulonglong)local_34;
          local_228 = CONCAT31(local_228._1_3_,bVar5);
          local_220 = *(char **)(param_1 + 0xa0);
          local_218 = *(ulonglong *)(param_1 + 0x2b0);
          local_210 = CONCAT44(local_210._4_4_,*(undefined4 *)(param_1 + 0x2d8));
          bVar2 = FUN_017c5a30(local_30,puVar7,local_50,&local_2c);
          *local_98 = bVar2;
        }
      }
      if ((*local_98 == 0) && ((local_7a == '\0' || ((bVar5 != 1 && (bVar5 != 0xb)))))) {
        puVar7 = (uint *)0x0;
        FUN_01b04ef0(0x105,0x1582,*(undefined8 *)(param_1 + 0x1310),0);
      }
    }
    else {
      *(undefined8 *)(local_98 + 0x20) = local_58;
      if ((local_48 != (longlong *)0x0) && (bVar5 != 1)) {
        puVar7 = (uint *)0x0;
        FUN_01b04ef0(0x101,0x157f,*(undefined8 *)(param_1 + 0x1310),0);
      }
    }
    bVar2 = *local_98;
    pbVar4 = local_98;
    if (bVar2 == 1) {
      if (*(longlong *)(param_1 + 0x2b0) == 0) {
        local_98[8] = 0;
        local_98[9] = 0;
        local_98[10] = 0;
        local_98[0xb] = 0;
        local_98[0xc] = 0;
        local_98[0xd] = 0;
        local_98[0xe] = 0;
        local_98[0xf] = 0;
      }
      else {
        puVar7 = (uint *)(longlong)local_2c;
        *(undefined8 *)(local_98 + 8) =
             *(undefined8 *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)puVar7 * 8);
      }
      local_98[0x10] = 3;
    }
    else if ((byte)(bVar2 - 2) < 5) {
      if (*(longlong *)(param_1 + 0x2b0) == 0) {
        local_98[8] = 0;
        local_98[9] = 0;
        local_98[10] = 0;
        local_98[0xb] = 0;
        local_98[0xc] = 0;
        local_98[0xd] = 0;
        local_98[0xe] = 0;
        local_98[0xf] = 0;
      }
      else {
        puVar7 = (uint *)(longlong)local_2c;
        *(undefined8 *)(local_98 + 8) =
             *(undefined8 *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)puVar7 * 8);
      }
      local_98[0x10] = 1;
      if (*local_98 < 8) {
        uVar6 = (int)CONCAT71((int7)((ulonglong)local_98 >> 8),1) << (*local_98 & 0x1f);
        pbVar4 = (byte *)(ulonglong)CONCAT31((int3)(uVar6 >> 8),(uVar6 & 0x18) != 0);
      }
      else {
        pbVar4 = (byte *)0x0;
      }
      if ((char)pbVar4 != '\0') {
        *(int *)(local_98 + 0x14) = local_30;
        *(uint *)(local_98 + 0x18) = local_34;
        pbVar4 = local_98;
      }
    }
    else if (bVar2 == 7) {
      *(int *)(local_98 + 0x14) = local_30;
      *(uint *)(local_98 + 0x18) = local_34;
    }
    else {
      pbVar4 = (byte *)0x0;
      if (bVar2 == 8) {
        if (*(longlong *)(param_1 + 0x2b0) == 0) {
          local_98[8] = 0;
          local_98[9] = 0;
          local_98[10] = 0;
          local_98[0xb] = 0;
          local_98[0xc] = 0;
          local_98[0xd] = 0;
          local_98[0xe] = 0;
          local_98[0xf] = 0;
          pbVar4 = local_98;
        }
        else {
          puVar7 = (uint *)(longlong)local_2c;
          *(undefined8 *)(local_98 + 8) =
               *(undefined8 *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)puVar7 * 8);
          pbVar4 = local_98;
        }
      }
    }
    if (bVar5 == 1) {
      if (*local_98 < 0x10) {
        uVar6 = (int)CONCAT62((int6)((ulonglong)puVar7 >> 0x10),1) << (*local_98 & 0x1f);
        puVar7 = (uint *)(ulonglong)uVar6;
        pbVar4 = (byte *)CONCAT71(3,(uVar6 & 0x380) != 0);
      }
      else {
        pbVar4 = (byte *)0x0;
      }
      if ((char)pbVar4 != '\0') {
        FUN_00de8980(&local_170,0x107,*(undefined8 *)(param_1 + 0x1310));
        (**(code **)(**(longlong **)(local_98 + 0x20) + 0x288))
                  (*(longlong **)(local_98 + 0x20),&local_188);
        local_180 = local_188;
        local_178 = 0x11;
        FUN_00442f70(&local_168,local_170,&local_180,0);
        puVar7 = (uint *)0x0;
        pbVar4 = (byte *)FUN_01b05080(local_168,0x1582,0);
      }
    }
    if ((byte)(bVar5 - 8) < 8) {
      bVar8 = ((int)CONCAT71((int7)((ulonglong)pbVar4 >> 8),1) << (bVar5 - 8 & 0x1f) & 0x11U) != 0;
    }
    else {
      bVar8 = false;
    }
    if (bVar8) {
      if (*local_98 < 8) {
        bVar8 = ((int)CONCAT71((int7)((ulonglong)local_98 >> 8),1) << (*local_98 & 0x1f) & 6U) != 0;
      }
      else {
        bVar8 = false;
      }
      if (bVar8) {
        FUN_00de8980(&local_198,0x107,*(undefined8 *)(param_1 + 0x1310));
        (**(code **)(**(longlong **)(local_98 + 0x20) + 0x288))
                  (*(longlong **)(local_98 + 0x20),&local_1a0);
        local_180 = local_1a0;
        local_178 = 0x11;
        FUN_00442f70(&local_190,local_198,&local_180,0);
        puVar7 = (uint *)0x0;
        FUN_01b05080(local_190,0x1582,0);
      }
    }
    puVar1 = local_160;
    if (bVar5 == 0xb) {
      if (*local_98 < 0x10) {
        bVar8 = ((int)CONCAT62((int6)((ulonglong)puVar7 >> 0x10),1) << (*local_98 & 0x1f) & 0x181U)
                != 0;
      }
      else {
        bVar8 = false;
      }
      if (!bVar8) {
        FUN_00de8980(&local_1b0,0x107,*(undefined8 *)(param_1 + 0x1310));
        (**(code **)(**(longlong **)(local_98 + 0x20) + 0x288))
                  (*(longlong **)(local_98 + 0x20),&local_1b8);
        local_180 = local_1b8;
        local_178 = 0x11;
        FUN_00442f70(&local_1a8,local_1b0,&local_180,0);
        FUN_01b05080(local_1a8,0x1582,0);
        puVar1 = local_160;
      }
    }
  }
  local_160 = puVar1;
  local_3d = '\x01';
  local_79 = '\x01';
  local_48 = (longlong *)FUN_0199ab60(*(undefined8 *)(param_1 + 0xa0));
  while (local_3d != '\0') {
    if (local_48 == (longlong *)0x0) {
      if (local_79 != '\0') {
        FUN_017c6a60(*(undefined8 *)(param_1 + 0xa0),local_80,&local_7b);
        local_79 = '\0';
      }
      local_228 = local_3c;
      local_220 = (char *)CONCAT71(local_220._1_7_,1);
      local_218 = local_218 & 0xffffffffffffff00;
      local_210 = CONCAT71(local_210._1_7_,bVar5);
      local_200 = local_80;
      local_1f8 = &local_7b;
      local_208 = param_1;
      local_3d = FUN_016f1ab0(0,local_30,local_34,local_38);
      if ((bVar5 == 8) && (local_3d == '\b')) {
        local_c0 = *(longlong *)(param_1 + 0x4f0);
        local_c4 = *(int *)(local_c0 + 0x10) - 1;
        if (*(uint *)(local_c0 + 0x10) <= local_c4) {
          FUN_00594f90();
        }
        local_d0 = *(undefined1 **)(*(longlong *)(local_c0 + 8) + (longlong)(int)local_c4 * 8);
        *local_d0 = 1;
        *param_3 = *(int *)(*(longlong *)(param_1 + 0x4f0) + 0x10) + -1;
      }
    }
    else {
      local_30 = (**(code **)(*local_48 + 0x210))(local_48,0);
      local_34 = (**(code **)(*local_48 + 0x210))(local_48);
      if ((-1 < local_30) && (-1 < (int)local_34)) {
        local_228 = local_3c;
        local_220 = (char *)((ulonglong)local_220 & 0xffffffffffffff00);
        local_218 = local_218 & 0xffffffffffffff00;
        local_210 = CONCAT71(local_210._1_7_,bVar5);
        local_200 = local_80;
        local_1f8 = &local_7b;
        local_208 = param_1;
        local_3d = FUN_016f1ab0(local_48,local_30,local_34,local_38);
        if ((bVar5 == 8) && (local_3d == '\b')) {
          local_a8 = *(longlong *)(param_1 + 0x4f0);
          local_ac = *(int *)(local_a8 + 0x10) - 1;
          if (*(uint *)(local_a8 + 0x10) <= local_ac) {
            FUN_00594f90();
          }
          local_b8 = *(undefined1 **)(*(longlong *)(local_a8 + 8) + (longlong)(int)local_ac * 8);
          *local_b8 = 1;
          *param_3 = *(int *)(*(longlong *)(param_1 + 0x4f0) + 0x10) + -1;
        }
      }
      local_48 = (longlong *)FUN_0199ab80();
    }
    if ((bVar5 == 0xc) && (0 < *(int *)(*(longlong *)(param_1 + 0x4f0) + 0x10))) {
      local_d8 = *(longlong *)(param_1 + 0x4f0);
      local_dc = *(uint *)(local_d8 + 0x10) - 1;
      if (*(uint *)(local_d8 + 0x10) <= local_dc) {
        FUN_00594f90();
      }
      local_e8 = *(byte **)(*(longlong *)(local_d8 + 8) + (longlong)(int)local_dc * 8);
      if (*local_e8 < 8) {
        bVar8 = ((int)CONCAT71((int7)((ulonglong)local_e8 >> 8),1) << (*local_e8 & 0x1f) & 0x18U) !=
                0;
      }
      else {
        bVar8 = false;
      }
      if (bVar8) {
        local_20[0] = 0;
        FUN_00de8980(local_20,0x108,*(undefined8 *)(param_1 + 0x1310));
        local_f0 = *(longlong *)(param_1 + 0x4f0);
        local_f4 = *(int *)(local_f0 + 0x10) - 1;
        if (*(uint *)(local_f0 + 0x10) <= local_f4) {
          FUN_00594f90();
        }
        local_100 = *(longlong *)(*(longlong *)(local_f0 + 8) + (longlong)(int)local_f4 * 8);
        (**(code **)(**(longlong **)(local_100 + 0x18) + 0x288))
                  (*(longlong **)(local_100 + 0x18),&local_1c8);
        local_180 = local_1c8;
        local_178 = 0x11;
        FUN_00442f70(&local_1c0,local_20[0],&local_180,0);
        FUN_01b05080(local_1c0,0x1583,0);
        FUN_00414480();
      }
    }
    if ((bVar5 == 10) && (0 < *(int *)(*(longlong *)(param_1 + 0x4f0) + 0x10))) {
      local_108 = *(longlong *)(param_1 + 0x4f0);
      local_10c = *(uint *)(local_108 + 0x10) - 1;
      if (*(uint *)(local_108 + 0x10) <= local_10c) {
        FUN_00594f90();
      }
      local_118 = *(byte **)(*(longlong *)(local_108 + 8) + (longlong)(int)local_10c * 8);
      if (*local_118 < 8) {
        bVar8 = ((int)CONCAT71((int7)((ulonglong)local_118 >> 8),1) << (*local_118 & 0x1f) & 0x21U)
                != 0;
      }
      else {
        bVar8 = false;
      }
      if (!bVar8) {
        local_28 = 0;
        FUN_00de8980(&local_28,0x108,*(undefined8 *)(param_1 + 0x1310));
        local_120 = *(longlong *)(param_1 + 0x4f0);
        local_124 = *(int *)(local_120 + 0x10) - 1;
        if (*(uint *)(local_120 + 0x10) <= local_124) {
          FUN_00594f90();
        }
        local_130 = *(longlong *)(*(longlong *)(local_120 + 8) + (longlong)(int)local_124 * 8);
        (**(code **)(**(longlong **)(local_130 + 0x18) + 0x288))
                  (*(longlong **)(local_130 + 0x18),&local_1d8);
        local_180 = local_1d8;
        local_178 = 0x11;
        FUN_00442f70(&local_1d0,local_28,&local_180,0);
        FUN_01b05080(local_1d0,0x1583,0);
        FUN_00414480();
      }
    }
  }
  if (bVar5 == 0xb) {
    FUN_016f1cb0(param_1 + 0x4c8,*(undefined8 *)(param_1 + 0x4f0),*(undefined8 *)(param_1 + 0x4f8));
  }
  local_3d = '\x01';
  local_79 = '\x01';
  do {
    if (local_79 != '\0') {
      FUN_017c7620(*(undefined8 *)(param_1 + 0xa0));
      local_79 = '\0';
    }
    local_3d = FUN_017c7630(*(undefined8 *)(param_1 + 0xa0),&local_30,&local_88);
    if (local_3d != '\0') {
      local_140 = (char *)FUN_004095c0(0x28);
      *local_140 = local_3d;
      *(int *)(local_140 + 4) = local_30;
      local_140[8] = '\0';
      local_140[9] = '\0';
      local_140[10] = '\0';
      local_140[0xb] = '\0';
      local_140[0x10] = '\0';
      local_140[0x11] = '\0';
      local_140[0x12] = '\0';
      local_140[0x13] = '\0';
      local_140[0x14] = '\0';
      local_140[0x15] = '\0';
      local_140[0x16] = '\0';
      local_140[0x17] = '\0';
      *(undefined8 *)(local_140 + 0x18) = local_88;
      local_140[0x20] = '\x01';
      local_140[1] = '\0';
      local_138 = *(longlong *)(param_1 + 0x4f0);
      local_a0 = local_140;
      local_90 = local_140;
      local_144 = FUN_00597e50(local_138 + 8,&local_140);
    }
  } while (local_3d != '\0');
  if (*(char *)(param_1 + 0xdf0) != '\0') {
    FUN_016f1590(param_1,bVar5);
  }
  *(undefined4 *)(param_1 + 0x691) = *(undefined4 *)(*(longlong *)(param_1 + 0x4f0) + 0x10);
  if ((bVar5 == 6) && (*(char *)(param_1 + 0x338) != '\0')) {
    cVar3 = FUN_015fc1d0(param_1 + 0xe81);
    if (cVar3 == '\0') {
      if (*(byte *)(param_1 + 0x108) < 8) {
        bVar8 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) <<
                 (*(byte *)(param_1 + 0x108) & 0x1f) & 3U) != 0;
      }
      else {
        bVar8 = false;
      }
      if (bVar8) {
        FUN_0041ddd0(&local_1e8,&PTR_PTR_016f0050);
        FUN_016fe230(local_1e8);
      }
      else {
        FUN_0041ddd0(&local_1e0,&PTR_PTR_016f0050);
        FUN_01b05000(local_1e0,0);
      }
    }
  }
  if (((*(int *)(param_1 + 0x691) == 0) && (*PTR_DAT_02002b78 == '\0')) && (bVar5 != 6)) {
    FUN_01b04ef0(0x106,0x1582,*(undefined8 *)(param_1 + 0x1310),0);
  }
  FUN_00414560(&local_1e8,0xd);
  FUN_00414560(&local_170,2);
  return;
}

