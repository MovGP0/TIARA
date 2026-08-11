/* Ghidra address: 01974220 */
/* Ghidra symbol: FUN_01974220 */


undefined8
FUN_01974220(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  longlong local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 local_178;
  longlong local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  longlong local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_70 = auStack_1f8;
  local_1c0 = 0;
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  local_1c8 = 0;
  local_1a0 = 0;
  local_1a8 = 0;
  local_190 = 0;
  uStack_188 = 0;
  uStack_180 = 0;
  local_198 = 0;
  local_170 = 0;
  local_178 = 0;
  local_168 = 0;
  local_158 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  local_160 = 0;
  local_138 = 0;
  local_140 = 0;
  local_128 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  local_130 = 0;
  local_108 = 0;
  local_110 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  local_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  local_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  iVar2 = FUN_00416db0(param_5,&DAT_01974ce8);
  if (iVar2 == 0) {
    FUN_0046cb70(&local_30,param_6,1,&DAT_01974cf0);
    FUN_0046cb70(&local_48,param_6,1,&DAT_01974cf4);
    FUN_0046cb70(&local_60,param_6,1,&DAT_01974cf8);
    FUN_00467e90(&local_90,&local_30);
    FUN_01970cf0(param_1,&local_88,local_90,*(undefined8 *)(*(longlong *)(param_1 + 0x248) + 0x118))
    ;
    FUN_00468820(&local_a8,1);
    cVar1 = FUN_0046f320(&local_88,&local_a8);
    if (cVar1 == '\0') {
      FUN_00467e90(&local_b8,&local_60);
      FUN_01970cf0(param_1,param_2,local_b8,*(undefined8 *)(*(longlong *)(param_1 + 0x248) + 0x118))
      ;
    }
    else {
      FUN_00467e90(&local_b0,&local_48);
      FUN_01970cf0(param_1,param_2,local_b0,*(undefined8 *)(*(longlong *)(param_1 + 0x248) + 0x118))
      ;
    }
    goto code_r0x01974ac8;
  }
  FUN_0184cda0(*(undefined8 *)(param_1 + 0x248),&local_c0);
  if (local_c0 != 0) {
    FUN_0184ed40(*(undefined8 *)(param_1 + 0x248),0);
  }
  iVar2 = FUN_00416db0(param_5,&DAT_01974d08);
  if (iVar2 != 0) {
    iVar2 = FUN_00416db0(param_5,&DAT_01974d1c);
    if (iVar2 != 0) {
      iVar2 = FUN_00416db0(param_5,&DAT_01974d30);
      if (iVar2 != 0) {
        iVar2 = FUN_00416db0(param_5,&DAT_01974d44);
        if (iVar2 != 0) {
          iVar2 = FUN_00416db0(param_5,L"COUNT");
          if (iVar2 == 0) {
            FUN_0046cb70(&local_30,param_6,1,&DAT_01974cf0);
            FUN_0046c3f0(&local_178,&local_30);
            FUN_0043ea00(&local_170,local_178);
            if (local_170 == 0) {
              FUN_00468530(&local_30,0,1);
            }
            else {
              FUN_00467e90(&local_198,&local_30);
              FUN_01970cf0(param_1,&local_190,local_198,
                           *(undefined8 *)(*(longlong *)(param_1 + 0x248) + 0x118));
              FUN_00461840(&local_30,&local_190);
            }
            FUN_0046cb70(&local_48,param_6,1,&DAT_01974cf4);
            FUN_0046c3f0(&local_1a8,&local_48);
            FUN_0043ea00(&local_1a0,local_1a8);
            if (local_1a0 == 0) {
              FUN_00468530(&local_48,0,1);
            }
            else {
              FUN_00467e90(&local_1c8,&local_48);
              FUN_01970cf0(param_1,&local_1c0,local_1c8,
                           *(undefined8 *)(*(longlong *)(param_1 + 0x248) + 0x118));
              FUN_00461840(&local_48,&local_1c0);
            }
            uVar3 = FUN_004634b0(&local_30);
            local_1d0 = FUN_00462650(&local_48);
            local_1d8 = uVar3;
            (**(code **)(**(longlong **)(param_1 + 0x1a0) + 0xa8))
                      (*(longlong **)(param_1 + 0x1a0),param_2,param_5,0);
          }
          goto code_r0x01974ac8;
        }
      }
    }
  }
  uVar3 = FUN_019774f0(param_1);
  uVar4 = FUN_0041b800(&local_68);
  cVar1 = FUN_00452370(uVar3,&DAT_01974d4c,uVar4);
  if (cVar1 == '\0') {
LAB_019746f2:
    FUN_0046cb70(&local_30,param_6,1,&DAT_01974cf0);
    FUN_0046cb70(&local_48,param_6,1,&DAT_01974cf4);
    FUN_0046c3f0(&local_110,&local_48);
    FUN_0043ea00(&local_108,local_110);
    if (local_108 == 0) {
      FUN_00468530(&local_48,0,1);
    }
    else {
      FUN_00467e90(&local_130,&local_48);
      FUN_01970cf0(param_1,&local_128,local_130,
                   *(undefined8 *)(*(longlong *)(param_1 + 0x248) + 0x118));
      FUN_00461840(&local_48,&local_128);
    }
    FUN_0046cb70(&local_60,param_6,1,&DAT_01974cf8);
    FUN_0046c3f0(&local_140,&local_60);
    FUN_0043ea00(&local_138,local_140);
    if (local_138 == 0) {
      FUN_00468530(&local_60,0,1);
    }
    else {
      FUN_00467e90(&local_160,&local_60);
      FUN_01970cf0(param_1,&local_158,local_160,
                   *(undefined8 *)(*(longlong *)(param_1 + 0x248) + 0x118));
      FUN_00461840(&local_60,&local_158);
    }
  }
  else {
    FUN_0046cb70(&local_e0,param_6,1,&DAT_01974cf4);
    FUN_0046c3f0(&local_c8,&local_e0);
    if (local_c8 != 0) goto LAB_019746f2;
    FUN_00468a10(&local_30,0);
    FUN_00468530(&local_60,0,1);
    FUN_0046cb70(&local_f8,param_6,1,&DAT_01974cf0);
    FUN_00467e90(&local_100,&local_f8);
    FUN_01970cf0(param_1,&local_48,local_100,*(undefined8 *)(*(longlong *)(param_1 + 0x248) + 0x118)
                );
  }
  FUN_00467e90(&local_168,&local_30);
  uVar3 = FUN_004634b0(&local_48);
  local_1d0 = FUN_00462650(&local_60);
  local_1d8 = uVar3;
  (**(code **)(**(longlong **)(param_1 + 0x1a0) + 0xa8))
            (*(longlong **)(param_1 + 0x1a0),param_2,param_5,local_168);
code_r0x01974ac8:
  FUN_00414480(&local_1c8);
  FUN_00460ba0(&local_1c0);
  FUN_00414560(&local_1a8,3);
  FUN_00460ba0(&local_190);
  FUN_00414560(&local_178,4);
  FUN_00460ba0(&local_158);
  FUN_00414560(&local_140,3);
  FUN_00460ba0(&local_128);
  FUN_00414560(&local_110,3);
  FUN_00417840(&local_f8,&DAT_004013d8,2);
  FUN_00414560(&local_c8,4);
  FUN_00460ba0(&local_a8);
  FUN_00414480(&local_90);
  FUN_00460ba0(&local_88);
  FUN_0041b800(&local_68);
  FUN_00417840(&local_60,&DAT_004013d8,3);
  return param_2;
}

