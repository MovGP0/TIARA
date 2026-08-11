/* Ghidra address: 0174d3e0 */
/* Ghidra symbol: FUN_0174d3e0 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0174d3e0(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                 undefined1 param_5,char param_6)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  double dVar6;
  longlong *local_res18;
  longlong *local_res20;
  undefined1 auStack_218 [32];
  undefined8 local_1f8;
  undefined1 *local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  longlong **local_188;
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
  undefined1 *local_130;
  undefined8 local_128;
  char local_119;
  undefined8 local_118;
  char local_109;
  undefined8 local_108;
  char local_f9;
  undefined8 local_f8;
  char local_e9;
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  char local_c9;
  int local_c8;
  int local_c4;
  undefined1 local_c0 [16];
  undefined1 *local_b0;
  short local_a5;
  short local_a3;
  undefined1 local_a1;
  undefined1 local_a0;
  undefined1 local_9f;
  char local_9e;
  undefined4 local_9d;
  undefined4 local_95;
  longlong *local_90;
  longlong **local_88;
  undefined8 local_80;
  double local_78;
  int local_70;
  int local_6c;
  int local_68;
  uint local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_130 = auStack_218;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = 0;
  local_190 = 0;
  local_178 = 0;
  local_180 = 0;
  local_188 = (longlong **)0x0;
  local_160 = 0;
  local_168 = 0;
  local_170 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_d8 = (longlong *)0x0;
  local_e0 = (longlong *)0x0;
  local_e8 = (longlong *)0x0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_3);
  FUN_0041b910(local_res20);
  if ((((param_2 != (longlong *)0x0) && (cVar1 = FUN_0175ad40(param_1,param_2), cVar1 != '\0')) ||
      (local_res18 != (longlong *)0x0)) &&
     (plVar5 = *(longlong **)(param_1 + 0x28), *(char *)((longlong)plVar5 + 0xb) == '\0')) {
    if (param_6 == '\0') {
      if (param_2 != (longlong *)0x0) {
        uVar2 = (**(code **)(*plVar5 + 0x2a8))(plVar5,param_2);
        (**(code **)(*param_2 + 0xb8))(param_2,uVar2);
      }
      local_1f8 = (longlong **)&local_50;
      local_1e8._0_1_ = 1;
      local_1f0._0_1_ = local_res18 == (longlong *)0x0;
      FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),8,0xfffffff4,&local_4c);
      local_1f8 = (longlong **)&local_58;
      local_1f0._0_1_ = local_res18 == (longlong *)0x0;
      local_1e8._0_1_ = 1;
      FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),0x20,0xc,(undefined4 *)((longlong)&local_58 + 4))
      ;
      local_1f8 = (longlong **)&local_60;
      local_1f0 = (undefined1 *)CONCAT71(local_1f0._1_7_,local_res18 == (longlong *)0x0);
      local_1e8 = CONCAT31(local_1e8._1_3_,1);
      FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),0x14,0,&local_5c);
      if (param_2 != (longlong *)0x0) {
        local_1f8 = (longlong **)&local_68;
        FUN_01a98380(param_2,local_4c,local_50,&local_64);
        local_1f8 = (longlong **)&local_70;
        FUN_01a98380(param_2,local_58._4_4_,(undefined4)local_58,&local_6c);
        if (*(char *)((longlong)param_2 + 0x12d) != '\0') goto LAB_0174eaff;
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2a8))
                          (*(longlong **)(param_1 + 0x28),param_2);
        (**(code **)(*param_2 + 0xb8))(param_2,uVar2);
        uVar4 = thunk_FUN_0412d81c(0xffffff);
        local_80 = thunk_FUN_041a19a1(param_2[0x29],uVar4);
        if (local_6c < (int)local_64) {
          FUN_01cefdf0(&local_64,&local_6c);
        }
        if (local_70 < local_68) {
          FUN_01cefdf0(&local_68,&local_70);
        }
        local_1f8 = (longlong **)CONCAT44(local_1f8._4_4_,local_70);
        thunk_FUN_041d615e(param_2[0x29],local_64,local_68,local_6c);
        (**(code **)(*param_2 + 0xe8))(param_2,2);
        (**(code **)(*param_2 + 0x40))(param_2,local_5c,local_60);
        (**(code **)(*param_2 + 0x48))(param_2,local_5c,local_60);
        (**(code **)(*param_2 + 0xe8))(param_2,0);
        FUN_01a9a6f0(param_2,param_2[0x29],local_80);
      }
      if (local_res18 != (longlong *)0x0) {
        local_1e8 = 1;
        local_1e0 = 0x8000;
        local_1d8 = 0xfffffffe;
        FUN_01243bf0(local_res18,local_res20,local_4c,local_50);
        local_1f8 = (longlong **)CONCAT44(local_1f8._4_4_,local_60);
        local_1f0 = (undefined1 *)CONCAT44(local_1f0._4_4_,local_5c);
        local_1e8 = local_60;
        local_1e0 = 3;
        local_1d8 = 0x8000;
        FUN_01243890(&local_190,local_res18,local_res20,local_5c);
      }
      if (param_2 != (longlong *)0x0) {
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2a8))
                          (*(longlong **)(param_1 + 0x28),param_2);
        (**(code **)(*param_2 + 0xb8))(param_2,uVar2);
      }
      if (*(char *)(*(longlong *)(param_1 + 0x28) + 0xd3) == '\0') {
        iVar3 = 0xf - *(int *)(param_1 + 0x38);
      }
      else {
        iVar3 = *(int *)(param_1 + 0x38);
      }
      local_78 = ((double)iVar3 * 6.283185307179586) / 16.0;
      dVar6 = (double)FUN_0040bcd0(local_78);
      local_3c = FUN_0040c770(dVar6 * 11.0 + 20.0);
      dVar6 = (double)FUN_0040bdd0(local_78);
      local_40 = FUN_0040c770(dVar6 * 11.0);
      dVar6 = (double)FUN_0040bcd0(local_78);
      local_44 = FUN_0040c770(20.0 - dVar6 * 11.0);
      dVar6 = (double)FUN_0040bdd0(local_78);
      local_48 = FUN_0040c770(-(dVar6 * 11.0));
      local_1f8 = (longlong **)&local_50;
      local_1e8._0_1_ = 1;
      local_1f0._0_1_ = local_res18 == (longlong *)0x0;
      FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),local_3c,local_40,&local_4c);
      local_1f8 = (longlong **)&local_58;
      local_1f0 = (undefined1 *)CONCAT71(local_1f0._1_7_,local_res18 == (longlong *)0x0);
      local_1e8 = CONCAT31(local_1e8._1_3_,1);
      FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),local_44,local_48,
                   (undefined4 *)((longlong)&local_58 + 4));
      if (param_2 != (longlong *)0x0) {
        (**(code **)(*param_2 + 0x40))(param_2,local_4c,local_50);
        (**(code **)(*param_2 + 0x48))(param_2,local_58._4_4_,(undefined4)local_58);
      }
      if (local_res18 != (longlong *)0x0) {
        if (*(char *)(param_1 + 0xb) == '\0') {
          local_1f8 = (longlong **)CONCAT44(local_1f8._4_4_,local_50);
          local_1f0 = (undefined1 *)CONCAT44(local_1f0._4_4_,local_58._4_4_);
          local_1e8 = (undefined4)local_58;
          local_1e0 = 1;
          local_1d8 = 0x8000;
          FUN_01243890(&local_1c0,local_res18,local_res20,local_4c);
        }
        else {
          (**(code **)(*local_res18 + 0x148))(local_res18,&local_e0,L"interactive");
          (**(code **)(*local_res20 + 0x98))(local_res20,&local_198,local_e0);
          if (*(int *)(param_1 + 0x40) < 0) {
            FUN_00414480(&local_38);
            local_119 = *(int *)(param_1 + 0x40) < -0xf;
            FUN_0043f750(&local_1a8,*(int *)(param_1 + 0x48) * -0x32);
            local_128 = local_1a8;
            if (local_119 == '\0') {
              FUN_00414b50(&local_38,&DAT_0174edc4);
            }
            else {
              FUN_00414b50(&local_38,local_1a8);
            }
            (**(code **)(*local_e0 + 0x108))(local_e0,L"delay",local_38);
            FUN_00414480(&local_38);
          }
          else {
            FUN_00414480(&local_30);
            local_109 = 0xf < *(int *)(param_1 + 0x40);
            FUN_0043f750(&local_1a0,*(int *)(param_1 + 0x48) * 0x32);
            local_118 = local_1a0;
            if (local_109 == '\0') {
              FUN_00414b50(&local_30,&DAT_0174edc4);
            }
            else {
              FUN_00414b50(&local_30,local_1a0);
            }
            (**(code **)(*local_e0 + 0x108))(local_e0,L"delay",local_30);
            FUN_00414480(&local_30);
          }
          local_c8 = 0;
          do {
            iVar3 = local_c8;
            if (*(char *)(*(longlong *)(param_1 + 0x28) + 0xd3) == '\0') {
              iVar3 = 0xf - local_c8;
            }
            local_78 = ((double)iVar3 * 6.283185307179586) / 16.0;
            dVar6 = (double)FUN_0040bcd0(local_78);
            local_3c = FUN_0040c770(dVar6 * 10.0 + 20.0);
            dVar6 = (double)FUN_0040bdd0(local_78);
            local_40 = FUN_0040c770(dVar6 * 10.0);
            dVar6 = (double)FUN_0040bcd0(local_78);
            local_44 = FUN_0040c770(20.0 - dVar6 * 10.0);
            dVar6 = (double)FUN_0040bdd0(local_78);
            local_48 = FUN_0040c770(-(dVar6 * 10.0));
            local_1f8 = (longlong **)&local_50;
            local_1e8._0_1_ = 1;
            local_1f0._0_1_ = local_res18 == (longlong *)0x0;
            FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),local_3c,local_40,&local_4c);
            local_1f8 = (longlong **)&local_58;
            local_1f0 = (undefined1 *)CONCAT71(local_1f0._1_7_,local_res18 == (longlong *)0x0);
            local_1e8 = CONCAT31(local_1e8._1_3_,1);
            FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),local_44,local_48,
                         (undefined4 *)((longlong)&local_58 + 4));
            (**(code **)(*local_res18 + 0x148))(local_res18,&local_d8,L"phase");
            (**(code **)(*local_e0 + 0x98))(local_e0,&local_1b0,local_d8);
            local_1f8 = (longlong **)CONCAT44(local_1f8._4_4_,local_50);
            local_1f0 = (undefined1 *)CONCAT44(local_1f0._4_4_,local_58._4_4_);
            local_1e8 = (undefined4)local_58;
            local_1e0 = 1;
            local_1d8 = 0x8000;
            FUN_01243890(&local_1b8,local_res18,local_d8,local_4c);
            if (*(int *)(param_1 + 0x44) == 0) {
              local_c8 = local_c8 + 2;
            }
            else {
              local_c8 = local_c8 + *(int *)(param_1 + 0x44);
            }
          } while (local_c8 < 0x10);
        }
      }
      if (((*(char *)(param_1 + 0xb) != '\0') && (*(char *)(param_1 + 8) != '\0')) &&
         ((*PTR_DAT_020052b8 == '\0' || (*PTR_DAT_020023b0 == '\0')))) {
        FUN_0173d380(param_1,param_2,local_res18,local_res20);
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x50) == 0) {
        uVar4 = FUN_01d06fb0(plVar5,*(undefined1 *)((longlong)plVar5 + 0xd1));
        *(undefined8 *)(param_1 + 0x50) = uVar4;
      }
      if ((*(longlong *)(param_1 + 0x50) != 0) &&
         (cVar1 = FUN_01d07320(*(undefined8 *)(param_1 + 0x28)), -1 < cVar1)) {
        local_90 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
        FUN_0060bbf0(local_90,6);
        cVar1 = FUN_00c3d380(*(undefined8 *)(param_1 + 0x50),&local_b0,&local_a5);
        if (cVar1 != '\0') {
          local_c4 = FUN_00c3c540(local_a1,local_a0,local_9f,local_9e);
          if (*(char *)(param_1 + 8) == '\0') {
            cVar1 = FUN_01d07320(*(undefined8 *)(param_1 + 0x28));
            *(int *)(param_1 + 0x10) = (int)cVar1;
          }
          else {
            cVar1 = FUN_01d07320(*(undefined8 *)(param_1 + 0x28));
            *(int *)(param_1 + 0x10) = local_c4 + cVar1;
          }
          if (param_2 != (longlong *)0x0) {
            FUN_01a9d8b0(param_2,*(undefined1 *)(param_1 + 0x10));
            FUN_01a9a720(param_2,*(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0xc),
                         *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x10));
            uVar2 = FUN_0173cca0(*(undefined8 *)(param_1 + 0x28),param_5,param_6);
            FUN_01a9a770(param_2,uVar2);
            FUN_01a9a780(param_2,*(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0xd1),
                         *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0xd3));
          }
          local_1f8 = (longlong **)CONCAT44(local_1f8._4_4_,local_9d);
          local_1f0 = local_b0;
          local_1e8 = CONCAT31(local_1e8._1_3_,*(undefined1 *)(param_1 + 0x10));
          local_88 = (longlong **)FUN_01a9f060(local_a1,local_a0,local_9f,local_9e);
          if ((local_9e == '\0') && (*(char *)(param_1 + 8) != '\0')) {
            FUN_01a9e8f0(local_88,4,0);
            local_c9 = '\x04';
          }
          else {
            local_c9 = '\0';
          }
          (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))
                    (*(longlong **)(param_1 + 0x20),local_88);
          if (*(char *)(param_1 + 10) == '\0') {
            if ((*(int *)(param_1 + 0x14) == *(int *)(param_1 + 0x10)) &&
               (local_c9 == *(char *)(param_1 + 0x18))) {
              FUN_00410f20(local_88);
            }
            else {
              if (param_2 != (longlong *)0x0) {
                local_1f8 = local_88;
                local_1f0 = (undefined1 *)0x0;
                local_1e8 = CONCAT31(local_1e8._1_3_,1);
                FUN_01a9f420(param_2,(longlong)local_a5,(longlong)local_a3,local_95);
              }
              *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
              *(char *)(param_1 + 0x18) = local_c9;
            }
          }
          else {
            if (*(int *)(param_1 + 0x10) == 0) {
              local_1f8 = (longlong **)((ulonglong)local_1f8._4_4_ << 0x20);
              FUN_00498350(local_c0,0,0,0);
            }
            else {
              local_1f8 = (longlong **)CONCAT44(local_1f8._4_4_,0xfffffff6);
              FUN_00498350(local_c0,0xc,0xffffffea,0x18);
            }
            if (param_2 != (longlong *)0x0) {
              local_1f8 = local_88;
              local_1f0 = local_c0;
              local_1e8 = CONCAT31(local_1e8._1_3_,1);
              FUN_01a9f420(param_2,(longlong)local_a5,(longlong)local_a3,local_95);
            }
          }
        }
        if (*(char *)(param_1 + 8) == '\0') {
          if (*(int *)(param_1 + 0x10) == 0) {
            if (*(char *)(param_1 + 0xb) != '\0') {
              if (param_2 != (longlong *)0x0) {
                FUN_007d5cb0(DAT_0210ffd8,(longlong)*(int *)(param_1 + 0x38) / 4 & 0xffffffff,
                             local_90);
                (**(code **)(*local_90 + 0x80))(local_90,1);
                plVar5 = (longlong *)FUN_00609e10(local_90);
                uVar2 = (**(code **)(*plVar5 + 0x30))(plVar5,0,0);
                FUN_0060be30(local_90,uVar2);
                uVar2 = FUN_0173cca0(*(undefined8 *)(param_1 + 0x28),param_5,param_6);
                local_90 = (longlong *)FUN_01a9eff0(param_2,local_90,uVar2);
                local_1f8 = &local_90;
                local_1f0 = (undefined1 *)((ulonglong)local_1f0 & 0xffffffffffffff00);
                FUN_01a9f830(param_2,(longlong)local_a5,(longlong)local_a3,0x3f800000);
              }
              if (local_res18 != (longlong *)0x0) {
                (**(code **)(*local_res18 + 0x148))(local_res18,&local_e0,L"interactive");
                (**(code **)(*local_res20 + 0x98))(local_res20,&local_138,local_e0);
                if (*(int *)(param_1 + 0x40) < 0) {
                  FUN_00414480(&local_28);
                  local_f9 = *(int *)(param_1 + 0x40) < -0xf;
                  FUN_0043f750(&local_148,*(int *)(param_1 + 0x48) * -0x32);
                  local_108 = local_148;
                  if (local_f9 == '\0') {
                    FUN_00414b50(&local_28,&DAT_0174edc4);
                  }
                  else {
                    FUN_00414b50(&local_28,local_148);
                  }
                  (**(code **)(*local_e0 + 0x108))(local_e0,L"delay",local_28);
                  FUN_00414480(&local_28);
                }
                else {
                  FUN_00414480(local_20);
                  local_e9 = 0xf < *(int *)(param_1 + 0x40);
                  FUN_0043f750(&local_140,*(int *)(param_1 + 0x48) * 0x32);
                  local_f8 = local_140;
                  if (local_e9 == '\0') {
                    FUN_00414b50(local_20,&DAT_0174edc4);
                  }
                  else {
                    FUN_00414b50(local_20,local_140);
                  }
                  (**(code **)(*local_e0 + 0x108))(local_e0,L"delay",local_20[0]);
                  FUN_00414480(local_20);
                }
                local_c8 = 0;
                do {
                  (**(code **)(*local_res18 + 0x148))(local_res18,&local_d8,L"phase");
                  (**(code **)(*local_e0 + 0x98))(local_e0,&local_150,local_d8);
                  (**(code **)(*local_90 + 0x10))(local_90,0);
                  FUN_007d5cb0(DAT_0210ffd8,3 - local_c8,local_90);
                  (**(code **)(*local_res18 + 0x148))(local_res18,&local_e8,L"shape");
                  (**(code **)(*local_d8 + 0x98))(local_d8,&local_158,local_e8);
                  FUN_01b23e30(local_90,local_res18,local_e8);
                  (**(code **)(*local_e8 + 0x108))(local_e8,L"type",L"image");
                  FUN_0043f750(&local_168,(longlong)local_a5);
                  FUN_0043f750(&local_170,(longlong)local_a3);
                  local_1f8 = (longlong **)local_170;
                  FUN_00416cd0(&local_160,3,local_168,&DAT_0174ee6c);
                  (**(code **)(*local_e8 + 0x108))(local_e8,L"position",local_160);
                  uVar2 = (**(code **)(*local_90 + 0x60))(local_90);
                  FUN_0043f750(&local_180,uVar2);
                  uVar2 = (**(code **)(*local_90 + 0x48))(local_90);
                  FUN_0043f750(&local_188,uVar2);
                  local_1f8 = local_188;
                  FUN_00416cd0(&local_178,3,local_180,&DAT_0174ee6c);
                  (**(code **)(*local_e8 + 0x108))(local_e8,L"size",local_178);
                  local_c8 = local_c8 + 1;
                } while (local_c8 < 4);
              }
            }
          }
          else {
            if (param_2 != (longlong *)0x0) {
              uVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2a8))
                                (*(longlong **)(param_1 + 0x28),param_2);
              (**(code **)(*param_2 + 0xb8))(param_2,uVar2);
            }
            if (*(char *)(*(longlong *)(param_1 + 0x28) + 0xd3) == '\0') {
              iVar3 = 0xf - *(int *)(param_1 + 0x38);
            }
            else {
              iVar3 = *(int *)(param_1 + 0x38);
            }
            local_78 = ((double)iVar3 * 6.283185307179586) / 16.0;
            dVar6 = (double)FUN_0040bcd0(local_78);
            local_3c = FUN_0040c770(dVar6 * 4.0);
            local_44 = local_3c + 0x12;
            local_3c = 0x12 - local_3c;
            dVar6 = (double)FUN_0040bdd0(local_78);
            local_40 = FUN_0040c770(dVar6 * 4.0);
            local_48 = -0x10 - local_40;
            local_40 = local_40 + -0x10;
            local_1f8 = (longlong **)&local_50;
            local_1f0._0_1_ = 1;
            local_1e8._0_1_ = 1;
            FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),local_3c,local_40,&local_4c);
            local_1f8 = (longlong **)&local_58;
            local_1f0 = (undefined1 *)CONCAT71(local_1f0._1_7_,1);
            local_1e8 = CONCAT31(local_1e8._1_3_,1);
            FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),local_44,local_48,
                         (undefined4 *)((longlong)&local_58 + 4));
            if (param_2 != (longlong *)0x0) {
              (**(code **)(*param_2 + 0xe8))(param_2,3);
              (**(code **)(*param_2 + 0x40))(param_2,local_4c,local_50);
              (**(code **)(*param_2 + 0x48))(param_2,local_58._4_4_,(undefined4)local_58);
              (**(code **)(*param_2 + 0xe8))(param_2,0);
            }
          }
        }
        FUN_00410f20(local_90);
      }
    }
  }
LAB_0174eaff:
  FUN_00417840(&local_1c0,&LAB_00b9fca0,2);
  FUN_0041b800(&local_1b0);
  FUN_00414560(&local_1a8,2);
  FUN_0041b800(&local_198);
  FUN_0041b800(&local_190);
  FUN_00414560(&local_188,6);
  FUN_00417840(&local_158,&DAT_00b9f8e0,2);
  FUN_00414560(&local_148,2);
  FUN_0041b800(&local_138);
  FUN_00417840(&local_e8,&LAB_00b9fca0,3);
  FUN_00414560(&local_38,4);
  FUN_0041b800(&local_res18);
  FUN_0041b800(&local_res20);
  return;
}

