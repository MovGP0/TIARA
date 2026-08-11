/* Ghidra address: 01878db0 */
/* Ghidra symbol: FUN_01878db0 */


void FUN_01878db0(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
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
  int local_c8 [2];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
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
  local_140 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  local_158 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  local_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  local_128 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  local_40 = *param_2;
  uStack_38 = param_2[1];
  uStack_30 = param_2[2];
  FUN_0046bd60(&local_40);
  if (((*(longlong *)(param_1 + 0x10) != 0) &&
      (*(char *)(*(longlong *)(param_1 + 0x10) + 0xc5) == '\0')) &&
     (*(char *)(param_1 + 0x18) == '\0')) goto LAB_0187972b;
  FUN_00414ad0(*(longlong *)(param_1 + 0xd8) + 0x158,*(undefined8 *)(param_1 + 0xc0));
  if (*(char *)(param_1 + 8) == '\x04') {
    FUN_0046f180(&local_40);
  }
  else {
    FUN_0046f180(&local_60);
    cVar2 = FUN_0046f320(&local_40,&local_60);
    if (cVar2 != '\0') {
      FUN_01970cf0(*(undefined8 *)(param_1 + 0xd8),&local_40,*(undefined8 *)(param_1 + 0x20),0);
    }
  }
  sVar3 = FUN_0046c220(&local_40);
  if (sVar3 == 0xb) {
    FUN_00468820(&local_78,1);
    cVar2 = FUN_0046f320(&local_40,&local_78);
    if (cVar2 != '\0') {
      FUN_00468530(&local_40,1,1);
    }
  }
  if (*(int *)(param_1 + 0x100) < 1) {
    if (*(char *)(param_1 + 0x80) == '\0') {
      *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x48);
      FUN_00461840(param_1 + 0x88,param_1 + 0x68);
      if (*(char *)(param_1 + 8) == '\x01') {
        FUN_0046f180(&local_230);
        cVar2 = FUN_0046f340(&local_40,&local_230);
        if (cVar2 != '\0') goto LAB_01879617;
      }
      else {
LAB_01879617:
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
      }
      FUN_0046f180(&local_248);
      cVar2 = FUN_0046f320(param_1 + 0x68,&local_248);
      if (cVar2 == '\0') {
        FUN_0046f180(&local_260);
        cVar2 = FUN_0046f340(&local_40,&local_260);
        if (cVar2 != '\0') {
          bVar1 = *(byte *)(param_1 + 8);
          if (bVar1 < 2) {
            FUN_00461840(&local_278,param_1 + 0x68);
            FUN_0046f1c0(&local_278,&local_40);
            FUN_00461840(param_1 + 0x68,&local_278);
          }
          else if (bVar1 == 2) {
            cVar2 = FUN_0046f360(&local_40,param_1 + 0x68);
            if (cVar2 != '\0') {
              FUN_00461840(param_1 + 0x68,&local_40);
            }
          }
          else if (bVar1 == 3) {
            cVar2 = FUN_0046f3b0(&local_40,param_1 + 0x68);
            if (cVar2 != '\0') {
              FUN_00461840(param_1 + 0x68,&local_40);
            }
          }
        }
      }
      else {
        FUN_00461840(param_1 + 0x68,&local_40);
      }
      goto LAB_0187972b;
    }
    if (*(char *)(param_1 + 8) == '\x01') {
      FUN_0046f180(&local_1d0);
      cVar2 = FUN_0046f340(&local_40,&local_1d0);
      if (cVar2 != '\0') goto LAB_01879476;
    }
    else {
LAB_01879476:
      *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
    }
    FUN_0046f180(&local_1e8);
    cVar2 = FUN_0046f320(param_1 + 0xe8,&local_1e8);
    if (cVar2 == '\0') {
      FUN_0046f180(&local_200);
      cVar2 = FUN_0046f340(&local_40,&local_200);
      if (cVar2 != '\0') {
        bVar1 = *(byte *)(param_1 + 8);
        if (bVar1 < 2) {
          FUN_00461840(&local_218,param_1 + 0xe8);
          FUN_0046f1c0(&local_218,&local_40);
          FUN_00461840(param_1 + 0xe8,&local_218);
        }
        else if (bVar1 == 2) {
          cVar2 = FUN_0046f360(&local_40,param_1 + 0xe8);
          if (cVar2 != '\0') {
            FUN_00461840(param_1 + 0xe8,&local_40);
          }
        }
        else if (bVar1 == 3) {
          cVar2 = FUN_0046f3b0(&local_40,param_1 + 0xe8);
          if (cVar2 != '\0') {
            FUN_00461840(param_1 + 0xe8,&local_40);
          }
        }
      }
    }
    else {
      FUN_00461840(param_1 + 0xe8,&local_40);
    }
    goto LAB_0187972b;
  }
  cVar2 = FUN_0046c3d0(param_1 + 0x30);
  if (cVar2 != '\0') {
    FUN_0046c750(&local_90,&LAB_018797d0,1,0xc);
    FUN_00461840(param_1 + 0x30,&local_90);
    FUN_0046c750(&local_a8,&LAB_018797d0,1,0xc);
    FUN_00461840(param_1 + 0x50,&local_a8);
    iVar4 = 0;
    do {
      FUN_0046f180(&local_c0);
      local_c8[0] = iVar4;
      FUN_0046ccc0(param_1 + 0x30,&local_c0,1,local_c8);
      FUN_00468530(&local_e0,0,1);
      local_c8[0] = iVar4;
      FUN_0046ccc0(param_1 + 0x50,&local_e0,1,local_c8);
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0x3e9);
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_0046f180(&local_f8);
    cVar2 = FUN_0046f340(&local_40,&local_f8);
    if (cVar2 != '\0') goto LAB_01879154;
  }
  else {
LAB_01879154:
    local_c8[0] = *(int *)(param_1 + 0x100);
    FUN_0046cb70(&local_110,param_1 + 0x50,1,local_c8);
    FUN_00468530(&local_128,1,1);
    FUN_0046f1c0(&local_110,&local_128);
    local_c8[0] = *(int *)(param_1 + 0x100);
    FUN_0046ccc0(param_1 + 0x50,&local_110,1,local_c8);
  }
  local_c8[0] = *(int *)(param_1 + 0x100);
  FUN_0046cb70(&local_140,param_1 + 0x30,1,local_c8);
  FUN_0046f180(&local_158);
  cVar2 = FUN_0046f320(&local_140,&local_158);
  if (cVar2 == '\0') {
    FUN_0046f180(&local_170);
    cVar2 = FUN_0046f340(&local_40,&local_170);
    if (cVar2 != '\0') {
      bVar1 = *(byte *)(param_1 + 8);
      if (bVar1 < 2) {
        local_c8[0] = *(int *)(param_1 + 0x100);
        FUN_0046cb70(&local_188,param_1 + 0x30,1,local_c8);
        FUN_0046f1c0(&local_188,&local_40);
        local_c8[0] = *(int *)(param_1 + 0x100);
        FUN_0046ccc0(param_1 + 0x30,&local_188,1,local_c8);
      }
      else if (bVar1 == 2) {
        local_c8[0] = *(int *)(param_1 + 0x100);
        FUN_0046cb70(&local_1a0,param_1 + 0x30,1,local_c8);
        cVar2 = FUN_0046f360(&local_40,&local_1a0);
        if (cVar2 != '\0') {
          local_c8[0] = *(int *)(param_1 + 0x100);
          FUN_0046ccc0(param_1 + 0x30,&local_40,1,local_c8);
        }
      }
      else if (bVar1 == 3) {
        local_c8[0] = *(int *)(param_1 + 0x100);
        FUN_0046cb70(&local_1b8,param_1 + 0x30,1,local_c8);
        cVar2 = FUN_0046f3b0(&local_40,&local_1b8);
        if (cVar2 != '\0') {
          local_c8[0] = *(int *)(param_1 + 0x100);
          FUN_0046ccc0(param_1 + 0x30,&local_40,1,local_c8);
        }
      }
    }
  }
  else {
    local_c8[0] = *(int *)(param_1 + 0x100);
    FUN_0046ccc0(param_1 + 0x30,&local_40,1,local_c8);
  }
LAB_0187972b:
  FUN_00417840(&local_278,&DAT_004013d8,0x12);
  FUN_00417840(&local_c0,&DAT_004013d8,5);
  FUN_00460ba0(&local_40);
  return;
}

