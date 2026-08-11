/* Ghidra address: 014d75d0 */
/* Ghidra symbol: FUN_014d75d0 */


void FUN_014d75d0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5,undefined1 param_6,double *param_7,longlong *param_8)

{
  undefined1 uVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  double *pdVar5;
  undefined8 local_250;
  undefined8 local_248;
  double local_240;
  double local_238;
  double local_230;
  double local_228;
  double local_220;
  double local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  double local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  double local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  double local_188;
  undefined8 local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  double local_110;
  undefined8 local_108;
  double local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  double local_d0 [4];
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_30;
  
  pdVar5 = local_d0;
  for (lVar4 = 0x15; lVar4 != 0; lVar4 = lVar4 + -1) {
    *pdVar5 = *param_7;
    param_7 = param_7 + 1;
    pdVar5 = pdVar5 + 1;
  }
  *(undefined1 *)(*param_8 + 5) = 0;
  if ((((((local_a8 == 0.0) && (local_a0 == 0.0)) && (local_98 == 0.0)) &&
       ((local_90 == 0.0 && (local_88 == 0.0)))) &&
      ((local_80 == 0.0 && ((local_78 == 0.0 && (local_70 == 0.0)))))) &&
     ((local_d0[3] == 0.0 && (local_b0 == 0.0)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(*param_8 + 4) = uVar1;
  *(bool *)(*param_8 + 6) = local_70 != 0.0;
  local_188 = local_d0[0];
  local_180 = local_d0[1];
  cVar3 = *(char *)(*param_8 + 4);
  if (cVar3 == '\0') {
    local_178 = local_d0[2];
  }
  else {
    local_178 = 1e+30;
  }
  local_170 = local_90;
  local_168 = local_88;
  local_160 = local_80;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_158 = local_78;
  local_138 = local_68;
  local_130 = local_60;
  local_128 = local_58;
  local_120 = local_30;
  local_118 = 0;
  if (local_70 != 0.0) {
    local_200 = 0x3ff0000000000000;
    local_1f8 = 0x46293e5939a08cea;
    if (cVar3 == '\0') {
      local_1f0 = local_d0[2];
    }
    else {
      local_1f0 = 1e+30;
    }
    local_1e8 = 0;
    local_1e0 = 0;
    local_1d8 = 0;
    local_1d0 = local_70;
    local_1c8 = 0;
    local_1c0 = 0;
    local_1b8 = 0;
    local_1b0 = local_68;
    local_1a8 = local_60;
    local_1a0 = 0;
    local_198 = 0;
    local_190 = 0;
  }
  if (cVar3 == '\0') {
    if (1000000.0 <= local_178) {
      *(undefined4 *)*param_8 = 0xa8;
      FUN_016ee330(param_1,param_8,*(undefined2 *)*param_8,0);
      FUN_014d2420(param_1,param_2,param_3,param_4,param_5,param_6,&local_188,*param_8 + 8);
    }
    else {
      *(undefined1 *)(*param_8 + 5) = 1;
      local_110 = local_d0[0];
      local_108 = local_d0[1];
      local_100 = local_d0[2];
      local_f8 = local_68;
      local_f0 = local_60;
      local_e8 = local_58;
      local_e0 = local_30;
      local_d8 = 0;
      *(undefined4 *)*param_8 = 0x68;
      FUN_016ee330(param_1,param_8,*(undefined2 *)*param_8,0);
      FUN_014d4a40(param_1,param_2,param_3,param_4,param_5,param_6,&local_110,*param_8 + 8);
    }
  }
  else {
    local_250 = 0x3ff0000000000000;
    local_248 = 0;
    local_240 = local_d0[2];
    local_238 = local_d0[3];
    local_230 = local_b0;
    local_228 = local_a8;
    local_220 = local_a0;
    local_218 = local_98;
    local_210 = local_68;
    local_208 = local_60;
    *(undefined4 *)*param_8 = 0x118;
    cVar2 = FUN_016e9d10(param_1,1);
    cVar2 = cVar2 + '\x01';
    cVar3 = cVar2;
    if (*(char *)(*param_8 + 6) != '\0') {
      *(int *)*param_8 = *(int *)*param_8 + 0xa0;
      cVar3 = FUN_016e9d10(param_1,1);
      cVar3 = cVar3 + '\x01';
    }
    FUN_016ee330(param_1,param_8,*(undefined2 *)*param_8,0);
    FUN_014d2420(param_1,param_2,param_3,param_4,cVar2,param_6,&local_188,*param_8 + 8);
    if (*(char *)(*param_8 + 6) != '\0') {
      FUN_014d2420(param_1,param_2,cVar2,param_6,cVar3,param_6,&local_200,*param_8 + 0x118);
    }
    FUN_014d6960(param_1,cVar3,param_5,param_6,&local_250,*param_8 + 0xa8);
  }
  return;
}

