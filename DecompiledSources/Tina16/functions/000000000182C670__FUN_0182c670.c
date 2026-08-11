/* Ghidra address: 0182c670 */
/* Ghidra symbol: FUN_0182c670 */


undefined8
FUN_0182c670(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_258 [32];
  undefined8 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 *local_80;
  undefined2 local_6a;
  undefined8 local_68;
  short local_5a;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_80 = auStack_258;
  local_218 = 0;
  local_230 = 0;
  uStack_228 = 0;
  uStack_220 = 0;
  local_238 = 0;
  local_1f8 = 0;
  local_210 = 0;
  uStack_208 = 0;
  uStack_200 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  local_1f0 = 0;
  uStack_1e8 = 0;
  uStack_1e0 = 0;
  local_1a0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  local_1c0 = 0;
  local_190 = 0;
  uStack_188 = 0;
  uStack_180 = 0;
  local_198 = 0;
  local_178 = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  local_158 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  local_160 = 0;
  local_138 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  local_140 = 0;
  local_118 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  local_120 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  iVar1 = FUN_00416db0(param_5,&DAT_0182d094);
  if (iVar1 == 0) {
    FUN_018493d0(param_6,&local_98,0);
    FUN_018493d0(param_6,&local_b0,1);
    FUN_0046f1c0(&local_98,&local_b0);
    FUN_01849420(param_6,0,&local_98);
  }
  else {
    iVar1 = FUN_00416db0(param_5,&DAT_0182d0a8);
    if (iVar1 == 0) {
      FUN_018493d0(param_6,&local_c8,0);
      FUN_018493d0(param_6,&local_e0,1);
      FUN_0046f1e0(&local_c8,&local_e0);
      FUN_01849420(param_6,0,&local_c8);
    }
    else {
      iVar1 = FUN_00416db0(param_5,L"RAISEEXCEPTION");
      if (iVar1 == 0) {
        FUN_018493d0(param_6,&local_f8,0);
        FUN_00467e90(&local_100,&local_f8);
        uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,local_100);
        FUN_004134c0(uVar3);
      }
      else {
        iVar1 = FUN_00416db0(param_5,L"SHOWMESSAGE");
        if (iVar1 == 0) {
          FUN_018493d0(param_6,&local_118,0);
          FUN_00467e90(&local_120,&local_118);
          local_58 = local_120;
          FUN_0072d730(local_120,0xffffffff,0xffffffff);
        }
        else {
          iVar1 = FUN_00416db0(param_5,L"RANDOMIZE");
          if (iVar1 == 0) {
            FUN_00409e20();
          }
          else {
            iVar1 = FUN_00416db0(param_5,L"RANDOM");
            if (iVar1 == 0) {
              uVar3 = FUN_00409eb0();
              FUN_00468860(param_2,uVar3);
            }
            else {
              iVar1 = FUN_00416db0(param_5,L"VALIDINT");
              if (iVar1 == 0) {
                FUN_018493d0(param_6,&local_138,0);
                FUN_00467e90(&local_140,&local_138);
                uVar2 = FUN_018248a0(local_140);
                FUN_00468820(param_2,uVar2);
              }
              else {
                iVar1 = FUN_00416db0(param_5,L"VALIDFLOAT");
                if (iVar1 == 0) {
                  FUN_018493d0(param_6,&local_158,0);
                  FUN_00467e90(&local_160,&local_158);
                  uVar2 = FUN_01824920(local_160);
                  FUN_00468820(param_2,uVar2);
                }
                else {
                  iVar1 = FUN_00416db0(param_5,L"VALIDDATE");
                  if (iVar1 == 0) {
                    local_30 = 0;
                    uStack_28 = 0;
                    uStack_20 = 0;
                    FUN_018493d0(param_6,&local_30,0);
                    local_5a = (short)local_30;
                    FUN_00460ba0(&local_30);
                    if (local_5a == 7) {
                      FUN_00414480(&local_38);
                      FUN_018493d0(param_6,&local_178,0);
                      local_68 = FUN_00464c60(&local_178);
                      FUN_0044a2b0(&local_38,local_68,PTR_DAT_02004830);
                      uVar2 = FUN_018249b0(local_38);
                      FUN_00468820(param_2,uVar2);
                      FUN_00414480(&local_38);
                    }
                    else {
                      FUN_018493d0(param_6,&local_190,0);
                      FUN_00467e90(&local_198,&local_190);
                      uVar2 = FUN_018249b0(local_198);
                      FUN_00468820(param_2,uVar2);
                    }
                  }
                  else {
                    iVar1 = FUN_00416db0(param_5,L"CREATEOLEOBJECT");
                    if (iVar1 == 0) {
                      FUN_018493d0(param_6,&local_1b8,0);
                      FUN_00467e90(&local_1c0,&local_1b8);
                      FUN_00624b70(&local_1a0,local_1c0);
                      FUN_00468a90(param_2,local_1a0);
                    }
                    else {
                      iVar1 = FUN_00416db0(param_5,L"VARARRAYCREATE");
                      if (iVar1 == 0) {
                        FUN_018493d0(param_6,&local_1d8,0);
                        FUN_018493d0(param_6,&local_1f0,1);
                        uVar2 = FUN_00462650(&local_1f0);
                        FUN_018245f0(param_2,&local_1d8,uVar2);
                      }
                      else {
                        iVar1 = FUN_00416db0(param_5,L"VARTOSTR");
                        if (iVar1 == 0) {
                          FUN_018493d0(param_6,&local_210,0);
                          FUN_0046c3f0(&local_1f8,&local_210);
                          FUN_00468a10(param_2,local_1f8);
                        }
                        else {
                          iVar1 = FUN_00416db0(param_5,L"VARTYPE");
                          if (iVar1 == 0) {
                            local_50 = 0;
                            uStack_48 = 0;
                            uStack_40 = 0;
                            FUN_018493d0(param_6,&local_50,0);
                            local_6a = (undefined2)local_50;
                            FUN_00460ba0(&local_50);
                            FUN_00468530(param_2,local_6a,2);
                          }
                          else {
                            iVar1 = FUN_00416db0(param_5,L"EXTRACTFILEPATH");
                            if (iVar1 == 0) {
                              FUN_018493d0(param_6,&local_230,0);
                              FUN_00467e90(&local_238,&local_230);
                              FUN_00441640(&local_218,local_238);
                              FUN_00468a10(param_2,local_218);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_00414480(&local_238);
  FUN_00460ba0(&local_230);
  FUN_00414480(&local_218);
  FUN_00460ba0(&local_210);
  FUN_00414480(&local_1f8);
  FUN_00417840(&local_1f0,&DAT_004013d8,2);
  FUN_00414480(&local_1c0);
  FUN_00460ba0(&local_1b8);
  FUN_0041b800(&local_1a0);
  FUN_00414480(&local_198);
  FUN_00417840(&local_190,&DAT_004013d8,2);
  FUN_00414480(&local_160);
  FUN_00460ba0(&local_158);
  FUN_00414480(&local_140);
  FUN_00460ba0(&local_138);
  FUN_00414480(&local_120);
  FUN_00460ba0(&local_118);
  FUN_00414480(&local_100);
  FUN_00417840(&local_f8,&DAT_004013d8,5);
  FUN_00414480(&local_38);
  return param_2;
}

