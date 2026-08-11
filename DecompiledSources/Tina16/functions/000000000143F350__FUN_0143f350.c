/* Ghidra address: 0143f350 */
/* Ghidra symbol: FUN_0143f350 */


int FUN_0143f350(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                longlong *param_5)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar9;
  uint uVar10;
  bool bVar11;
  undefined8 local_res20;
  undefined1 auStack_2e8 [32];
  longlong *local_2c8;
  longlong *local_2c0;
  int *local_2b8;
  byte *local_2b0;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined1 local_280 [256];
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined1 *local_f0;
  undefined8 local_e8;
  bool local_d9;
  undefined8 local_d8;
  bool local_c9;
  undefined8 local_c8;
  bool local_b9;
  undefined8 local_b8;
  byte *local_a8;
  undefined8 local_a0 [2];
  longlong *local_90;
  int local_80;
  int local_7c;
  uint local_78;
  int local_74;
  undefined8 local_70;
  char local_61;
  byte *local_60;
  longlong *local_58;
  int local_4c;
  undefined8 local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  undefined *puVar8;
  
  local_f0 = auStack_2e8;
  local_298 = 0;
  local_2a0 = 0;
  local_288 = 0;
  local_290 = 0;
  local_178 = 0;
  local_180 = 0;
  local_160 = 0;
  local_170 = 0;
  local_168 = 0;
  local_148 = 0;
  local_158 = 0;
  local_150 = 0;
  local_130 = 0;
  local_140 = 0;
  local_138 = 0;
  local_118 = 0;
  local_128 = 0;
  local_120 = 0;
  local_f8 = 0;
  local_108 = 0;
  local_110 = 0;
  local_100 = 0;
  local_a0[0] = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  local_4c = 0;
  local_48 = FUN_004b6930(&PTR_FUN_00478280,1);
  local_40 = (longlong *)0x0;
  iVar9 = *(int *)(param_1 + 0x10);
  local_74 = 0;
  if (-1 < iVar9 + -1) {
    do {
      local_58 = (longlong *)FUN_00b94e60(param_1,local_74);
      cVar2 = FUN_0198a580(local_58);
      if (cVar2 == '\x04') {
        local_30 = local_58;
        cVar2 = FUN_01d04d50(local_58);
        if ((cVar2 != '\0') && (*(longlong *)(local_30[0x35] + 8) != 0)) {
          local_40 = (longlong *)FUN_01d34560(&PTR_FUN_016a2078,1,10,10);
          local_2c8 = (longlong *)local_48;
          local_2c0 = local_30;
          FUN_0143ee70(auStack_2e8,*(undefined8 *)(local_30[0x35] + 0x58),local_40,
                       *(undefined8 *)(local_30[0x35] + 0xc0));
          local_90 = *(longlong **)(*(longlong *)(local_30[0x35] + 8) + 0x438);
          iVar3 = (**(code **)(*local_90 + 0x28))();
          local_78 = 0;
          if (-1 < iVar3 + -1) {
            do {
              FUN_004b3cf0(local_90,&local_100,local_78);
              FUN_0043ea00(&local_f8,local_100);
              if (local_f8 == 0) {
LAB_0143f6eb:
                local_b9 = false;
              }
              else {
                FUN_004b5390(local_90,&local_110,local_78);
                FUN_0043ea00(&local_108,local_110);
                if (local_108 == 0) goto LAB_0143f6eb;
                FUN_004b5390(local_90,&local_120,local_78);
                FUN_0043ea00(&local_118,local_120);
                FUN_00415dd0(&local_128,local_118,0);
                local_b8 = local_128;
                cVar2 = FUN_0061d9b0(&DAT_0143fffc,local_128);
                local_b9 = cVar2 == '\0';
              }
              if (local_b9 == false) {
                local_c9 = false;
              }
              else {
                FUN_004b5390(local_90,&local_138,local_78);
                FUN_0043ea00(&local_130,local_138);
                FUN_00415dd0(&local_140,local_130,0);
                local_c8 = local_140;
                cVar2 = FUN_0061d9b0(&DAT_0144000c,local_140);
                local_c9 = cVar2 == '\0';
              }
              if (local_c9 == false) {
                local_d9 = false;
              }
              else {
                FUN_004b5390(local_90,&local_150,local_78);
                FUN_0043ea00(&local_148,local_150);
                FUN_00415dd0(&local_158,local_148,0);
                local_d8 = local_158;
                cVar2 = FUN_0061da30(&DAT_0143fffc,local_158);
                local_d9 = cVar2 == '\0';
              }
              if (local_d9 != false) {
                FUN_004b5390(local_90,&local_168,local_78);
                FUN_0043ea00(&local_160,local_168);
                FUN_00415dd0(&local_170,local_160,0);
                local_e8 = local_170;
                cVar2 = FUN_0061da30(&DAT_0144000c,local_170);
                if (cVar2 == '\0') {
                  FUN_004b3cf0(local_90,&local_180,local_78);
                  FUN_0043e130(&local_178,local_180);
                  FUN_00416910(local_280,local_178,0xff);
                  local_38 = FUN_016a61f0(&PTR_FUN_016a1ed0,1,local_280,0);
                  FUN_004b5390(local_90,&local_290,local_78);
                  FUN_0043e130(local_a0,local_290);
                  local_2c8 = (longlong *)CONCAT71(local_2c8._1_7_,1);
                  FUN_00456a50(local_a0,&local_288,&DAT_0144001c);
                  FUN_00415dd0(local_38 + 0x10,local_288,0);
                  *(undefined8 *)(local_38 + 0x28) = 0;
                  (**(code **)(*local_40 + 0x50))(local_40,local_38);
                }
              }
              local_78 = local_78 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          local_2c8 = param_5;
          local_2c0 = local_40;
          iVar3 = FUN_0143f350(*(undefined8 *)(local_30[0x35] + 8),param_2,param_3,&DAT_01440030);
          local_4c = local_4c + iVar3;
        }
        iVar3 = FUN_01cfd2d0();
        local_78 = 0;
        if (-1 < iVar3 + -1) {
          do {
            uVar7 = (ulonglong)local_78;
            local_61 = (**(code **)(*local_30 + 0x2d0))(local_30,uVar7,&local_60);
            if (local_61 == '\x03') {
              uVar7 = *(ulonglong *)(local_60 + 8);
              local_2c8 = (longlong *)CONCAT44(local_2c8._4_4_,local_78);
              local_2c0 = (longlong *)((ulonglong)local_2c0 & 0xffffffffffffff00);
              local_2b8 = (int *)((ulonglong)local_2b8 & 0xffffffff00000000);
              local_2b0 = local_60;
              iVar4 = FUN_0143dd00(auStack_2e8,uVar7,local_48,local_30);
              local_4c = local_4c + iVar4;
            }
            if (local_61 == '\x06') {
              uVar7 = *(ulonglong *)(local_60 + 8);
              local_2c8 = (longlong *)CONCAT44(local_2c8._4_4_,local_78);
              local_2c0 = (longlong *)((ulonglong)local_2c0 & 0xffffffffffffff00);
              local_2b8 = (int *)((ulonglong)local_2b8 & 0xffffffff00000000);
              local_2b0 = local_60;
              iVar4 = FUN_0143dd00(auStack_2e8,uVar7,local_48,local_30);
              local_4c = local_4c + iVar4;
            }
            if (local_61 == '\r') {
              uVar7 = *(ulonglong *)(local_60 + 0x10);
              local_2c8 = (longlong *)CONCAT44(local_2c8._4_4_,local_78);
              local_2c0 = (longlong *)((ulonglong)local_2c0 & 0xffffffffffffff00);
              local_2b8 = (int *)((ulonglong)local_2b8 & 0xffffffff00000000);
              local_2b0 = local_60;
              iVar4 = FUN_0143dd00(auStack_2e8,uVar7,local_48,local_30);
              local_4c = local_4c + iVar4;
            }
            if (local_61 == '\v') {
              local_a8 = local_60;
              if (local_60[0x40] < 8) {
                bVar11 = ((int)CONCAT71((int7)((ulonglong)local_60 >> 8),1) <<
                          (local_60[0x40] & 0x1f) & 3U) != 0;
              }
              else {
                bVar11 = false;
              }
              if (!bVar11) {
                FUN_004167a0(&local_2a0,*(undefined8 *)(local_60 + 0x20));
                FUN_013fcc20(&local_298,local_2a0);
                local_2c8 = local_30;
                local_2c0 = (longlong *)CONCAT44(local_2c0._4_4_,local_78);
                local_2b8 = &local_80;
                local_70 = FUN_0143e820(auStack_2e8,local_298,*(undefined8 *)(local_a8 + 8),local_48
                                       );
                uVar7 = 0;
                FUN_016a94d0(*(undefined8 *)(local_a8 + 0x28),0);
                *(undefined8 *)(local_a8 + 0x28) = local_70;
                if (*(longlong *)(local_a8 + 0x18) != 0) {
                  uVar10 = (uint)*(ushort *)(local_a8 + 0x10);
                  local_7c = 0;
                  if (-1 < (int)(uVar10 - 1)) {
                    do {
                      uVar7 = CONCAT71((int7)(uVar7 >> 8),1);
                      FUN_016a94d0(*(undefined8 *)
                                    (*(longlong *)(local_a8 + 0x18) + (longlong)local_7c * 8),uVar7)
                      ;
                      local_7c = local_7c + 1;
                      uVar10 = uVar10 - 1;
                    } while (uVar10 != 0);
                  }
                  FUN_004095f0(*(undefined8 *)(local_a8 + 0x18));
                }
                uVar5 = FUN_00409570((ulonglong)*(ushort *)(local_a8 + 0x10) << 3);
                *(undefined8 *)(local_a8 + 0x18) = uVar5;
                uVar10 = (uint)*local_a8;
                local_7c = 0;
                if (-1 < (int)(uVar10 - 1)) {
                  do {
                    uVar5 = FUN_01656db0(*(undefined8 *)(local_a8 + 0x28),local_7c + 1);
                    uVar7 = (ulonglong)local_7c;
                    *(undefined8 *)(*(longlong *)(local_a8 + 0x18) + uVar7 * 8) = uVar5;
                    local_7c = local_7c + 1;
                    uVar10 = uVar10 - 1;
                  } while (uVar10 != 0);
                }
                local_4c = local_4c + local_80;
              }
            }
            if (local_61 == '\x05') {
              bVar1 = *local_60;
              if (bVar1 < 8) {
                bVar11 = ((int)CONCAT71((int7)(uVar7 >> 8),1) << (bVar1 & 0x1f) & 0xfeU) != 0;
              }
              else {
                bVar11 = false;
              }
              if (bVar11) {
                uVar10 = (uint)(byte)PTR_DAT_02001408[(ulonglong)bVar1 - 1];
                local_7c = 0;
                puVar8 = PTR_DAT_02001408;
                if (-1 < (int)(uVar10 - 1)) {
                  do {
                    bVar1 = *local_60;
                    if (bVar1 < 8) {
                      uVar6 = (int)CONCAT71((int7)((ulonglong)puVar8 >> 8),1) << (bVar1 & 0x1f);
                      puVar8 = (undefined *)(ulonglong)uVar6;
                      bVar11 = (uVar6 & 0x90) != 0;
                    }
                    else {
                      bVar11 = false;
                    }
                    if (((!bVar11) || (local_7c != 2)) && (*(longlong *)(local_60 + 9) != 0)) {
                      puVar8 = *(undefined **)(*(longlong *)(local_60 + 9) + (longlong)local_7c * 8)
                      ;
                      local_2c8 = (longlong *)CONCAT44(local_2c8._4_4_,local_7c);
                      local_2c0 = (longlong *)CONCAT71(local_2c0._1_7_,1);
                      local_2b8 = (int *)CONCAT44(local_2b8._4_4_,(uint)bVar1);
                      local_2b0 = (byte *)(*(longlong *)(local_60 + 1) + (longlong)local_7c * 8);
                      iVar4 = FUN_0143dd00(auStack_2e8,puVar8,local_48,local_30);
                      local_4c = local_4c + iVar4;
                    }
                    local_7c = local_7c + 1;
                    uVar10 = uVar10 - 1;
                  } while (uVar10 != 0);
                }
              }
            }
            local_78 = local_78 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      local_74 = local_74 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  FUN_00410f20(local_40);
  FUN_00410f20(local_48);
  FUN_00414560(&local_2a0,4);
  FUN_00414560(&local_180,2);
  FUN_004144d0(&local_170);
  FUN_00414560(&local_168,2);
  FUN_004144d0(&local_158);
  FUN_00414560(&local_150,2);
  FUN_004144d0(&local_140);
  FUN_00414560(&local_138,2);
  FUN_004144d0(&local_128);
  FUN_00414560(&local_120,6);
  FUN_00414480(local_a0);
  FUN_00414480(&local_res20);
  return local_4c;
}

