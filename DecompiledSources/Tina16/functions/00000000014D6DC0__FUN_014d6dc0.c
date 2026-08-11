/* Ghidra address: 014d6dc0 */
/* Ghidra symbol: FUN_014d6dc0 */


void FUN_014d6dc0(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined4 param_4,
                 undefined1 param_5,undefined1 param_6,undefined1 param_7,double *param_8,
                 longlong *param_9)

{
  undefined1 uVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  char cVar5;
  double *pdVar6;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  double local_248;
  double local_240;
  double local_238;
  double local_230;
  double local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  double local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  double local_190;
  undefined8 local_188;
  undefined8 local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  double local_d8 [4];
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  undefined8 local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_30;
  
  pdVar6 = local_d8;
  for (lVar4 = 0x16; lVar4 != 0; lVar4 = lVar4 + -1) {
    *pdVar6 = *param_8;
    param_8 = param_8 + 1;
    pdVar6 = pdVar6 + 1;
  }
  if ((((((local_b0 == 0.0) && (local_a8 == 0.0)) && (local_a0 == 0.0)) &&
       ((local_90 == 0.0 && (local_88 == 0.0)))) &&
      ((local_80 == 0.0 && ((local_78 == 0.0 && (local_70 == 0.0)))))) &&
     ((local_d8[3] == 0.0 && (local_b8 == 0.0)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(*param_9 + 4) = uVar1;
  *(bool *)(*param_9 + 6) = local_70 != 0.0;
  local_190 = local_d8[0];
  local_188 = local_d8[1];
  cVar5 = *(char *)(*param_9 + 4);
  if (cVar5 == '\0') {
    local_180 = local_d8[2];
  }
  else {
    local_180 = 0x46293e5939a08cea;
  }
  local_178 = local_90;
  local_170 = local_88;
  local_168 = local_80;
  local_160 = local_78;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_140 = local_68;
  local_138 = local_60;
  local_130 = local_58;
  local_128 = local_30;
  local_120 = 0;
  if (local_70 != 0.0) {
    local_208 = 0x3ff0000000000000;
    local_200 = 0x46293e5939a08cea;
    if (cVar5 == '\0') {
      local_1f8 = local_d8[2];
    }
    else {
      local_1f8 = 0x46293e5939a08cea;
    }
    local_1f0 = 0;
    local_1e8 = 0;
    local_1e0 = 0;
    local_1d8 = local_70;
    local_1d0 = 0;
    local_1c8 = 0;
    local_1c0 = 0;
    local_1b8 = local_68;
    local_1b0 = local_60;
    local_1a8 = 0;
    local_1a0 = 0;
    local_198 = 0;
  }
  if (cVar5 == '\0') {
    cVar5 = FUN_016e9d10(param_1,1);
    cVar5 = cVar5 + '\x01';
    *(undefined4 *)*param_9 = 0xb8;
    FUN_016ee330(param_1,param_9,*(undefined2 *)*param_9,0);
    FUN_014d12e0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,cVar5,&local_190,
                 *param_9 + 8);
  }
  else {
    local_260 = 0x3ff0000000000000;
    local_258 = 0;
    local_250 = local_d8[2];
    local_248 = local_d8[3];
    local_240 = local_b8;
    local_238 = local_b0;
    local_230 = local_a8;
    local_228 = local_a0;
    local_220 = local_98;
    local_218 = 0;
    local_210 = 0;
    cVar2 = FUN_016e9d10(param_1,2);
    cVar5 = cVar2 + '\x01';
    cVar2 = cVar2 + '\x02';
    *(undefined4 *)*param_9 = 0x128;
    cVar3 = cVar2;
    if (*(char *)(*param_9 + 6) != '\0') {
      *(int *)*param_9 = *(int *)*param_9 + 0xb0;
      cVar3 = FUN_016e9d10(param_1,1);
      cVar3 = cVar3 + '\x01';
    }
    FUN_016ee330(param_1,param_9,*(undefined2 *)*param_9,0);
    FUN_014d12e0(param_1,param_2,param_3,param_4,cVar2,param_6,param_7,cVar5,&local_190,*param_9 + 8
                );
    if (*(char *)(*param_9 + 6) != '\0') {
      FUN_014d12e0(param_1,param_2,cVar2,cVar5,cVar3,param_6,param_7,cVar5,&local_208,
                   *param_9 + 0x128);
    }
    FUN_014d60c0(param_1,cVar3,param_5,param_6,param_7,cVar5,&local_260,*param_9 + 0xb8);
  }
  cVar3 = FUN_016e9e80(param_1,3);
  cVar2 = cVar3 + '\x01';
  FUN_016ebdd0(param_1,cVar2,cVar5,0,1);
  FUN_016ec970(param_1,cVar3 + '\x02',param_6,0,cVar2);
  FUN_016ec970(param_1,cVar3 + '\x03',param_7,0,cVar2);
  FUN_016ed320(param_1,cVar2,0,0,0);
  FUN_016ed220(param_1,cVar3 + '\x02',0x3fe0000000000000,0);
  FUN_016ed220(param_1,cVar3 + '\x03',0x3fe0000000000000,0);
  return;
}

