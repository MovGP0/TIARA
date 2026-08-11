/* Ghidra address: 014d8640 */
/* Ghidra symbol: FUN_014d8640 */


void FUN_014d8640(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5,undefined1 param_6,double *param_7,longlong *param_8)

{
  undefined1 uVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  double *pdVar5;
  double dVar6;
  undefined8 local_268;
  undefined8 local_260;
  double local_258;
  double local_250;
  double local_248;
  double local_240;
  double local_238;
  double local_230;
  double local_228;
  double local_220;
  undefined8 local_218;
  undefined8 local_210;
  double local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  double local_1c8;
  double local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  double local_1a0;
  undefined8 local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  undefined8 local_138;
  undefined8 local_130;
  double local_128;
  undefined8 local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  double local_e8 [4];
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  undefined8 local_70;
  double local_68;
  double local_60;
  double local_58;
  undefined8 local_30;
  
  pdVar5 = local_e8;
  for (lVar4 = 0x18; lVar4 != 0; lVar4 = lVar4 + -1) {
    *pdVar5 = *param_7;
    param_7 = param_7 + 1;
    pdVar5 = pdVar5 + 1;
  }
  *(undefined1 *)(*param_8 + 5) = 0;
  if ((((((local_c0 == 0.0) && (local_b8 == 0.0)) && (local_b0 == 0.0)) &&
       (((local_a8 == 0.0 && (local_a0 == 0.0)) &&
        ((local_98 == 0.0 && ((local_90 == 0.0 && (local_88 == 0.0)))))))) && (local_80 == 0.0)) &&
     ((local_e8[3] == 0.0 && (local_c8 == 0.0)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(*param_8 + 4) = uVar1;
  if (((local_90 == 0.0) && (local_88 == 0.0)) && (local_80 == 0.0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(*param_8 + 6) = uVar1;
  local_1a0 = local_e8[0];
  local_198 = local_e8[1];
  local_150 = local_68;
  local_148 = local_60;
  if (*(char *)(*param_8 + 4) == '\0') {
    local_190 = local_e8[2];
  }
  else {
    local_190 = 1e+30;
  }
  local_188 = local_a8;
  local_180 = local_a0;
  local_178 = local_98;
  if (local_a8 <= 0.0) {
    if (local_a0 <= 0.0) {
      if (0.0 < local_98) {
        local_188 = local_98;
      }
    }
    else {
      local_188 = local_a0;
    }
  }
  dVar6 = (double)FUN_00b90620(0x3fb999999999999a,local_68 - local_60);
  local_170 = ((local_188 / (dVar6 * 6.283185307179586)) * 10.0) / local_1a0;
  local_168 = local_90;
  local_160 = local_88;
  local_158 = local_80;
  local_140 = local_58 + local_78;
  local_138 = local_30;
  local_130 = local_70;
  if (*(char *)(*param_8 + 6) != '\0') {
    local_218 = 0x3ff0000000000000;
    local_210 = 0x46293e5939a08cea;
    if (*(char *)(*param_8 + 4) == '\0') {
      local_208 = local_e8[2];
    }
    else {
      local_208 = 1e+30;
    }
    local_200 = 0;
    local_1f8 = 0;
    local_1f0 = 0;
    local_1e8 = 0;
    local_1e0 = 0;
    local_1d8 = 0;
    local_1d0 = 0;
    local_1c8 = local_68;
    local_1c0 = local_60;
    local_1b8 = 0;
    local_1b0 = 0;
    local_1a8 = 0;
  }
  if (*(char *)(*param_8 + 4) == '\0') {
    if (1000000.0 <= local_190) {
      *(undefined4 *)*param_8 = 0xb8;
      FUN_016ee330(param_1,param_8,*(undefined2 *)*param_8,0);
      FUN_014d2420(param_1,param_2,param_3,param_4,param_5,param_6,&local_1a0,*param_8 + 8);
    }
    else {
      *(undefined1 *)(*param_8 + 5) = 1;
      local_128 = local_e8[0];
      local_120 = local_e8[1];
      local_118 = local_e8[2];
      local_110 = local_68;
      local_108 = local_60;
      local_100 = local_58 + local_78;
      local_f8 = local_30;
      local_f0 = local_70;
      *(undefined4 *)*param_8 = 0x68;
      FUN_016ee330(param_1,param_8,*(undefined2 *)*param_8,0);
      FUN_014d4a40(param_1,param_2,param_3,param_4,param_5,param_6,&local_128,*param_8 + 8);
    }
  }
  else {
    local_268 = 0x3ff0000000000000;
    local_260 = 0;
    local_258 = local_e8[2];
    local_250 = local_e8[3];
    local_248 = local_c8;
    local_240 = local_c0;
    local_238 = local_b8;
    local_230 = local_b0;
    local_228 = local_68;
    local_220 = local_60;
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
    FUN_014d2420(param_1,param_2,param_3,param_4,cVar2,param_6,&local_1a0,*param_8 + 8);
    if (*(char *)(*param_8 + 6) != '\0') {
      FUN_014d2420(param_1,param_2,cVar2,param_6,cVar3,param_6,&local_218,*param_8 + 0x118);
    }
    FUN_014d6960(param_1,cVar3,param_5,param_6,&local_268,*param_8 + 0xa8);
  }
  return;
}

