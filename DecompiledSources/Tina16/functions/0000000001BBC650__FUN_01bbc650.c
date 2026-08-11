/* Ghidra address: 01bbc650 */
/* Ghidra symbol: FUN_01bbc650 */


void FUN_01bbc650(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 auStack_278 [36];
  int local_254;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
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
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  longlong local_140;
  undefined8 local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  undefined1 local_118 [16];
  undefined1 local_108 [128];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined2 *local_68;
  short local_5a;
  int local_58;
  undefined1 local_50 [4];
  int local_4c;
  int local_48;
  int local_44;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_170 = auStack_278;
  local_250 = 0;
  local_248 = 0;
  local_240 = 0;
  local_238 = 0;
  local_230 = 0;
  local_228 = 0;
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
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  local_68 = (undefined2 *)0x0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  local_30 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_38 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_40 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_00414480(&local_80);
  uVar3 = FUN_01bbbcd0(&DAT_01bb9110,1);
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  cVar1 = FUN_00440a20(local_res10,1);
  if (cVar1 == '\0') {
    FUN_00416ba0(&local_178,L"File not found: ",local_res10);
    FUN_01bbc400(param_1,local_178);
  }
  (**(code **)(*local_30 + 0xd8))(local_30,local_res10);
  local_140 = *(longlong *)(param_1 + 0x10);
  iVar2 = (**(code **)(*local_30 + 0x28))();
  local_254 = iVar2 + -1;
  local_44 = 0;
  if (-1 < local_254) {
    do {
      local_254 = iVar2;
      *(int *)(local_140 + 0x10) = local_44 + 1;
      (**(code **)(*local_30 + 0x18))(local_30,&local_88,local_44);
      (**(code **)(*local_30 + 0x18))(local_30,&local_180,local_44);
      FUN_00414ad0(local_140 + 0x18,local_180);
      *(undefined4 *)(local_140 + 8) = 1;
      if ((*(longlong *)(local_140 + 0x18) != 0) &&
         (local_5a = FUN_010c9ea0(local_140), local_5a != *(short *)(local_140 + 0x20))) {
        if (local_5a == 0x5b) {
          FUN_010c9e60(local_140);
          FUN_010c9ef0(local_140,&local_188);
          FUN_0043e130(&local_80,local_188);
          FUN_010c9e60(local_140);
          iVar2 = FUN_00416db0(local_80,L"COMMENT CHAR");
          FUN_010ca040(local_140,&local_190,iVar2 != 0);
          iVar2 = FUN_00416db0(local_80,L"COMMENT CHAR");
          if (iVar2 == 0) {
            FUN_010ca270(local_140,&local_68,0);
            local_4c = FUN_004170c0(&DAT_01bbd868,local_68,1);
            FUN_00416dc0(&local_68,local_68,1,local_4c + -1);
            *(undefined2 *)(local_140 + 0x20) = *local_68;
          }
          cVar1 = FUN_01bbc460(param_1,local_80);
          if (cVar1 == '\0') {
            iVar2 = FUN_00416db0(local_80,L"COMPONENT");
            if (iVar2 == 0) {
              FUN_010ca270(local_140,&local_68,0);
              uVar3 = FUN_01bbbe00(*(undefined8 *)(param_1 + 0x48),local_68);
              *(undefined8 *)(param_1 + 8) = uVar3;
            }
            iVar2 = FUN_00416db0(local_80,L"MANUFACTURER");
            if (iVar2 == 0) {
              FUN_010ca270(local_140,&local_68,0);
              if (*(longlong *)(param_1 + 8) == 0) {
                FUN_01bbc400(param_1,L"Missing component");
              }
            }
            iVar2 = FUN_00416db0(local_80,L"PACKAGE");
            if (iVar2 == 0) {
              FUN_010ca270(local_140,&local_68,0);
              if (*(longlong *)(param_1 + 8) == 0) {
                FUN_01bbc400(param_1,L"Missing component");
              }
              uVar3 = FUN_01bbbb60(*(undefined8 *)(param_1 + 8),local_68);
              *(undefined8 *)(*(longlong *)(param_1 + 8) + 8) = uVar3;
            }
            iVar2 = FUN_00416db0(local_80,&DAT_01bbd90c);
            if (iVar2 == 0) {
              if (*(longlong *)(param_1 + 8) == 0) {
                FUN_01bbc400(param_1,L"Missing component");
              }
              (**(code **)(*local_38 + 0x90))(local_38);
              local_48 = 0;
              do {
                FUN_010ca8a0(local_140,&local_68,1);
                FUN_010ca040(local_140,&local_198,1);
                (**(code **)(*local_38 + 0x78))(local_38,local_68);
                local_48 = local_48 + 1;
              } while (local_48 != 2);
              cVar1 = FUN_010c9ed0(local_140);
              if (cVar1 == '\0') {
                local_48 = 0;
                do {
                  FUN_010ca8a0(local_140,&local_68,1);
                  FUN_010ca040(local_140,&local_1a0,1);
                  (**(code **)(*local_38 + 0x78))(local_38,local_68);
                  local_48 = local_48 + 1;
                } while (local_48 != 3);
              }
            }
            iVar2 = FUN_00416db0(local_80,L"MODEL");
            if (iVar2 == 0) {
              if (*(longlong *)(param_1 + 8) == 0) {
                FUN_01bbc400(param_1,L"Missing component");
              }
              FUN_010ca270(local_140,&local_68,0);
              FUN_010ca040(local_140,&local_1a8,1);
              local_128 = FUN_01bbbf40(*(undefined8 *)(param_1 + 0x48),local_68);
            }
            cVar1 = FUN_01bbaaa0(local_80,L"MODEL",L"SELECTOR");
            if (cVar1 != '\0') {
              if (*(longlong *)(param_1 + 8) == 0) {
                FUN_01bbc400(param_1,L"Missing component");
              }
              FUN_010ca270(local_140,&local_68,0);
              FUN_010ca040(local_140,&local_1b0,1);
              local_130 = FUN_01bbbfc0(*(undefined8 *)(param_1 + 0x48),local_68);
            }
            cVar1 = FUN_01bbaaa0(local_80,L"VOLTAGE",L"RANGE");
            if (cVar1 != '\0') {
              local_48 = 0;
              local_150 = local_108;
              do {
                uVar3 = FUN_010cb120(local_140,local_150);
                *(undefined8 *)(local_150 + -0x10) = uVar3;
                FUN_010ca040(local_140,&local_1b8,1);
                local_48 = local_48 + 1;
                local_150 = local_150 + 0x18;
              } while (local_48 != 3);
              uVar3 = FUN_01bbafb0(&DAT_01bb7eb0,1,3,local_118);
              *(undefined8 *)(local_128 + 0x70) = uVar3;
            }
          }
        }
        else {
          iVar2 = FUN_00416db0(local_80,L"PACKAGE");
          if (iVar2 == 0) {
            FUN_010ca8a0(local_140,&local_68,1);
            FUN_010ca040(local_140,&local_1c0,1);
            local_48 = 0;
            local_158 = local_108;
            do {
              uVar3 = FUN_010cb120(local_140,local_158);
              *(undefined8 *)(local_158 + -0x10) = uVar3;
              FUN_010ca040(local_140,&local_1c8,1);
              local_48 = local_48 + 1;
              local_158 = local_158 + 0x18;
            } while (local_48 != 3);
            uVar3 = FUN_01bbafb0(&DAT_01bb7eb0,1,3,local_118);
            FUN_01bbb390(*(undefined8 *)(*(longlong *)(param_1 + 8) + 8),local_68,uVar3);
          }
          iVar2 = FUN_00416db0(local_80,&DAT_01bbd90c);
          if (iVar2 == 0) {
            (**(code **)(*local_40 + 0x90))(local_40);
            local_48 = 0;
            do {
              FUN_010ca040(local_140,&local_1d0,1);
              FUN_010ca270(local_140,&local_68,0);
              FUN_010ca040(local_140,&local_1d8,1);
              (**(code **)(*local_40 + 0x78))(local_40,local_68);
              local_48 = local_48 + 1;
            } while (local_48 != 3);
            local_120 = FUN_01bbb420(&DAT_01bb83f0,1,local_38,local_40);
            cVar1 = FUN_010c9ed0(local_140);
            if (cVar1 == '\0') {
              local_48 = 0;
              local_160 = local_108;
              do {
                uVar3 = FUN_010cb120(local_140,local_160);
                *(undefined8 *)(local_160 + -0x10) = uVar3;
                FUN_010ca040(local_140,&local_1e0,1);
                local_48 = local_48 + 1;
                local_160 = local_160 + 0x18;
              } while (local_48 != 3);
              FUN_01bbb590(local_120,3,local_118);
            }
            FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10),local_120);
          }
          iVar2 = FUN_00416db0(local_80,L"MODEL");
          if (iVar2 == 0) {
            FUN_010ca270(local_140,&local_68,0);
            FUN_010ca040(local_140,&local_1e8,1);
            iVar2 = FUN_00416db0(local_68,L"Model_type");
            if (iVar2 == 0) {
              FUN_010ca270(local_140,&local_68,0);
              FUN_010ca040(local_140,&local_1f0,1);
              FUN_00414ad0(local_128 + 0x10,local_68);
            }
            iVar2 = FUN_00416db0(local_68,L"Polarity");
            if (iVar2 == 0) {
              FUN_010ca270(local_140,&local_68,0);
              FUN_010ca040(local_140,&local_1f8,1);
              FUN_00414ad0(local_128 + 0x18,local_68);
            }
            iVar2 = FUN_00416db0(local_68,L"C_comp");
            if (iVar2 == 0) {
              local_48 = 0;
              local_168 = local_108;
              do {
                uVar3 = FUN_010cb120(local_140,local_168);
                *(undefined8 *)(local_168 + -0x10) = uVar3;
                FUN_010ca040(local_140,&local_200,1);
                local_48 = local_48 + 1;
                local_168 = local_168 + 0x18;
              } while (local_48 != 3);
              FUN_01bbb7f0(local_128,3,local_118);
            }
            iVar2 = FUN_004170c0(L"Vinl",local_68,1);
            if (iVar2 < 1) {
              iVar2 = FUN_004170c0(L"Vinh",local_68,1);
              if (iVar2 < 1) goto LAB_01bbd426;
            }
            *(undefined4 *)(local_140 + 8) = 1;
            FUN_010ca8a0(local_140,&local_68,1);
            FUN_010ca040(local_140,&local_208,1);
            FUN_010c9e60(local_140);
            FUN_010ca040(local_140,&local_210,1);
            local_138 = FUN_010cb120(local_140,local_50);
            FUN_010ca040(local_140,&local_218,1);
            iVar2 = FUN_00416db0(local_68,L"Vinl");
            if (iVar2 == 0) {
              FUN_00414480(local_20);
              FUN_00448450(local_20,local_138,PTR_DAT_02004830);
              FUN_00414ad0(local_128 + 0x20,local_20[0]);
              FUN_00414480(local_20);
            }
            else {
              FUN_00414480(&local_28);
              FUN_00448450(&local_28,local_138,PTR_DAT_02004830);
              FUN_00414ad0(local_128 + 0x28,local_28);
              FUN_00414480(&local_28);
            }
          }
LAB_01bbd426:
          cVar1 = FUN_01bbaaa0(local_80,L"MODEL",L"SELECTOR");
          if (cVar1 != '\0') {
            FUN_010ca270(local_140,&local_70,0);
            FUN_010ca040(local_140,&local_220,1);
            FUN_010ca270(local_140,&local_78,1);
            FUN_010ca040(local_140,&local_228,1);
            FUN_01bbaee0(local_130,local_70,local_78);
          }
          iVar2 = FUN_00416db0(local_80,L"RAMP");
          if (iVar2 == 0) {
            FUN_010ca270(local_140,&local_68,0);
            FUN_010ca040(local_140,&local_230,1);
            iVar2 = FUN_00416db0(local_68,L"dV/dt_r");
            if ((iVar2 == 0) || (iVar2 = FUN_00416db0(local_68,L"dV/dt_f"), iVar2 == 0)) {
              local_48 = 0;
              local_168 = local_108;
              do {
                FUN_010caf00(local_140,local_168,local_168 + -0x10,local_168 + -8);
                FUN_010ca040(local_140,&local_238,1);
                local_48 = local_48 + 1;
                local_168 = local_168 + 0x18;
              } while (local_48 != 3);
              FUN_01bbb840(local_128,local_68,3,local_118);
            }
          }
          local_58 = FUN_01bbdba0(param_1,local_80,0);
          if (-1 < local_58) {
            FUN_010ca040(local_140,&local_240,1);
            local_138 = FUN_010cb120(local_140,local_50);
            FUN_010ca040(local_140,&local_248,1);
            local_48 = 0;
            local_168 = local_108;
            do {
              uVar3 = FUN_010cb120(local_140,local_168);
              *(undefined8 *)(local_168 + -0x10) = uVar3;
              FUN_010ca040(local_140,&local_250,1);
              local_48 = local_48 + 1;
              local_168 = local_168 + 0x18;
            } while (local_48 != 3);
            FUN_01bbb9b0(local_128,local_58,local_138,local_118);
          }
        }
      }
      local_44 = local_44 + 1;
      local_254 = local_254 + -1;
      iVar2 = local_254;
    } while (local_254 != 0);
  }
  FUN_00410f20(local_30);
  FUN_00410f20(local_38);
  FUN_00410f20(local_40);
  FUN_00414560(&local_250,0x1c);
  FUN_00414560(&local_88,5);
  FUN_00414560(&local_28,2);
  FUN_00414560(&local_res10,2);
  return;
}

