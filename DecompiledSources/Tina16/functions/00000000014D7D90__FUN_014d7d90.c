/* Ghidra address: 014d7d90 */
/* Ghidra symbol: FUN_014d7d90 */


void FUN_014d7d90(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined4 param_4,
                 undefined1 param_5,undefined1 param_6,undefined1 param_7,double *param_8,
                 longlong *param_9)

{
  undefined1 uVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  char cVar5;
  double *pdVar6;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  double local_260;
  double local_258;
  double local_250;
  double local_248;
  double local_240;
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
  double local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  undefined8 local_158;
  undefined8 local_150;
  double local_148;
  undefined8 local_140;
  undefined8 local_138;
  double local_f0 [4];
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  undefined8 local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  double local_58;
  undefined8 local_30;
  
  pdVar6 = local_f0;
  for (lVar4 = 0x19; lVar4 != 0; lVar4 = lVar4 + -1) {
    *pdVar6 = *param_8;
    param_8 = param_8 + 1;
    pdVar6 = pdVar6 + 1;
  }
  if ((((((local_c8 == 0.0) && (local_c0 == 0.0)) && (local_b8 == 0.0)) &&
       (((local_a8 == 0.0 && (local_a0 == 0.0)) &&
        ((local_98 == 0.0 && ((local_90 == 0.0 && (local_88 == 0.0)))))))) && (local_80 == 0.0)) &&
     ((local_f0[3] == 0.0 && (local_d0 == 0.0)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(*param_9 + 4) = uVar1;
  if (((local_90 == 0.0) && (local_88 == 0.0)) && (local_80 == 0.0)) {
    cVar5 = '\0';
  }
  else {
    cVar5 = '\x01';
  }
  *(char *)(*param_9 + 6) = cVar5;
  local_1a8 = local_f0[0];
  local_1a0 = local_f0[1];
  cVar3 = *(char *)(*param_9 + 4);
  if (cVar3 == '\0') {
    local_198 = local_f0[2];
  }
  else {
    local_198 = 0x46293e5939a08cea;
  }
  local_190 = local_a8;
  if (local_a8 <= 0.0) {
    if (local_188 <= 0.0) {
      if (0.0 < local_180) {
        local_190 = local_180;
      }
    }
    else {
      local_190 = local_188;
    }
  }
  local_188 = local_a0;
  local_180 = local_98;
  local_178 = ((local_190 / 31.41592653589793) * 10.0) / local_f0[0];
  local_170 = local_90;
  local_168 = local_88;
  local_160 = local_80;
  local_158 = local_68;
  local_150 = local_60;
  local_148 = local_58 + local_78;
  local_140 = local_30;
  local_138 = local_70;
  if (cVar5 != '\0') {
    local_220 = 0x3ff0000000000000;
    local_218 = 0x46293e5939a08cea;
    if (cVar3 == '\0') {
      local_210 = local_f0[2];
    }
    else {
      local_210 = 0x46293e5939a08cea;
    }
    local_208 = 0;
    local_200 = 0;
    local_1f8 = 0;
    local_1f0 = 0;
    local_1e8 = 0;
    local_1e0 = 0;
    local_1d8 = 0;
    local_1d0 = local_68;
    local_1c8 = local_60;
    local_1c0 = 0;
    local_1b8 = 0;
    local_1b0 = 0;
  }
  if (cVar3 == '\0') {
    cVar5 = FUN_016e9d10(param_1,1);
    cVar5 = cVar5 + '\x01';
    *(undefined4 *)*param_9 = 0xb8;
    FUN_016ee330(param_1,param_9,*(undefined2 *)*param_9,0);
    FUN_014d12e0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,cVar5,&local_1a8,
                 *param_9 + 8);
  }
  else {
    local_278 = 0x3ff0000000000000;
    local_270 = 0;
    local_268 = local_f0[2];
    local_260 = local_f0[3];
    local_258 = local_d0;
    local_250 = local_c8;
    local_248 = local_c0;
    local_240 = local_b8;
    local_238 = local_b0;
    local_230 = 0;
    local_228 = 0;
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
    FUN_014d12e0(param_1,param_2,param_3,param_4,cVar2,param_6,param_7,cVar5,&local_1a8,*param_9 + 8
                );
    if (*(char *)(*param_9 + 6) != '\0') {
      FUN_014d12e0(param_1,param_2,cVar2,cVar5,cVar3,param_6,param_7,cVar5,&local_220,
                   *param_9 + 0x128);
    }
    FUN_014d60c0(param_1,cVar3,param_5,param_6,param_7,cVar5,&local_278,*param_9 + 0xb8);
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

