/* Ghidra address: 017476a0 */
/* Ghidra symbol: FUN_017476a0 */


void FUN_017476a0(longlong param_1,longlong *param_2,longlong *param_3,ulonglong param_4,
                 undefined1 param_5,char param_6)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  longlong *local_res18;
  ulonglong local_res20;
  undefined1 auStack_218 [32];
  wchar_t *local_1f8;
  undefined8 *local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  longlong *local_1d8;
  ulonglong local_1d0;
  uint local_1c8;
  uint local_1c0;
  undefined1 local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined1 local_198;
  undefined8 local_180;
  undefined8 local_178;
  longlong *local_170;
  undefined8 local_168;
  undefined8 local_160;
  longlong *local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 *local_120;
  undefined8 local_110;
  longlong *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_80;
  short local_75;
  short local_73;
  undefined1 local_71;
  undefined1 local_70;
  undefined1 local_6f;
  undefined4 local_6d;
  undefined4 local_65;
  undefined8 local_60;
  undefined4 local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  byte *local_38;
  undefined8 local_30;
  
  local_120 = auStack_218;
  local_180 = 0;
  local_178 = 0;
  local_168 = 0;
  local_170 = (longlong *)0x0;
  local_160 = 0;
  local_150 = 0;
  local_158 = (longlong *)0x0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_108 = (longlong *)0x0;
  local_110 = 0;
  local_30 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_3);
  FUN_0041b910(local_res20);
  if (param_2 == (longlong *)0x0) {
LAB_017477b8:
    if (local_res18 == (longlong *)0x0) goto LAB_0174867a;
  }
  else {
    cVar2 = FUN_0175ad40(param_1,param_2);
    if (cVar2 == '\0') goto LAB_017477b8;
  }
  plVar6 = *(longlong **)(param_1 + 0x28);
  if (*(char *)((longlong)plVar6 + 0xb) != '\0') goto LAB_0174867a;
  (**(code **)(*plVar6 + 0x2d0))(plVar6,0,&local_38);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    uVar4 = FUN_01d06fb0(*(longlong *)(param_1 + 0x28),
                         *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0xd1));
    *(undefined8 *)(param_1 + 0x40) = uVar4;
  }
  if ((param_6 == '\0') || (*(longlong *)(param_1 + 0x40) == 0)) {
LAB_01747d18:
    if (param_2 != (longlong *)0x0) {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2a8))
                        (*(longlong **)(param_1 + 0x28),param_2);
      (**(code **)(*param_2 + 0xb8))(param_2,uVar3);
    }
    local_1f8 = (wchar_t *)&local_40;
    local_1f0._0_1_ = 1;
    local_1e8._0_1_ = 1;
    FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),0xffffffe6,0xffffffe6,&local_3c);
    local_1f8 = (wchar_t *)&local_48;
    local_1f0 = (undefined8 *)CONCAT71(local_1f0._1_7_,1);
    local_1e8 = CONCAT71(local_1e8._1_7_,1);
    FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),0x1b,0x1b,&local_44);
    if (param_2 != (longlong *)0x0) {
      uVar3 = (**(code **)(*param_2 + 0xd0))(param_2,0);
      local_1f8 = (wchar_t *)CONCAT44(local_1f8._4_4_,local_48);
      local_1f0 = (undefined8 *)CONCAT44(local_1f0._4_4_,uVar3);
      (**(code **)(*param_2 + 0x60))(param_2,local_3c,local_40,local_44);
    }
    if (*(char *)(param_1 + 9) != '\0') goto LAB_0174867a;
    local_4c = 0;
    do {
      local_1f8 = (wchar_t *)&local_40;
      local_1e8._0_1_ = 1;
      local_1f0._0_1_ = local_res18 == (longlong *)0x0;
      FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),0xffffffe6,local_4c * 0xd + -0x1a,&local_3c);
      local_1f8 = (wchar_t *)&local_48;
      local_1f0 = (undefined8 *)CONCAT71(local_1f0._1_7_,local_res18 == (longlong *)0x0);
      local_1e8 = CONCAT71(local_1e8._1_7_,1);
      FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),0x1a,local_4c * 0xd + -0x1a,&local_44);
      if (param_2 != (longlong *)0x0) {
        (**(code **)(*param_2 + 0x40))(param_2,local_3c,local_40);
        (**(code **)(*param_2 + 0x48))(param_2,local_44,local_48);
      }
      if (local_res18 != (longlong *)0x0) {
        local_1f8 = (wchar_t *)CONCAT44(local_1f8._4_4_,local_40);
        local_1f0 = (undefined8 *)CONCAT44(local_1f0._4_4_,local_44);
        local_1e8 = CONCAT44(local_1e8._4_4_,local_48);
        local_1e0 = CONCAT44(local_1e0._4_4_,1);
        local_1d8 = (longlong *)CONCAT44(local_1d8._4_4_,0x8000);
        FUN_01243890(&local_140,local_res18,local_res20,local_3c);
      }
      local_4c = local_4c + 1;
    } while (local_4c != 5);
    local_4c = 0;
    do {
      local_1f8 = (wchar_t *)&local_40;
      local_1e8._0_1_ = 1;
      local_1f0._0_1_ = local_res18 == (longlong *)0x0;
      FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),local_4c * 0xd + -0x1a,0xffffffe6,&local_3c);
      local_1f8 = (wchar_t *)&local_48;
      local_1f0 = (undefined8 *)CONCAT71(local_1f0._1_7_,local_res18 == (longlong *)0x0);
      local_1e8 = CONCAT71(local_1e8._1_7_,1);
      FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),local_4c * 0xd + -0x1a,0x1a,&local_44);
      if (param_2 != (longlong *)0x0) {
        (**(code **)(*param_2 + 0x40))(param_2,local_3c,local_40);
        (**(code **)(*param_2 + 0x48))(param_2,local_44,local_48);
      }
      if (local_res18 != (longlong *)0x0) {
        local_1f8 = (wchar_t *)CONCAT44(local_1f8._4_4_,local_40);
        local_1f0 = (undefined8 *)CONCAT44(local_1f0._4_4_,local_44);
        local_1e8 = CONCAT44(local_1e8._4_4_,local_48);
        local_1e0 = CONCAT44(local_1e0._4_4_,1);
        local_1d8 = (longlong *)CONCAT44(local_1d8._4_4_,0x8000);
        FUN_01243890(&local_148,local_res18,local_res20,local_3c);
      }
      local_4c = local_4c + 1;
    } while (local_4c != 5);
    local_50 = (uint)*local_38 % 4;
    local_54 = *local_38 / 4;
    iVar7 = local_50 * 0xd;
    iVar8 = local_54 * 0xd;
    local_1f8 = (wchar_t *)&local_40;
    local_1e8._0_1_ = 1;
    local_1f0._0_1_ = local_res18 == (longlong *)0x0;
    FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),iVar7 + -0x1a,iVar8 + -0x1a,&local_3c);
    local_1f8 = (wchar_t *)&local_48;
    local_1f0 = (undefined8 *)CONCAT71(local_1f0._1_7_,local_res18 == (longlong *)0x0);
    local_1e8 = CONCAT71(local_1e8._1_7_,1);
    FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),iVar7 + -0xc,iVar8 + -0xc,&local_44);
    if (param_2 != (longlong *)0x0) {
      local_1f8 = (wchar_t *)CONCAT44(local_1f8._4_4_,local_48);
      local_1f0 = (undefined8 *)CONCAT44(local_1f0._4_4_,0xff);
      (**(code **)(*param_2 + 0x60))(param_2,local_3c,local_40,local_44);
    }
    if (local_res18 != (longlong *)0x0) {
      (**(code **)(*local_res18 + 0x100))(local_res18,&local_158);
      (**(code **)(*local_158 + 0x100))(local_158,&local_150,L"interactive");
      cVar2 = FUN_0043fc50(local_150,0);
      if (cVar2 != '\0') {
        local_1f8 = (wchar_t *)CONCAT44(local_1f8._4_4_,local_40);
        local_1f0 = (undefined8 *)CONCAT44(local_1f0._4_4_,local_44);
        local_1e8 = CONCAT44(local_1e8._4_4_,local_48);
        local_1e0 = CONCAT44(local_1e0._4_4_,1);
        local_1d8 = (longlong *)CONCAT44(local_1d8._4_4_,0xff);
        local_1d0 = CONCAT44(local_1d0._4_4_,0xff);
        FUN_01243a40(&local_160,local_res18,local_res20,local_3c);
      }
    }
    local_4c = 0;
    do {
      local_50 = (int)local_4c % 4;
      local_54 = (int)local_4c / 4;
      if (local_4c == *local_38) {
        local_58 = 0xffff;
      }
      else {
        local_58 = 0x808000;
      }
      if (param_2 != (longlong *)0x0) {
        local_58 = (**(code **)(*param_2 + 0xd8))(param_2,local_58);
      }
      if (local_res18 != (longlong *)0x0) {
        (**(code **)(*local_res18 + 0x100))(local_res18,&local_170);
        (**(code **)(*local_170 + 0x100))(local_170,&local_168,L"interactive");
        cVar2 = FUN_0043fc50(local_168,0);
        if (cVar2 == '\0') {
          local_1f8 = (wchar_t *)CONCAT44(local_1f8._4_4_,local_54 * 0xd + -0x1a);
          local_1f0 = (undefined8 *)CONCAT44(local_1f0._4_4_,local_50 * 0xd + -0xd);
          local_1e8 = CONCAT44(local_1e8._4_4_,local_54 * 0xd + -0xd);
          local_1e0 = CONCAT44(local_1e0._4_4_,1);
          local_1d8 = (longlong *)CONCAT44(local_1d8._4_4_,0xff);
          local_1d0 = CONCAT44(local_1d0._4_4_,0xff);
          FUN_01243a40(&local_108,local_res18,local_res20,local_50 * 0xd + -0x1a);
          FUN_00414480(&local_30);
          FUN_0043f750(&local_30,local_4c);
          FUN_00416ba0(&local_178,&DAT_01748888,local_30);
          (**(code **)(*local_108 + 0x108))(local_108,L"showif",local_178);
          FUN_00414480(&local_30);
        }
      }
      local_1f8 = (wchar_t *)&local_40;
      local_1f0 = (undefined8 *)CONCAT71(local_1f0._1_7_,local_res18 == (longlong *)0x0);
      local_1e8 = CONCAT71(local_1e8._1_7_,1);
      FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),local_50 * 0xd + -0x13,local_54 * 0xd + -0x13,
                   &local_3c);
      FUN_0043fba0(&local_110,local_4c,1);
      if (param_2 != (longlong *)0x0) {
        local_1f8 = (wchar_t *)CONCAT71(local_1f8._1_7_,1);
        local_1f0 = (undefined8 *)((ulonglong)local_1f0 & 0xffffffffffffff00);
        local_1e8 = 0x3ff0000000000000;
        local_1e0 = 0x3ff0000000000000;
        local_1d8 = (longlong *)CONCAT44(local_1d8._4_4_,local_58);
        local_1d0 = CONCAT44(local_1d0._4_4_,*(undefined4 *)((longlong)param_2 + 0xfc));
        local_1c8 = 300;
        local_1c0 = local_1c0 & 0xffffff00;
        local_1b8 = 0;
        local_1b0 = param_2[0x21];
        local_1a8 = local_110;
        local_1a0 = 0;
        local_198 = 0;
        FUN_01a98770(param_2,local_3c,local_40,1);
      }
      if (local_res18 != (longlong *)0x0) {
        local_1f8 = (wchar_t *)CONCAT71(local_1f8._1_7_,1);
        local_1f0 = (undefined8 *)CONCAT71(local_1f0._1_7_,1);
        local_1e8 = 0x3ff0000000000000;
        local_1e0._0_4_ = local_58;
        local_1d8 = local_res18;
        local_1d0 = local_res20;
        FUN_01244970(&local_110,&local_3c,&local_40,0);
        local_1f8 = L"Arial";
        local_1f0 = (undefined8 *)CONCAT44(local_1f0._4_4_,local_3c);
        local_1e8 = CONCAT44(local_1e8._4_4_,local_40);
        local_1e0 = (ulonglong)local_1e0._4_4_ << 0x20;
        local_1d8 = (longlong *)CONCAT44(local_1d8._4_4_,0xb);
        local_1d0 = local_1d0 & 0xffffffffffffff00;
        local_1c8 = local_1c8 & 0xffffff00;
        local_1c0 = 0;
        FUN_012444f0(&local_180,local_res18,local_res20,local_110);
      }
      local_4c = local_4c + 1;
    } while (local_4c != 0x10);
  }
  else {
    cVar2 = FUN_01d07320(*(undefined8 *)(param_1 + 0x28));
    if (cVar2 < '\0') goto LAB_01747d18;
    cVar2 = FUN_00c3d380(*(undefined8 *)(param_1 + 0x40),&local_80,&local_75);
    if (cVar2 != '\0') {
      cVar2 = FUN_01d07320(*(undefined8 *)(param_1 + 0x28));
      *(int *)(param_1 + 0x10) = (int)cVar2;
      FUN_01a9d8b0(param_2,*(undefined1 *)(param_1 + 0x10));
      FUN_01a9a720(param_2,*(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0xc),
                   *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x10));
      uVar3 = FUN_0173cca0(*(undefined8 *)(param_1 + 0x28),param_5,param_6);
      FUN_01a9a770(param_2,uVar3);
      FUN_01a9a780(param_2,*(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0xd1),
                   *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0xd3));
      local_1f0 = (undefined8 *)CONCAT44(local_1f0._4_4_,local_6d);
      local_1e8 = local_80;
      local_60 = FUN_01a9f1e0(param_2,local_71,local_70,local_6f);
      bVar1 = *local_38;
      local_50 = (uint)bVar1 % 4;
      local_54 = bVar1 / 4;
      lVar5 = FUN_00609e10(local_60,(ulonglong)(uint)bVar1 % 4);
      FUN_005fdab0(*(undefined8 *)(lVar5 + 0x80),0xd3f1ff);
      plVar6 = (longlong *)FUN_00609e10(local_60);
      iVar7 = local_50 * 0xd;
      iVar8 = local_54 * 0xd;
      local_58 = (**(code **)(*plVar6 + 0x30))(plVar6,iVar7 + 0x14,iVar8 + 0x16);
      plVar6 = (longlong *)FUN_00609e10(local_60);
      local_1f8 = (wchar_t *)((ulonglong)local_1f8._1_7_ << 8);
      (**(code **)(*plVar6 + 0xb0))(plVar6,iVar7 + 0x14,iVar8 + 0x16,local_58);
      if (*(char *)(param_1 + 10) == '\0') {
        if (*(int *)(param_1 + 0x14) == *(int *)(param_1 + 0x10)) {
          FUN_00410f20(local_60);
        }
        else {
          local_1f8 = (wchar_t *)local_60;
          local_1f0 = (undefined8 *)0x0;
          local_1e8 = CONCAT71(local_1e8._1_7_,1);
          FUN_01a9f420(param_2,(longlong)local_75,(longlong)local_73,local_65);
          *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
        }
      }
      else {
        local_1f8._0_4_ = iVar8 + -0xd;
        FUN_00498350(&local_130,iVar7 + -0x19,iVar8 + -0x18,iVar7 + -0xe);
        local_100 = local_130;
        uStack_f8 = uStack_128;
        local_50 = (uint)*(byte *)(param_1 + 0x38) % 4;
        local_54 = *(byte *)(param_1 + 0x38) / 4;
        local_1f8 = (wchar_t *)CONCAT44(local_1f8._4_4_,local_54 * 0xd + -0xd);
        FUN_00498350(&local_130,local_50 * 0xd + -0x19,local_54 * 0xd + -0x18,local_50 * 0xd + -0xe)
        ;
        local_f0 = local_130;
        uStack_e8 = uStack_128;
        local_1f8 = (wchar_t *)local_60;
        local_1f0 = &local_100;
        local_1e8 = CONCAT71(local_1e8._1_7_,2);
        FUN_01a9f420(param_2,(longlong)local_75,(longlong)local_73,local_65);
      }
      local_4c = 0;
      do {
        local_50 = (int)local_4c % 4;
        local_54 = (int)local_4c / 4;
        local_1f8 = (wchar_t *)&local_40;
        local_1f0._0_1_ = 1;
        local_1e8 = CONCAT71(local_1e8._1_7_,1);
        FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),local_50 * 0xd + -0x14,local_54 * 0xd + -0x13,
                     &local_3c);
        uVar3 = (**(code **)(*param_2 + 0xd8))(param_2,0);
        FUN_0043fba0(&local_138,local_4c,1);
        local_1f8 = (wchar_t *)CONCAT71(local_1f8._1_7_,1);
        local_1f0 = (undefined8 *)((ulonglong)local_1f0._1_7_ << 8);
        local_1e8 = 0x3ff0000000000000;
        local_1e0 = 0x3ff0000000000000;
        local_1d8 = (longlong *)CONCAT44(local_1d8._4_4_,uVar3);
        local_1d0 = CONCAT44(local_1d0._4_4_,*(undefined4 *)((longlong)param_2 + 0xfc));
        local_1c8 = 300;
        local_1c0 = local_1c0 & 0xffffff00;
        local_1b8 = 0;
        local_1b0 = param_2[0x21];
        local_1a8 = local_138;
        local_1a0 = 0;
        local_198 = 0;
        FUN_01a98770(param_2,local_3c,local_40,1);
        local_4c = local_4c + 1;
      } while (local_4c != 0x10);
      local_4c = 0x10;
    }
  }
  *(byte *)(param_1 + 0x38) = *local_38;
LAB_0174867a:
  FUN_0041b800(&local_180);
  FUN_00414480(&local_178);
  FUN_0041b800(&local_170);
  FUN_00414480(&local_168);
  FUN_00417840(&local_160,&LAB_00b9fca0,2);
  FUN_00414480(&local_150);
  FUN_00417840(&local_148,&LAB_00b9fca0,2);
  FUN_00414480(&local_138);
  FUN_00414480(&local_110);
  FUN_0041b800(&local_108);
  FUN_00414480(&local_30);
  FUN_0041b800(&local_res18);
  FUN_0041b800(&local_res20);
  return;
}

