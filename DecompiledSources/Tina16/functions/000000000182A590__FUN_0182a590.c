/* Ghidra address: 0182a590 */
/* Ghidra symbol: FUN_0182a590 */


undefined8
FUN_0182a590(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
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
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a [5];
  
  local_200 = 0;
  uStack_1f8 = 0;
  uStack_1f0 = 0;
  local_218 = 0;
  uStack_210 = 0;
  uStack_208 = 0;
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
  local_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  local_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  iVar2 = FUN_00416db0(param_5,L"ENCODEDATE");
  if (iVar2 == 0) {
    FUN_018493d0(param_6,&local_50,0);
    uVar3 = FUN_00462650(&local_50);
    FUN_018493d0(param_6,&local_68,1);
    uVar4 = FUN_00462650(&local_68);
    FUN_018493d0(param_6,&local_80,2);
    uVar5 = FUN_00462650(&local_80);
    uVar7 = FUN_00448c80(uVar3,uVar4,uVar5);
    FUN_004688a0(param_2,uVar7);
  }
  else {
    iVar2 = FUN_00416db0(param_5,L"ENCODETIME");
    if (iVar2 == 0) {
      FUN_018493d0(param_6,&local_98,0);
      uVar3 = FUN_00462650(&local_98);
      FUN_018493d0(param_6,&local_b0,1);
      uVar4 = FUN_00462650(&local_b0);
      FUN_018493d0(param_6,&local_c8,2);
      uVar5 = FUN_00462650(&local_c8);
      FUN_018493d0(param_6,&local_e0,3);
      uVar6 = FUN_00462650(&local_e0);
      uVar7 = FUN_00448a90(uVar3,uVar4,uVar5,uVar6);
      FUN_004688a0(param_2,uVar7);
    }
    else {
      iVar2 = FUN_00416db0(param_5,L"DECODEDATE");
      if (iVar2 == 0) {
        FUN_018493d0(param_6,&local_f8,0);
        uVar7 = FUN_00464c60(&local_f8);
        FUN_00448e20(uVar7,local_2a,&local_2c,&local_2e);
        FUN_00468530(&local_110,local_2a[0],2);
        FUN_01849420(param_6,1,&local_110);
        FUN_00468530(&local_128,local_2c,2);
        FUN_01849420(param_6,2,&local_128);
        FUN_00468530(&local_140,local_2e,2);
        FUN_01849420(param_6,3,&local_140);
      }
      else {
        iVar2 = FUN_00416db0(param_5,L"DECODETIME");
        if (iVar2 == 0) {
          FUN_018493d0(param_6,&local_158,0);
          uVar7 = FUN_00464c60(&local_158);
          FUN_00448ad0(uVar7,local_2a,&local_2c,&local_2e,&local_30);
          FUN_00468530(&local_170,local_2a[0],2);
          FUN_01849420(param_6,1,&local_170);
          FUN_00468530(&local_188,local_2c,2);
          FUN_01849420(param_6,2,&local_188);
          FUN_00468530(&local_1a0,local_2e,2);
          FUN_01849420(param_6,3,&local_1a0);
          FUN_00468530(&local_1b8,local_30,2);
          FUN_01849420(param_6,4,&local_1b8);
        }
        else {
          iVar2 = FUN_00416db0(param_5,L"DATE");
          if (iVar2 == 0) {
            uVar7 = FUN_00448e70();
            FUN_004688a0(param_2,uVar7);
          }
          else {
            iVar2 = FUN_00416db0(param_5,L"TIME");
            if (iVar2 == 0) {
              uVar7 = FUN_00448ea0();
              FUN_004688a0(param_2,uVar7);
            }
            else {
              iVar2 = FUN_00416db0(param_5,&DAT_0182ad10);
              if (iVar2 == 0) {
                uVar7 = FUN_00448ed0();
                FUN_004688a0(param_2,uVar7);
              }
              else {
                iVar2 = FUN_00416db0(param_5,L"DAYOFWEEK");
                if (iVar2 == 0) {
                  FUN_018493d0(param_6,&local_1d0,0);
                  FUN_00464c60(&local_1d0);
                  uVar1 = FUN_00448e40();
                  FUN_00468530(param_2,uVar1,2);
                }
                else {
                  iVar2 = FUN_00416db0(param_5,L"ISLEAPYEAR");
                  if (iVar2 == 0) {
                    FUN_018493d0(param_6,&local_1e8,0);
                    uVar3 = FUN_00462650(&local_1e8);
                    uVar3 = FUN_00448b30(uVar3);
                    FUN_00468820(param_2,uVar3);
                  }
                  else {
                    iVar2 = FUN_00416db0(param_5,L"DAYSINMONTH");
                    if (iVar2 == 0) {
                      FUN_018493d0(param_6,&local_200,0);
                      uVar3 = FUN_00462650(&local_200);
                      FUN_018493d0(param_6,&local_218,1);
                      uVar4 = FUN_00462650(&local_218);
                      uVar3 = FUN_01824a40(uVar3,uVar4);
                      FUN_00468530(param_2,uVar3,0xfffffffffffffffc);
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
  FUN_00417840(&local_218,&DAT_004013d8,0x14);
  return param_2;
}

