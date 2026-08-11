/* Ghidra address: 013e34c0 */
/* Ghidra symbol: FUN_013e34c0 */


undefined1
FUN_013e34c0(char param_1,longlong *param_2,int param_3,undefined8 param_4,char param_5,char param_6
            )

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  undefined8 local_res20;
  undefined1 auStack_298 [32];
  undefined8 local_278;
  undefined8 local_270;
  undefined1 local_268;
  int local_24c;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  longlong *local_198;
  undefined8 local_190;
  undefined8 local_188;
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
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  double local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  int local_38;
  int local_34;
  int local_30;
  undefined1 local_29;
  longlong local_28;
  int local_1c;
  
  local_130 = auStack_298;
  local_228 = 0;
  local_230 = 0;
  local_238 = 0;
  local_220 = 0;
  local_218 = 0;
  local_210 = 0;
  local_208 = 0;
  local_200 = 0;
  local_1f8 = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_188 = 0;
  local_190 = 0;
  local_198 = (longlong *)0x0;
  local_178 = 0;
  local_180 = 0;
  local_160 = 0;
  local_168 = 0;
  local_170 = 0;
  local_158 = 0;
  local_140 = 0;
  local_148 = 0;
  local_150 = 0;
  local_138 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  local_29 = 0;
  local_88 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  if (*(longlong *)PTR_DAT_02003118 != 0) {
    FUN_01cc6030(*(undefined8 *)PTR_DAT_02003118);
  }
  local_278 = 0;
  uVar4 = FUN_01cc3870(&PTR_FUN_01cb5bc0,1,4,0);
  *(undefined8 *)PTR_DAT_02003118 = uVar4;
  FUN_01cc6020(*(undefined8 *)PTR_DAT_02003118);
  local_28 = FUN_01af24a0(&DAT_01af0038,1,1,0);
  DAT_02108460 = '\0';
  FUN_0041ddd0(&local_138,&LAB_013e2598);
  FUN_0064de00(*(undefined8 *)(local_28 + 8),local_138);
  FUN_01af2a70(local_28,FUN_013e25b0);
  *(undefined8 *)(local_28 + 0x18) = 0x4059000000000000;
  FUN_01af29b0(local_28,1);
  FUN_01af29d0(local_28,0);
  uVar4 = FUN_01af2ae0(local_28);
  local_34 = 1;
  if (param_1 == '\x03') {
    iVar1 = (**(code **)(*param_2 + 0x28))(param_2);
    iVar1 = FUN_00b905f0(param_3 + 10,iVar1 + -1);
    local_30 = param_3;
    if (param_3 <= iVar1) {
      iVar1 = (iVar1 - param_3) + 1;
      do {
        (**(code **)(*param_2 + 0x18))(param_2,&local_140,local_30);
        FUN_00415dd0(&local_148,local_140,0);
        FUN_00415dd0(&local_150,local_res20,0);
        FUN_00d309d0(local_148,local_88,local_150);
        iVar2 = (**(code **)(*local_88 + 0x28))(local_88);
        if (iVar2 == 5) {
          (**(code **)(*local_88 + 0x18))(local_88,&local_158,1);
          uVar3 = FUN_0043fc00(local_158);
          local_34 = FUN_00b905e0(local_34,uVar3);
        }
        local_30 = local_30 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  else {
    if ((byte)(param_1 - 8U) < 8) {
      bVar6 = ((int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) << (param_1 - 8U & 0x1f) & 3U) != 0;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) {
      (**(code **)(*param_2 + 0x18))(param_2,&local_160,param_3 + 1);
      FUN_00415dd0(&local_168,local_160,0);
      FUN_00415dd0(&local_170,local_res20,0);
      FUN_00d309d0(local_168,local_88,local_170);
      iVar1 = (**(code **)(*local_88 + 0x28))(local_88);
      local_34 = (iVar1 + -1) / 2;
    }
  }
  local_90 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_30 = 1;
  iVar1 = local_34;
  if (0 < local_34) {
    do {
      FUN_0043f750(&local_180,local_30);
      FUN_00416ba0(&local_178,L"Channel_",local_180);
      (**(code **)(*local_90 + 0x80))(local_90,local_178,1);
      local_30 = local_30 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  local_278 = CONCAT71(local_278._1_7_,1);
  local_270 = 0;
  local_268 = 0;
  FUN_01cc3330(*(undefined8 *)(*(longlong *)PTR_DAT_02003118 + 8),local_34,local_90,2);
  FUN_00410f20(local_90);
  local_24c = (**(code **)(*param_2 + 0x28))(param_2);
  local_24c = local_24c + -1;
  local_1c = param_3;
  if (param_3 <= local_24c) {
    local_24c = (local_24c - param_3) + 1;
    do {
      if (DAT_02108460 != '\0') break;
      iVar1 = (**(code **)(*param_2 + 0x28))(param_2);
      lVar5 = FUN_0040c770((double)(local_1c * 100) / (double)(iVar1 - param_3));
      FUN_01af2990(local_28,(double)lVar5);
      FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
      (**(code **)(*param_2 + 0x18))(param_2,&local_188,local_1c);
      FUN_00415dd0(&local_190,local_188,0);
      FUN_00415dd0(&local_198,local_res20,0);
      uVar4 = FUN_00d309d0(local_190,local_88,local_198);
      if ((param_1 == '\x03') &&
         (uVar4 = (**(code **)(*local_88 + 0x28))(local_88), (int)uVar4 == 5)) {
        (**(code **)(*local_88 + 0x18))(local_88,&local_1a0,0);
        local_b0 = local_1a0;
        local_50 = FUN_00448650(local_1a0,PTR_DAT_02004830);
        (**(code **)(*local_88 + 0x18))(local_88,&local_1a8,1);
        local_38 = FUN_0043fc00(local_1a8);
        (**(code **)(*local_88 + 0x18))(local_88,&local_1b0,2);
        local_b8 = local_1b0;
        local_60 = FUN_00448650(local_1b0,PTR_DAT_02004830);
        (**(code **)(*local_88 + 0x18))(local_88,&local_1b8,3);
        local_c0 = local_1b8;
        FUN_00448650(local_1b8,PTR_DAT_02004830);
        (**(code **)(*local_88 + 0x18))(local_88,&local_1c0,4);
        local_c8 = local_1c0;
        local_70 = (double)FUN_00448650(local_1c0,PTR_DAT_02004830);
        if ((local_38 == 1) || (local_1c == param_3)) {
          FUN_01cc47e0(*(undefined8 *)PTR_DAT_02003118,local_50);
        }
        FUN_01cc48a0(*(undefined8 *)PTR_DAT_02003118,local_38 + -1,local_60,
                     local_70 * 0.017453292519943295);
      }
      else if ((param_1 == '\x04') &&
              (uVar4 = (**(code **)(*local_88 + 0x28))(local_88), (int)uVar4 == 3)) {
        (**(code **)(*local_88 + 0x18))(local_88,&local_1c8,0);
        local_d0 = local_1c8;
        local_50 = FUN_00448650(local_1c8,PTR_DAT_02004830);
        (**(code **)(*local_88 + 0x18))(local_88,&local_1d0,1);
        local_d8 = local_1d0;
        local_68 = FUN_00448650(local_1d0,PTR_DAT_02004830);
        (**(code **)(*local_88 + 0x18))(local_88,&local_1d8,2);
        local_e0 = local_1d8;
        local_70 = (double)FUN_00448650(local_1d8,PTR_DAT_02004830);
        FUN_01cc47e0(*(undefined8 *)PTR_DAT_02003118,local_50);
        uVar4 = FUN_00c43d30(local_68);
        FUN_01cc48a0(*(undefined8 *)PTR_DAT_02003118,0,uVar4,local_70 * 0.017453292519943295);
      }
      else {
        if ((byte)(param_1 - 8U) < 8) {
          bVar6 = ((int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) << (param_1 - 8U & 0x1f) & 3U) !=
                  0;
        }
        else {
          bVar6 = false;
        }
        if (bVar6) {
          (**(code **)(*local_88 + 0x18))(local_88,&local_1e0,0);
          local_e8 = local_1e0;
          local_50 = FUN_00448650(local_1e0,PTR_DAT_02004830);
          FUN_01cc47e0(*(undefined8 *)PTR_DAT_02003118,local_50);
          local_30 = 1;
          while (iVar1 = (**(code **)(*local_88 + 0x28))(local_88), local_30 < iVar1 + -1) {
            (**(code **)(*local_88 + 0x18))(local_88,&local_1e8,local_30);
            local_f0 = local_1e8;
            local_58 = FUN_00448650(local_1e8,PTR_DAT_02004830);
            if (param_5 != '\0') {
              local_58 = FUN_00c43d30(local_58);
            }
            (**(code **)(*local_88 + 0x18))(local_88,&local_1f0,local_30 + 1);
            local_f8 = local_1f0;
            local_70 = (double)FUN_00448650(local_1f0,PTR_DAT_02004830);
            FUN_01cc48a0(*(undefined8 *)PTR_DAT_02003118,(longlong)(local_30 + -1) / 2 & 0xffffffff,
                         local_58,local_70 * 0.017453292519943295);
            local_30 = local_30 + 2;
          }
        }
        else if ((param_1 == '\x05') || (param_1 == '\x06')) {
          (**(code **)(*local_88 + 0x18))(local_88,&local_1f8,0);
          local_100 = local_1f8;
          local_50 = FUN_00448650(local_1f8,PTR_DAT_02004830);
          if (param_1 == '\x05') {
            (**(code **)(*local_88 + 0x18))(local_88,&local_200,1);
            local_108 = local_200;
            FUN_00448650(local_200,PTR_DAT_02004830);
            local_60 = FUN_00c43d30();
            (**(code **)(*local_88 + 0x18))(local_88,&local_208,2);
            local_110 = local_208;
            local_70 = (double)FUN_00448650(local_208,PTR_DAT_02004830);
          }
          else {
            (**(code **)(*local_88 + 0x18))(local_88,&local_210,2);
            local_118 = local_210;
            FUN_00448650(local_210,PTR_DAT_02004830);
            local_60 = FUN_00c43d30();
            (**(code **)(*local_88 + 0x18))(local_88,&local_218,3);
            local_120 = local_218;
            local_70 = (double)FUN_00448650(local_218,PTR_DAT_02004830);
          }
          FUN_01cc47e0(*(undefined8 *)PTR_DAT_02003118,local_50);
          FUN_01cc48a0(*(undefined8 *)PTR_DAT_02003118,0,local_60,local_70 * 0.017453292519943295);
        }
      }
      local_1c = local_1c + 1;
      local_24c = local_24c + -1;
    } while (local_24c != 0);
  }
  FUN_00410f20(local_28);
  if (DAT_02108460 == '\0') {
    local_29 = 1;
    if (param_6 == '\0') {
      local_278 = CONCAT71(local_278._1_7_,1);
      FUN_013d4bc0(*(undefined8 *)PTR_DAT_02003118,4,2,0);
    }
    else {
      local_98 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      FUN_01cc5c60(*(undefined8 *)PTR_DAT_02003118);
      local_a0 = FUN_01cc5cc0(*(undefined8 *)PTR_DAT_02003118);
      while (local_a0 != 0) {
        FUN_01cc0ae0(local_a0,&local_220);
        (**(code **)(*local_98 + 0x80))(local_98,local_220,local_a0);
        local_a0 = FUN_01cc5cc0(*(undefined8 *)PTR_DAT_02003118);
      }
      local_29 = FUN_013e2500(*(undefined8 *)PTR_DAT_02003118,local_98,0,0);
      FUN_00410f20(local_98);
    }
  }
  else {
    FUN_00410f20(*(undefined8 *)PTR_DAT_02003118);
    *(undefined8 *)PTR_DAT_02003118 = 0;
  }
  FUN_00410f20(local_88);
  FUN_00414560(&local_238,0x14);
  FUN_00414590(&local_198,2);
  FUN_00414560(&local_188,3);
  FUN_00414590(&local_170,2);
  FUN_00414560(&local_160,2);
  FUN_00414590(&local_150,2);
  FUN_00414560(&local_140,2);
  FUN_00414480(&local_res20);
  return local_29;
}

