/* Ghidra address: 00a39f60 */
/* Ghidra symbol: FUN_00a39f60 */


void FUN_00a39f60(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  byte *pbVar3;
  byte bVar4;
  char cVar5;
  short sVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  bool bVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 local_150;
  undefined4 local_148;
  undefined8 local_138;
  longlong local_130;
  undefined8 local_128;
  longlong local_120;
  longlong local_118;
  uint local_110;
  uint local_10c;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  uint local_f0;
  uint local_ec;
  char local_e5;
  int local_e4;
  int local_e0;
  byte local_d9;
  longlong local_d8;
  int local_cc;
  longlong local_c8;
  undefined8 local_c0;
  byte local_b1;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_a0 [2];
  longlong local_90;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined8 local_58;
  undefined8 local_50;
  
  local_a8 = 0;
  local_a0[0] = 0;
  local_58 = *param_3;
  local_50 = param_3[1];
  bVar14 = (int)local_50 != (int)local_58;
  local_138 = param_2;
  local_d8 = param_1;
  if (bVar14) {
    local_50._4_4_ = (int)(local_50 >> 0x20);
    local_58._4_4_ = (int)(local_58 >> 0x20);
    bVar14 = local_50._4_4_ != local_58._4_4_;
    if (bVar14) {
      FUN_00a39f40(auStack_188,&local_58);
      local_f0 = (int)local_50 - (int)local_58;
      local_ec = local_50._4_4_ - local_58._4_4_;
      local_118 = FUN_00a39e90(local_d8);
      if ((local_f0 == *(uint *)(local_118 + 0x488)) && (local_ec == *(uint *)(local_118 + 0x48c)))
      {
        local_e5 = '\0';
      }
      else {
        local_e5 = '\x01';
      }
      if (local_e5 == '\0') {
        dVar15 = 1.0;
        dVar16 = 1.0;
      }
      else {
        dVar15 = (double)local_f0 / (double)*(uint *)(local_118 + 0x488);
        dVar16 = (double)local_ec / (double)*(uint *)(local_118 + 0x48c);
      }
      FUN_0040d200(&local_84,0x2c,0);
      DAT_01e717e0._4_4_ = local_f0;
      DAT_01e717e8._0_4_ = -local_ec;
      local_84 = CONCAT44(local_f0,(undefined4)DAT_01e717e0);
      uStack_7c = CONCAT44(DAT_01e717e8._4_4_,(int)DAT_01e717e8);
      uStack_74 = DAT_01e717f0;
      uStack_6c = DAT_01e717f8;
      uStack_64 = DAT_01e71800;
      local_130 = thunk_FUN_04137b5f(0);
      if (local_130 == 0) {
        FUN_0041ddd0(local_a0,PTR_PTR_020018b8);
        FUN_00a39bd0(local_d8,&PTR_FUN_00a2cdc8,local_a0[0]);
      }
      local_168 = 0;
      local_160 = (ulonglong)local_160._4_4_ << 0x20;
      local_120 = thunk_FUN_041c0f30(local_130,&local_84,0,&local_90);
      if ((local_120 == 0) || (local_90 == 0)) {
        if (local_120 != 0) {
          thunk_FUN_0416f828(local_120);
        }
        thunk_FUN_041a2fd8(local_130);
        FUN_0041ddd0(&local_a8,PTR_PTR_020018b8);
        FUN_00a39bd0(local_d8,&PTR_FUN_00a2cdc8,local_a8);
      }
      local_128 = thunk_FUN_041a19a1(local_130);
      local_168 = CONCAT44(local_168._4_4_,local_ec);
      local_160 = local_138;
      local_158 = (int)local_58;
      local_150 = local_58._4_4_;
      local_148 = 0xcc0020;
      thunk_FUN_0415fcd2(local_130,0,0,local_f0);
      local_cc = *(int *)(local_118 + 0x488);
      local_110 = (uStack_7c._6_2_ * local_f0 + 0x1f & 0xffffffe0) / 8;
      local_10c = ((uint)*(ushort *)(local_118 + 0x52) * *(int *)(local_118 + 0x488) + 0x1f &
                  0xffffffe0) / 8;
      local_f8 = local_90;
      local_b0 = *(longlong *)(local_118 + 0x480);
      uVar10 = (ulonglong)(*(int *)(local_118 + 0x498) * (*(int *)(local_118 + 0x48c) + -1));
      local_108 = *(longlong *)(local_118 + 0x478) + uVar10;
      sVar6 = *(short *)(local_118 + 0x52);
      local_100 = local_108;
      if (((sVar6 == 1) || (sVar6 == 4)) || (sVar6 == 8)) {
        if (*(char *)(local_118 + 0x491) == '\x04') {
          local_e0 = 1;
          uVar11 = local_ec;
          if (0 < (int)local_ec) {
            do {
              local_e4 = 0;
              uVar13 = local_f0;
              if (-1 < (int)(local_f0 - 1)) {
                do {
                  iVar8 = local_e4;
                  if (local_e5 != '\0') {
                    iVar8 = FUN_0040c840((double)local_e4 / dVar15,uVar10);
                  }
                  cVar5 = *(char *)(local_118 + 0x490);
                  if (cVar5 == '\x01') {
                    lVar12 = (longlong)iVar8;
                    iVar8 = iVar8 / 8;
                    local_d9 = -(*(byte *)(local_108 + iVar8) >>
                                 (7U - (char)((longlong)
                                              ((ulonglong)(uint)((int)(lVar12 % 8) >> 0x1f) << 0x20
                                              | lVar12 % 8 & 0xffffffffU) % 8) & 0x1f) & 1);
                  }
                  else if ((cVar5 == '\x02') || (cVar5 == '\x04')) {
                    lVar12 = (longlong)iVar8;
                    iVar8 = iVar8 / 2;
                    local_d9 = (*(byte *)(local_108 + iVar8) >>
                                (('\x01' - (char)((longlong)
                                                  ((ulonglong)(uint)((int)(lVar12 % 4) >> 0x1f) <<
                                                   0x20 | lVar12 % 4 & 0xffffffffU) % 2)) * '\x04' &
                                0x1fU) & 0xf) * '\x11';
                  }
                  else {
                    local_d9 = *(byte *)(local_108 + iVar8);
                  }
                  pbVar3 = (byte *)(local_f8 + (longlong)local_e4 * 4);
                  lVar12 = (longlong)iVar8;
                  pbVar3[2] = (byte)((ulonglong)
                                     ((uint)local_d9 * (uint)*(byte *)(local_b0 + lVar12) +
                                      (uint)pbVar3[2] * (uint)(byte)~*(byte *)(local_b0 + lVar12) +
                                     0x7f) / 0xff);
                  pbVar3[1] = (byte)((ulonglong)
                                     ((uint)local_d9 * (uint)*(byte *)(local_b0 + lVar12) +
                                      (uint)pbVar3[1] * (uint)(byte)~*(byte *)(local_b0 + lVar12) +
                                     0x7f) / 0xff);
                  *pbVar3 = (byte)((ulonglong)
                                   ((uint)local_d9 * (uint)*(byte *)(local_b0 + lVar12) +
                                    (uint)*pbVar3 * (uint)(byte)~*(byte *)(local_b0 + lVar12) + 0x7f
                                   ) / 0xff);
                  uVar7 = (ulonglong)
                          ((uint)(byte)~pbVar3[3] * (uint)(byte)~*(byte *)(local_b0 + lVar12) + 0x7f
                          );
                  uVar10 = uVar7 % 0xff;
                  pbVar3[3] = ~(byte)(uVar7 / 0xff);
                  local_e4 = local_e4 + 1;
                  uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
              }
              local_f8 = local_f8 + (int)local_110;
              iVar8 = local_e0;
              if (local_e5 != '\0') {
                iVar8 = FUN_0040c840((double)local_e0 / dVar16,uVar10);
              }
              local_108 = local_100 - (int)(local_10c * iVar8);
              uVar10 = (ulonglong)(local_cc * iVar8);
              local_b0 = *(longlong *)(local_118 + 0x480) + uVar10;
              local_e0 = local_e0 + 1;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
        }
        else {
          local_c8 = FUN_00a33e30(*(undefined8 *)(local_d8 + 0x160),&PTR_FUN_00a31a70);
          local_c0 = FUN_00a33e30(*(undefined8 *)(local_d8 + 0x160),&PTR_FUN_00a31730);
          local_e0 = 1;
          uVar11 = local_ec;
          if (0 < (int)local_ec) {
            do {
              local_e4 = 0;
              uVar13 = local_f0;
              if (-1 < (int)(local_f0 - 1)) {
                do {
                  iVar8 = local_e4;
                  if (local_e5 != '\0') {
                    iVar8 = FUN_0040c840((double)local_e4 / dVar15);
                  }
                  cVar5 = *(char *)(local_118 + 0x490);
                  if (cVar5 == '\x01') {
                    local_d9 = *(byte *)(local_108 + iVar8 / 8) >>
                               (7U - (char)((longlong)
                                            ((ulonglong)(uint)((int)((longlong)iVar8 % 8) >> 0x1f)
                                             << 0x20 | (longlong)iVar8 % 8 & 0xffffffffU) % 8) &
                               0x1f) & 1;
                  }
                  else if ((cVar5 == '\x02') || (cVar5 == '\x04')) {
                    local_d9 = *(byte *)(local_108 + iVar8 / 2) >>
                               (('\x01' - (char)((longlong)
                                                 ((ulonglong)
                                                  (uint)((int)((longlong)iVar8 % 4) >> 0x1f) << 0x20
                                                 | (longlong)iVar8 % 4 & 0xffffffffU) % 2)) * '\x04'
                               & 0x1fU) & 0xf;
                  }
                  else {
                    local_d9 = *(byte *)(local_108 + iVar8);
                  }
                  pbVar3 = (byte *)(local_f8 + (longlong)local_e4 * 4);
                  local_b1 = *(byte *)(local_c8 + 0x29 + (ulonglong)local_d9);
                  uVar9 = FUN_00a38d30(local_c0,local_d9);
                  iVar8 = 0xff - (uint)local_b1;
                  pbVar3[2] = (byte)((uVar9 >> 0x10 & 0xff) * (uint)local_b1 +
                                     (uint)pbVar3[2] * iVar8 + 0xff >> 8);
                  uVar9 = FUN_00a38d30(local_c0,local_d9);
                  pbVar3[1] = (byte)((uVar9 >> 8 & 0xff) * (uint)local_b1 + (uint)pbVar3[1] * iVar8
                                     + 0xff >> 8);
                  uVar9 = FUN_00a38d30(local_c0,local_d9);
                  *pbVar3 = (byte)((uVar9 & 0xff) * (uint)local_b1 + (uint)*pbVar3 * iVar8 + 0xff >>
                                  8);
                  pbVar3[3] = local_b1;
                  local_e4 = local_e4 + 1;
                  uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
              }
              local_f8 = local_f8 + (int)local_110;
              iVar8 = local_e0;
              if (local_e5 != '\0') {
                iVar8 = FUN_0040c840((double)local_e0 / dVar16);
              }
              local_108 = local_100 - (int)(local_10c * iVar8);
              local_e0 = local_e0 + 1;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
        }
      }
      else if ((sVar6 == 0x18) && (local_e0 = 1, uVar11 = local_ec, 0 < (int)local_ec)) {
        do {
          local_e4 = 0;
          uVar13 = local_f0;
          if (-1 < (int)(local_f0 - 1)) {
            do {
              iVar8 = local_e4;
              if (local_e5 != '\0') {
                iVar8 = FUN_0040c840((double)local_e4 / dVar15);
              }
              lVar12 = (longlong)iVar8;
              bVar4 = *(byte *)(local_b0 + lVar12);
              if (bVar4 != 0) {
                if (bVar4 == 0xff) {
                  puVar1 = (undefined2 *)(local_f8 + (longlong)local_e4 * 4);
                  puVar2 = (undefined2 *)(local_108 + iVar8 * 3);
                  *puVar1 = *puVar2;
                  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
                  *(undefined1 *)(local_f8 + 3 + (longlong)local_e4 * 4) = 0xff;
                }
                else {
                  pbVar3 = (byte *)(local_f8 + (longlong)local_e4 * 4);
                  pbVar3[2] = (byte)((ulonglong)
                                     ((uint)*(byte *)(local_108 + (iVar8 * 3 + 2)) * (uint)bVar4 +
                                      (uint)pbVar3[2] * (uint)(byte)~bVar4 + 0x7f) / 0xff);
                  pbVar3[1] = (byte)((ulonglong)
                                     ((uint)*(byte *)(local_108 + (iVar8 * 3 + 1)) *
                                      (uint)*(byte *)(local_b0 + lVar12) +
                                      (uint)pbVar3[1] * (uint)(byte)~*(byte *)(local_b0 + lVar12) +
                                     0x7f) / 0xff);
                  *pbVar3 = (byte)((ulonglong)
                                   ((uint)*(byte *)(local_108 + iVar8 * 3) *
                                    (uint)*(byte *)(local_b0 + lVar12) +
                                    (uint)*pbVar3 * (uint)(byte)~*(byte *)(local_b0 + lVar12) + 0x7f
                                   ) / 0xff);
                  pbVar3[3] = ~(byte)((ulonglong)
                                      ((uint)(byte)~pbVar3[3] *
                                       (uint)(byte)~*(byte *)(local_b0 + lVar12) + 0x7f) / 0xff);
                }
              }
              local_e4 = local_e4 + 1;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          local_f8 = local_f8 + (int)local_110;
          iVar8 = local_e0;
          if (local_e5 != '\0') {
            iVar8 = FUN_0040c840((double)local_e0 / dVar16);
          }
          local_108 = local_100 - (int)(local_10c * iVar8);
          local_b0 = *(longlong *)(local_118 + 0x480) + (longlong)(local_cc * iVar8);
          local_e0 = local_e0 + 1;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      local_168 = CONCAT44(local_168._4_4_,local_ec);
      local_160 = local_130;
      local_158 = 0;
      local_150 = 0;
      local_148 = 0xcc0020;
      thunk_FUN_0415fcd2(local_138,local_58 & 0xffffffff,local_58._4_4_,local_f0);
      thunk_FUN_041a19a1(local_130,local_128);
      thunk_FUN_0416f828(local_120);
      thunk_FUN_041a2fd8(local_130);
    }
  }
  FUN_00414560(&local_a8,2);
  return;
}

