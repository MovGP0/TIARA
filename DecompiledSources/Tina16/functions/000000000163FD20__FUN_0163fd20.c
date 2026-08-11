/* Ghidra address: 0163fd20 */
/* Ghidra symbol: FUN_0163fd20 */


void FUN_0163fd20(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_2b8 [32];
  wchar_t *local_298;
  undefined8 local_288;
  undefined4 local_280 [64];
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  wchar_t *local_160;
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
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  char local_9a;
  undefined1 local_99;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70 [4];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  int local_28 [2];
  longlong local_20;
  
  local_d0 = auStack_2b8;
  local_288 = 0;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  local_158 = 0;
  local_160 = (wchar_t *)0x0;
  local_168 = 0;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_70[2] = 0;
  local_70[1] = 0;
  local_70[0] = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  uVar4 = FUN_00442620(param_1 + 0x8a2,*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x30));
  _HDL_SetParams(*(undefined8 *)(param_1 + 0x10a8),uVar4);
  local_298 = (wchar_t *)(param_1 + 0xa0);
  local_20 = _AMS_ExportComponents(*(undefined8 *)(param_1 + 0x10a8),local_28,&local_2c,&local_30);
  if (local_20 == 0) {
    if (local_2c < 1) {
      FUN_00416830(&local_d8,param_1 + 0xa0,0x401);
      FUN_01625d50(local_d8,*(undefined8 *)(param_1 + 0x78));
    }
    else {
      FUN_01625c20(local_2c,local_30,*(undefined8 *)(param_1 + 0x78));
    }
  }
  FUN_00414b50(local_70,*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x18) + 0x578)
              );
  FUN_00414480(param_1 + 0x10c8);
  plVar5 = (longlong *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
  *(longlong **)(param_1 + 8) = plVar5;
  (**(code **)(*plVar5 + 8))(plVar5,local_28[0]);
  FUN_00409a70(local_20,*(undefined8 *)(*(longlong *)(param_1 + 8) + 8),(longlong)local_28[0]);
  FUN_004b84c0(*(undefined8 *)(param_1 + 8),&local_3c,4);
  if (local_3c != 0xe) {
    FUN_01613110(L"AMS_Version version mismatch, MyVHDLRegistry is set?");
  }
  FUN_01619540(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 8));
  FUN_004b84c0(*(undefined8 *)(param_1 + 8),&local_40,4);
  if (0 < local_40) {
    FUN_004b84c0(*(undefined8 *)(param_1 + 8),*(longlong *)(param_1 + 0x78) + 0xac,4);
    FUN_0163f550(param_1,*(undefined8 *)(param_1 + 8),local_70[3],
                 *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x13a40));
    FUN_0163fc90(param_1,*(undefined8 *)(param_1 + 8));
    local_298 = L"LoadObjects: p.FDesignUnitObjects is OK";
    FUN_00416cd0(param_1 + 0x10c8,3,*(undefined8 *)(param_1 + 0x10c8),&DAT_016415c4);
  }
  FUN_004b84c0(*(undefined8 *)(param_1 + 8),&local_40,4);
  local_34 = 0;
  iVar8 = local_40;
  if (-1 < local_40 + -1) {
    do {
      local_70[3] = FUN_016342d0(&DAT_016214b0,1);
      FUN_004ae7e0(*(undefined8 *)(param_1 + 0x10),local_70[3]);
      *(int *)(local_70[3] + 0x5dc) = local_34;
      FUN_004b84c0(*(undefined8 *)(param_1 + 8),local_70[3] + 0x5b8,1);
      FUN_0163fc90(param_1,*(undefined8 *)(param_1 + 8));
      FUN_004b84c0(*(undefined8 *)(param_1 + 8),local_70[3] + 0x5bc,4);
      FUN_004b84c0(*(undefined8 *)(param_1 + 8),local_70[3] + 0x5c0,4);
      FUN_004b84c0(*(undefined8 *)(param_1 + 8),local_70[3] + 0x5c8,4);
      FUN_004b84c0(*(undefined8 *)(param_1 + 8),local_70[3] + 0x5cc,4);
      FUN_01b20f00(&local_e0,*(undefined8 *)(param_1 + 8));
      FUN_004168b0(local_70[3] + 0x638,local_e0);
      FUN_00414ad0(param_1 + 0x10c8,*(undefined8 *)(local_70[3] + 0x638));
      FUN_01b20f00(&local_e8,*(undefined8 *)(param_1 + 8));
      FUN_004168b0(local_70[3] + 0x650,local_e8);
      FUN_01b20f00(&local_f0,*(undefined8 *)(param_1 + 8));
      FUN_004168b0(local_70[3] + 0x660,local_f0);
      local_298 = *(wchar_t **)(local_70[3] + 0x638);
      FUN_00416cd0(local_70[3] + 0x648,3,&DAT_01641630,*(undefined8 *)(param_1 + 0x1100));
      FUN_00414ad0(local_70[3] + 0x678,*(undefined8 *)(local_70[3] + 0x638));
      FUN_00414ad0(local_70[3] + 0x640,*(undefined8 *)(local_70[3] + 0x638));
      if (((*(char *)(*(longlong *)(param_1 + 0x78) + 0x139e0) == '\0') &&
          (*(int *)(local_70[3] + 0x5c8) != 1)) && (*(int *)(local_70[3] + 0x5c8) != 3)) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
      *(undefined1 *)(*(longlong *)(param_1 + 0x78) + 0x139e0) = uVar7;
      if (((*(char *)(*(longlong *)(param_1 + 0x78) + 0x139e1) == '\0') &&
          (*(int *)(local_70[3] + 0x5c8) != 2)) && (*(int *)(local_70[3] + 0x5c8) != 3)) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
      *(undefined1 *)(*(longlong *)(param_1 + 0x78) + 0x139e1) = uVar7;
      FUN_00414480(&local_78);
      if (local_70[0] != 0) {
        local_298 = L"_evams";
        FUN_00416cd0(&local_78,3,L"bvams_",local_70[0]);
      }
      if (local_34 == 0) {
        FUN_00414b50(&local_80,*(undefined8 *)(local_70[3] + 0x638));
        FUN_00416ad0(local_70[3] + 0x638,local_70[0]);
        if (local_70[0] != 0) {
          FUN_00416ad0(local_70[3] + 0x640,local_78);
        }
      }
      else if (local_70[0] != 0) {
        local_298 = (wchar_t *)local_70[0];
        FUN_00416cd0(&local_108,3,local_80,&DAT_01641678);
        local_298 = (wchar_t *)CONCAT71(local_298._1_7_,1);
        FUN_00450070(&local_100,*(undefined8 *)(local_70[3] + 0x638),local_80,local_108);
        FUN_0043e1a0(&local_f8,local_100);
        FUN_00414ad0(local_70[3] + 0x638,local_f8);
        local_298 = (wchar_t *)local_78;
        FUN_00416cd0(&local_120,3,local_80,&DAT_01641678);
        local_298 = (wchar_t *)CONCAT71(local_298._1_7_,1);
        FUN_00450070(&local_118,*(undefined8 *)(local_70[3] + 0x640),local_80,local_120);
        FUN_0043e1a0(&local_110,local_118);
        FUN_00414ad0(local_70[3] + 0x640,local_110);
        if ((*(int *)(local_70[3] + 0x5c8) == 2) && ((*(uint *)(local_70[3] + 0x5cc) & 1) != 0)) {
          FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x58),local_70[3]);
        }
      }
      FUN_004b84c0(*(undefined8 *)(param_1 + 8),local_70[3] + 0x689,1);
      if (*(char *)(local_70[3] + 0x689) != '\0') {
        FUN_01b20f00(&local_128,*(undefined8 *)(param_1 + 8));
        FUN_004168b0(local_70[3] + 0x668,local_128);
        FUN_004b84c0(*(undefined8 *)(param_1 + 8),local_70[3] + 0x5e4,4);
        FUN_004b84c0(*(undefined8 *)(param_1 + 8),local_70[3] + 0x5e8,4);
      }
      *(undefined8 *)(*(longlong *)(local_70[3] + 0xb0) + 8) = *(undefined8 *)(param_1 + 0x78);
      if (*(char *)(local_70[3] + 0x5b8) == '\0') {
        FUN_0163ecc0(param_1,*(undefined8 *)(param_1 + 8),*(undefined8 *)(local_70[3] + 0x30),
                     local_70[3]);
        FUN_01613ef0(*(undefined8 *)(param_1 + 8),&local_9a);
        if (local_9a != '\0') {
          FUN_0163ecc0(param_1,*(undefined8 *)(param_1 + 8),*(undefined8 *)(local_70[3] + 0x38),
                       local_70[3]);
          uVar4 = FUN_016353d0(local_70[3]);
          uVar6 = FUN_016353c0(local_70[3]);
          FUN_0163f790(param_1,*(undefined8 *)(param_1 + 8),uVar4,uVar6);
          lVar1 = *(longlong *)(local_70[3] + 0x60);
          *(undefined4 *)(lVar1 + 0x1c) = 0;
          *(int *)(lVar1 + 0x20) = *(int *)(*(longlong *)(local_70[3] + 0x38) + 0x10) + -1;
        }
      }
      else {
        FUN_004b84c0(*(undefined8 *)(param_1 + 8),local_70[3] + 0xa3,1);
        FUN_01b20f00(&local_130,*(undefined8 *)(param_1 + 8));
        FUN_004168b0(local_70[3] + 0x658,local_130);
        FUN_0163ebf0(param_1,*(undefined8 *)(param_1 + 8),*(undefined8 *)(local_70[3] + 0x580));
        if (*(char *)(local_70[3] + 0xa3) == '\0') {
          FUN_004b84c0(*(undefined8 *)(param_1 + 8),local_70[3] + 0x5d0,4);
          iVar9 = *(int *)(local_70[3] + 0x5d0);
          local_38 = 0;
          if (-1 < iVar9 + -1) {
            do {
              FUN_01b20f00(&local_180,*(undefined8 *)(param_1 + 8));
              FUN_004168b0(local_70 + 2,local_180);
              FUN_004b84c0(*(undefined8 *)(param_1 + 8),&local_99,1);
              FUN_004b84c0(*(undefined8 *)(param_1 + 8),&local_44,4);
              FUN_004b84c0(*(undefined8 *)(param_1 + 8),&local_48,4);
              local_298 = (wchar_t *)CONCAT44(local_298._4_4_,local_48);
              uVar4 = FUN_016195c0(&DAT_01617b68,1,local_99,local_44);
              (**(code **)(**(longlong **)(local_70[3] + 0x578) + 0x80))
                        (*(longlong **)(local_70[3] + 0x578),local_70[2],uVar4);
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
          }
          FUN_0043e130(&local_98,*(undefined8 *)(local_70[3] + 0x658));
          FUN_00416910(local_280,local_98,0xff);
          cVar2 = FUN_0161e520(0,local_280,
                               *(undefined8 *)
                                (*(longlong *)
                                  (*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x13a30) + 0x200) +
                                0x10),*(undefined1 *)(*(longlong *)(param_1 + 0x78) + 0x13a2c));
          *(char *)(local_70[3] + 0x570) = cVar2;
          if (cVar2 == '\x03') {
            FUN_00416910(local_280,local_98,0xff);
            uVar3 = FUN_0161e9b0(0,local_280,
                                 *(undefined8 *)
                                  (*(longlong *)
                                    (*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x13a30) + 0x200)
                                  + 0x10),*(undefined1 *)(*(longlong *)(param_1 + 0x78) + 0x13a2c));
            *(undefined4 *)(local_70[3] + 8) = uVar3;
          }
        }
        else {
          FUN_004b84c0(*(undefined8 *)(param_1 + 8),local_70[3] + 0x5d0,4);
          FUN_004b84c0(*(undefined8 *)(param_1 + 8),local_70[3] + 0x5d4,4);
          *(int *)(local_70[3] + 0x5d8) =
               *(int *)(local_70[3] + 0x5d0) - *(int *)(local_70[3] + 0x5d4);
          FUN_004b84c0(*(undefined8 *)(param_1 + 8),&local_3c,4);
          FUN_004b84c0(*(undefined8 *)(param_1 + 8),local_70[3] + 0x5f4,4);
          local_38 = 0;
          iVar9 = local_3c;
          if (-1 < local_3c + -1) {
            do {
              FUN_01b20f00(&local_138,*(undefined8 *)(param_1 + 8));
              FUN_004168b0(local_70 + 2,local_138);
              FUN_004b84c0(*(undefined8 *)(param_1 + 8),&local_99,1);
              FUN_004b84c0(*(undefined8 *)(param_1 + 8),&local_44,4);
              FUN_004b84c0(*(undefined8 *)(param_1 + 8),&local_48,4);
              local_298 = (wchar_t *)CONCAT44(local_298._4_4_,local_48);
              uVar4 = FUN_016195c0(&DAT_01617b68,1,local_99,local_44);
              (**(code **)(**(longlong **)(local_70[3] + 0x578) + 0x80))
                        (*(longlong **)(local_70[3] + 0x578),local_70[2],uVar4);
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
          }
          FUN_004b84c0(*(undefined8 *)(param_1 + 8),local_70[3] + 8,4);
          FUN_004b84c0(*(undefined8 *)(param_1 + 8),local_70[3] + 0xc,4);
          FUN_004b84c0(*(undefined8 *)(param_1 + 8),local_70[3] + 0x10,4);
          iVar9 = *(int *)(local_70[3] + 0xc);
          local_38 = 0;
          if (-1 < iVar9 + -1) {
            do {
              FUN_01b20f00(&local_140,*(undefined8 *)(param_1 + 8));
              FUN_004168b0(local_70 + 2,local_140);
              (**(code **)(**(longlong **)(local_70[3] + 0x588) + 0x78))
                        (*(longlong **)(local_70[3] + 0x588),local_70[2]);
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
          }
          iVar9 = *(int *)(local_70[3] + 8);
          local_38 = 0;
          if (-1 < iVar9 + -1) {
            do {
              FUN_01b20f00(&local_148,*(undefined8 *)(param_1 + 8));
              FUN_004168b0(local_70 + 2,local_148);
              (**(code **)(**(longlong **)(local_70[3] + 0x598) + 0x78))
                        (*(longlong **)(local_70[3] + 0x598),local_70[2]);
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
          }
          iVar9 = *(int *)(local_70[3] + 0x10);
          local_38 = 0;
          if (-1 < iVar9 + -1) {
            do {
              FUN_004b84c0(*(undefined8 *)(param_1 + 8),&local_99,1);
              FUN_01b20f00(&local_150,*(undefined8 *)(param_1 + 8));
              FUN_004168b0(local_70 + 2,local_150);
              FUN_01601420(&local_168,local_99);
              FUN_0043e130(&local_160,local_168);
              local_298 = local_160;
              FUN_00416cd0(&local_158,3,local_70[2],&DAT_016415c4);
              (**(code **)(**(longlong **)(local_70[3] + 0x5a0) + 0x78))
                        (*(longlong **)(local_70[3] + 0x5a0),local_158);
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
          }
          FUN_0163f550(param_1,*(undefined8 *)(param_1 + 8),local_70[3],
                       *(undefined8 *)(local_70[3] + 0x5f8));
          FUN_0163fc90(param_1,*(undefined8 *)(param_1 + 8));
          local_298 = L"LoadObjects: p.FEntityObjects is OK";
          FUN_00416cd0(param_1 + 0x10c8,3,*(undefined8 *)(param_1 + 0x10c8),&DAT_016415c4);
          local_298 = L"LoadObjects ENTITY is OK";
          FUN_00416cd0(param_1 + 0x10c8,3,*(undefined8 *)(param_1 + 0x10c8),&DAT_016415c4);
          FUN_0163f550(param_1,*(undefined8 *)(param_1 + 8),local_70[3],
                       *(undefined8 *)(local_70[3] + 0x600));
          FUN_0163fc90(param_1,*(undefined8 *)(param_1 + 8));
          local_298 = L"LoadObjects: p.ArchObjects is OK";
          FUN_00416cd0(param_1 + 0x10c8,3,*(undefined8 *)(param_1 + 0x10c8),&DAT_016415c4);
          local_298 = L"LoadObjects ARCH is OK";
          FUN_00416cd0(param_1 + 0x10c8,3,*(undefined8 *)(param_1 + 0x10c8),&DAT_016415c4);
          FUN_004b84c0(*(undefined8 *)(param_1 + 8),&local_3c,4);
          if (0 < local_3c) {
            FUN_004b84c0(*(undefined8 *)(param_1 + 8),&local_3c,4);
            local_38 = 0;
            iVar9 = local_3c;
            if (-1 < local_3c + -1) {
              do {
                FUN_01b20f00(&local_170,*(undefined8 *)(param_1 + 8));
                FUN_004168b0(&local_88,local_170);
                (**(code **)(**(longlong **)(local_70[3] + 0x5a8) + 0x78))
                          (*(longlong **)(local_70[3] + 0x5a8),local_88);
                iVar9 = iVar9 + -1;
              } while (iVar9 != 0);
            }
            FUN_004b84c0(*(undefined8 *)(param_1 + 8),&local_3c,4);
            local_38 = 0;
            iVar9 = local_3c;
            if (-1 < local_3c + -1) {
              do {
                FUN_01b20f00(&local_178,*(undefined8 *)(param_1 + 8));
                FUN_004168b0(&local_88,local_178);
                local_b8 = FUN_004aeac0(*(undefined8 *)(local_70[3] + 0x5f8),
                                        *(int *)(local_70[3] + 0x5d0) + local_38);
                local_b0 = FUN_01614c70(local_b8);
                uVar4 = FUN_01619130(&DAT_016171d0,1,local_88,local_b0);
                FUN_004ae7e0(*(undefined8 *)(local_70[3] + 0x630),uVar4);
                local_38 = local_38 + 1;
                iVar9 = iVar9 + -1;
              } while (iVar9 != 0);
            }
          }
          if (*(char *)(local_70[3] + 0x689) != '\0') {
            FUN_0163f8c0(param_1,local_70[3]);
          }
        }
      }
      local_34 = local_34 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  FUN_0163ebf0(param_1,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x58));
  FUN_016417a0(param_1);
  FUN_00e01d50(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 8));
  FUN_004b84c0(*(undefined8 *)(param_1 + 8),&local_40,4);
  local_34 = 0;
  if (-1 < local_40 + -1) {
    do {
      FUN_004b84c0(*(undefined8 *)(param_1 + 8),&local_4c,4);
      FUN_01b20f00(&local_288,*(undefined8 *)(param_1 + 8));
      FUN_004168b0(&local_88,local_288);
      local_a8 = FUN_016474c0(&DAT_01620310,1,local_4c,local_88);
      FUN_0163fb20(param_1,*(undefined8 *)(param_1 + 8),*(undefined8 *)(local_a8 + 0x10));
      FUN_0163fb90(param_1,*(undefined8 *)(param_1 + 8),local_a8);
      FUN_004ae7e0(*(undefined8 *)(param_1 + 0x18),local_a8);
      local_40 = local_40 + -1;
    } while (local_40 != 0);
  }
  iVar8 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  local_34 = 0;
  local_40 = iVar8;
  if (-1 < iVar8 + -1) {
    do {
      local_70[3] = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),local_34);
      local_34 = local_34 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  iVar8 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  local_34 = 0;
  local_40 = iVar8;
  if (-1 < iVar8 + -1) {
    do {
      local_70[3] = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),local_34);
      if (*(char *)(local_70[3] + 0x5b8) == '\0') {
        FUN_016353e0(local_70[3]);
      }
      local_34 = local_34 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 8));
  _AMS_FreeComponents(*(undefined8 *)(param_1 + 0x10a8));
  FUN_00414520(&local_288);
  FUN_004145c0(&local_180,3);
  FUN_00414560(&local_168,3);
  FUN_004145c0(&local_150,6);
  FUN_00414560(&local_120,6);
  FUN_004145c0(&local_f0,3);
  FUN_00414480(&local_d8);
  FUN_00414560(&local_98,8);
  return;
}

