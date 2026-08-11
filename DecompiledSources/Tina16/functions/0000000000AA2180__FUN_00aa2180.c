/* Ghidra address: 00aa2180 */
/* Ghidra symbol: FUN_00aa2180 */


longlong FUN_00aa2180(longlong param_1,char param_2,undefined8 param_3,longlong param_4,
                     undefined8 param_5)

{
  byte bVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  bool bVar11;
  longlong local_res8;
  undefined1 auStack_308 [32];
  longlong local_2e8;
  undefined8 local_2e0;
  undefined1 *local_2d8;
  longlong local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 *local_b0;
  int local_a0;
  int local_9c;
  ushort *local_98;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_48;
  char local_3d;
  int local_3c;
  undefined1 local_38 [4];
  int local_34;
  undefined8 local_30;
  
  local_b0 = auStack_308;
  local_2c8 = 0;
  local_2c0 = 0;
  uStack_2b8 = 0;
  uStack_2b0 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  uStack_298 = 0;
  local_290 = 0;
  uStack_288 = 0;
  uStack_280 = 0;
  local_278 = 0;
  uStack_270 = 0;
  uStack_268 = 0;
  local_260 = 0;
  uStack_258 = 0;
  uStack_250 = 0;
  local_248 = 0;
  uStack_240 = 0;
  uStack_238 = 0;
  local_230 = 0;
  uStack_228 = 0;
  uStack_220 = 0;
  local_218 = 0;
  uStack_210 = 0;
  uStack_208 = 0;
  local_200 = 0;
  uStack_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  local_1d0 = 0;
  uStack_1c8 = 0;
  uStack_1c0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  uStack_180 = 0;
  uStack_178 = 0;
  local_170 = 0;
  uStack_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  local_140 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  local_res8 = param_1;
  puVar3 = auStack_308;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar3 = local_b0;
  }
  local_b0 = puVar3;
  local_2e0 = param_5;
  local_2e8 = param_4;
  uVar7 = FUN_00aabb20(&PTR_FUN_00a8e9e8,1,local_res8,param_3);
  *(undefined8 *)(local_res8 + 0x560) = uVar7;
  local_48 = FUN_00a52700(&PTR_FUN_00a4ffc0,1,param_5);
  iVar10 = *(int *)(*(longlong *)(local_res8 + 0x560) + 0x178);
  local_30 = local_48;
  if (iVar10 == 0x1fffffff) {
    if (*(char *)(*(longlong *)(local_res8 + 0x560) + 0x124) == '\0') {
      FUN_00468530(&local_f8,0x1fffffff,0xfffffffffffffffc);
      FUN_00a559d0(local_30,&DAT_00aa3060,&local_f8);
    }
    else {
      FUN_00468530(&local_e0,0x808080,0xfffffffffffffffc);
      FUN_00a559d0(local_30,&DAT_00aa3060,&local_e0);
    }
  }
  else {
    FUN_00468530(&local_c8,iVar10,0xfffffffffffffffc);
    FUN_00a559d0(local_30,&DAT_00aa3060,&local_c8);
  }
  FUN_00468530(&local_110,*(undefined4 *)(*(longlong *)(local_res8 + 0x560) + 0x138),
               0xfffffffffffffffc);
  FUN_00a55820(local_30,0x2c,&local_110);
  FUN_00468530(&local_128,*(undefined4 *)(*(longlong *)(local_res8 + 0x560) + 0x13c),
               0xfffffffffffffffc);
  FUN_00a55820(local_30,0x2d,&local_128);
  if (*(char *)(*(longlong *)(local_res8 + 0x560) + 0x124) != '\0') {
    FUN_00468530(&local_140,*(undefined4 *)(*(longlong *)(local_res8 + 0x560) + 0x120),
                 0xfffffffffffffffc);
    FUN_00a559d0(local_30,&DAT_00aa3069,&local_140);
  }
  lVar2 = *(longlong *)(local_res8 + 0x560);
  uVar9 = (ulonglong)*(byte *)(lVar2 + 0x125);
  if (uVar9 < 5) {
    if (uVar9 == 4) {
      FUN_00468530(&local_230,1,1);
      FUN_00a55820(local_30,0x25,&local_230);
      FUN_00468530(&local_248,0,1);
      FUN_00a559d0(local_30,&DAT_00aa309f,&local_248);
    }
    else if (uVar9 == 1) {
      FUN_00468530(&local_1d0,1,1);
      FUN_00a55820(local_30,0x22,&local_1d0);
      FUN_00468530(&local_1e8,0,1);
      FUN_00a559d0(local_30,&DAT_00aa308d,&local_1e8);
    }
    else if (uVar9 == 2) {
      FUN_00468530(&local_200,1,1);
      FUN_00a55820(local_30,0x24,&local_200);
      FUN_00468530(&local_218,0,1);
      FUN_00a559d0(local_30,&DAT_00aa3096,&local_218);
    }
    else {
      if (uVar9 != 3) goto LAB_00aa2812;
      FUN_00468530(&local_170,1,1);
      FUN_00a559d0(local_30,&DAT_00aa307b,&local_170);
      FUN_00468530(&local_188,0,1);
      FUN_00a559d0(local_30,&DAT_00aa3084,&local_188);
    }
  }
  else if (uVar9 == 5) {
    FUN_00468530(&local_260,1,1);
    FUN_00a55820(local_30,0x23,&local_260);
    FUN_00468530(&local_278,0,1);
    FUN_00a559d0(local_30,&DAT_00aa30a8,&local_278);
  }
  else if (uVar9 == 6) {
    FUN_00468530(&local_1a0,0,1);
    FUN_00a559d0(local_30,&DAT_00aa307b,&local_1a0);
    FUN_00468530(&local_1b8,1,1);
    FUN_00a559d0(local_30,&DAT_00aa3084,&local_1b8);
  }
  else if (uVar9 - 7 < 2) {
    FUN_00468530(&local_158,3,1);
    FUN_00a559d0(local_30,&DAT_00aa3072,&local_158);
  }
  else {
LAB_00aa2812:
    if (*(char *)(lVar2 + 0x124) != '\0') {
      if (*(int *)(lVar2 + 0x120) < 1) {
        FUN_00468530(&local_2a8,0,1);
        FUN_00a559d0(local_30,&DAT_00aa3072,&local_2a8);
      }
      else {
        FUN_00468530(&local_290,3,1);
        FUN_00a559d0(local_30,&DAT_00aa3072,&local_290);
      }
    }
  }
  local_2e8 = local_48;
  FUN_00a9c430(local_res8,0,param_3,param_4);
  FUN_00410f20(local_30);
  *(undefined1 *)(local_res8 + 0x582) = 0;
  iVar10 = *(int *)(param_4 + 0x10);
  local_34 = 0;
  if (-1 < iVar10 + -1) {
    do {
      local_58 = FUN_004aeac0(param_4,local_34);
      bVar1 = *(byte *)(local_58 + 8);
      if (bVar1 < 0x1f) {
        if (bVar1 == 0x1e) {
          local_98 = (ushort *)(local_res8 + 0x398);
          if (*local_98 < 0x20) {
            bVar11 = (1 << ((byte)*local_98 & 0x1f) & 0x1f000cU) != 0;
          }
          else {
            bVar11 = false;
          }
          if (bVar11) {
            FUN_00468530(&local_2c0,0xff439eb2,0xfffffffffffffffc);
            cVar5 = FUN_0046f320(local_res8 + 0x398,&local_2c0);
            if (cVar5 != '\0') {
              FUN_00468a10(local_res8 + 0x398,*(undefined8 *)(local_58 + 0x28));
            }
          }
        }
        else if (bVar1 == 3) {
          local_60 = *(undefined8 *)(local_58 + 0x28);
          iVar6 = FUN_0043e420(local_60,L"CENTER");
          if (iVar6 == 0) {
            *(undefined1 *)(local_res8 + 0x582) = 2;
          }
          else {
            local_68 = *(undefined8 *)(local_58 + 0x28);
            iVar6 = FUN_0043e420(local_68,L"LEFT");
            if (iVar6 == 0) {
              if (*(char *)(local_res8 + 0x60) == '\0') {
                *(undefined1 *)(local_res8 + 0x60) = 5;
              }
            }
            else {
              local_70 = *(undefined8 *)(local_58 + 0x28);
              iVar6 = FUN_0043e420(local_70,L"RIGHT");
              if ((iVar6 == 0) && (*(char *)(local_res8 + 0x60) == '\0')) {
                *(undefined1 *)(local_res8 + 0x60) = 6;
              }
            }
          }
        }
        else if (bVar1 == 5) {
          if (*(longlong *)(local_res8 + 0x440) == 0) {
            local_78 = *(longlong *)(local_58 + 0x28);
            local_7c = 0;
            if (local_78 != 0) {
              local_7c = *(int *)(local_78 + -4);
            }
            if (0 < local_7c) {
              uVar7 = FUN_00a95230(&PTR_FUN_00a83768,1,*(undefined8 *)(local_res8 + 0xa8),
                                   *(undefined8 *)(local_58 + 0x28));
              *(undefined8 *)(local_res8 + 0x440) = uVar7;
              *(undefined1 *)(local_res8 + 0x4f0) = 6;
              *(undefined4 *)(local_res8 + 0x4f4) = 0;
              *(undefined1 *)(local_res8 + 0x4f8) = 1;
              *(undefined8 *)(local_res8 + 0x4fc) = *(undefined8 *)(local_res8 + 0x4f0);
              *(undefined4 *)(local_res8 + 0x504) = *(undefined4 *)(local_res8 + 0x4f8);
            }
          }
        }
        else if (bVar1 == 6) {
          uVar4 = FUN_00a602d0(*(undefined8 *)(local_58 + 0x28),0,local_res8 + 0x570);
          *(undefined1 *)(local_res8 + 0x574) = uVar4;
        }
      }
      else if (bVar1 == 0x21) {
        uVar8 = (int)*(uint *)(local_58 + 0x18) >> 0x1f;
        local_80 = (*(uint *)(local_58 + 0x18) ^ uVar8) - uVar8;
        local_84 = local_80;
        if (0x28 < local_80) {
          local_84 = 0x28;
        }
        *(int *)(local_res8 + 0x578) = local_84;
      }
      else if (bVar1 == 0x5d) {
        uVar8 = (int)*(uint *)(local_58 + 0x18) >> 0x1f;
        local_88 = (*(uint *)(local_58 + 0x18) ^ uVar8) - uVar8;
        local_8c = local_88;
        if (200 < local_88) {
          local_8c = 200;
        }
        *(int *)(local_res8 + 0x57c) = local_8c;
      }
      else if (bVar1 == 0x5e) {
        iVar6 = FUN_004170c0(&DAT_00aa310c,*(undefined8 *)(local_58 + 0x28),1);
        if (iVar6 < 1) {
          *(undefined4 *)(local_res8 + 0x568) = *(undefined4 *)(local_58 + 0x18);
        }
        else {
          iVar6 = *(int *)(local_58 + 0x18);
          if ((0 < iVar6) && (iVar6 < 0x65)) {
            *(int *)(local_res8 + 0x568) = iVar6 * 10;
          }
          *(undefined1 *)(local_res8 + 0x56c) = 1;
        }
      }
      local_34 = local_34 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  local_3c = *(int *)(*(longlong *)(local_res8 + 0x560) + 0x174);
  if (local_3c < 1) {
    local_3c = 3;
  }
  cVar5 = FUN_0046c390(local_res8 + 0x380);
  if (cVar5 != '\0') {
    FUN_00467e90(&local_2c8,local_res8 + 0x380);
    iVar10 = FUN_004170c0(&DAT_00aa310c,local_2c8,1);
    if (0 < iVar10) {
      local_3d = '\x01';
      goto LAB_00aa2d8f;
    }
  }
  local_3d = '\0';
LAB_00aa2d8f:
  local_2e8 = CONCAT44(local_2e8._4_4_,*(undefined4 *)(local_res8 + 0x48));
  local_2e0 = CONCAT44(local_2e0._4_4_,local_3c);
  local_2d8 = local_38;
  local_2d0 = local_res8 + 0x450;
  FUN_00a57400(local_res8 + 0xb0,100,0,*(undefined4 *)(local_res8 + 0x44));
  iVar10 = *(int *)(local_res8 + 0x4c8);
  if (0 < iVar10) {
    if (local_3d == '\0') {
      *(int *)(local_res8 + 0x568) = iVar10;
      iVar10 = (((iVar10 - *(int *)(local_res8 + 0x4a4)) - *(int *)(local_res8 + 0x49c)) -
               *(int *)(local_res8 + 0x494)) - *(int *)(local_res8 + 0x48c);
      *(int *)(local_res8 + 0x4c8) = iVar10;
      FUN_00468530(local_res8 + 0x380,iVar10,0xfffffffffffffffc);
      *(undefined1 *)(local_res8 + 0x56c) = 0;
    }
    else {
      *(undefined1 *)(local_res8 + 0x56c) = 1;
      local_9c = *(int *)(local_res8 + 0x4c8) * 10;
      local_a0 = local_9c;
      if (1000 < local_9c) {
        local_a0 = 1000;
      }
      *(int *)(local_res8 + 0x568) = local_a0;
    }
  }
  FUN_00a9ca20(local_res8);
  if (*(byte *)(local_res8 + 0x60) < 8) {
    bVar11 = ((int)CONCAT71((int7)((ulonglong)local_res8 >> 8),1) <<
              (*(byte *)(local_res8 + 0x60) & 0x1f) & 0x60U) != 0;
  }
  else {
    bVar11 = false;
  }
  *(bool *)(*(longlong *)(local_res8 + 0x560) + 0x126) = bVar11;
  if ((*(char *)(*(longlong *)(local_res8 + 0x560) + 0x126) != '\0') &&
     (*(int *)(local_res8 + 0x70) == 0)) {
    *(undefined4 *)(local_res8 + 0x70) = 1;
  }
  FUN_00414480(&local_2c8);
  FUN_00417840(&local_2c0,&DAT_004013d8,0x16);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

