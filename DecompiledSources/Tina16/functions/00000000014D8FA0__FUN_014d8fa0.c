/* Ghidra address: 014d8fa0 */
/* Ghidra symbol: FUN_014d8fa0 */


void FUN_014d8fa0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
                 undefined1 param_5,double *param_6,longlong *param_7)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  double *pdVar7;
  uint uVar8;
  double dVar9;
  undefined8 local_330;
  undefined8 local_328;
  double local_320;
  double local_318;
  double local_310;
  double local_308;
  double local_300;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  double local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  double local_290;
  double local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  double local_268;
  undefined8 local_260;
  double local_258;
  double local_250;
  double local_248;
  double local_240;
  double local_238;
  double local_230;
  double local_228;
  double local_220;
  double local_218;
  double local_210;
  undefined8 local_208;
  double local_1f8 [4];
  double local_1d8 [4];
  undefined1 local_1b8;
  undefined1 local_1b7;
  byte local_1b6;
  double local_1b0;
  undefined8 local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  undefined8 local_188;
  double local_180 [4];
  double local_160 [4];
  undefined1 local_140;
  undefined1 local_13f;
  byte local_13e;
  double local_138 [4];
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  undefined8 local_90;
  undefined8 local_88;
  double local_80 [9];
  byte local_38;
  undefined8 local_30;
  
  local_30 = *param_3;
  pdVar7 = local_138;
  for (lVar6 = 0x21; lVar6 != 0; lVar6 = lVar6 + -1) {
    *pdVar7 = *param_6;
    param_6 = param_6 + 1;
    pdVar7 = pdVar7 + 1;
  }
  *(undefined1 *)(*param_7 + 5) = 0;
  if ((((((local_110 == 0.0) && (local_108 == 0.0)) && (local_100 == 0.0)) &&
       (((local_f8 == 0.0 && (local_f0 == 0.0)) &&
        ((local_e8 == 0.0 && ((local_e0 == 0.0 && (local_d8 == 0.0)))))))) && (local_d0 == 0.0)) &&
     ((local_138[3] == 0.0 && (local_118 == 0.0)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)(*param_7 + 4) = uVar2;
  if (((local_e0 == 0.0) && (local_d8 == 0.0)) && (local_d0 == 0.0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)(*param_7 + 6) = uVar2;
  local_268 = local_138[0];
  local_260 = local_138[1];
  local_218 = local_c8;
  local_210 = local_c0;
  if (*(char *)(*param_7 + 4) == '\0') {
    local_258 = local_138[2];
  }
  else {
    local_258 = 1e+30;
  }
  local_250 = local_f8;
  local_248 = local_f0;
  local_240 = local_e8;
  if (local_f8 <= 0.0) {
    if (local_f0 <= 0.0) {
      if (0.0 < local_e8) {
        local_250 = local_e8;
      }
    }
    else {
      local_250 = local_f0;
    }
  }
  dVar9 = (double)FUN_00b90620(0x3fb999999999999a,local_c8 - local_c0);
  local_238 = ((local_250 / (dVar9 * 6.283185307179586)) * 10.0) / local_268;
  local_230 = local_e0;
  local_228 = local_d8;
  local_220 = local_d0;
  local_1b8 = FUN_0040c770(local_88);
  local_1b7 = FUN_0040c770(local_80[0]);
  local_1b6 = local_38;
  iVar5 = 1;
  uVar8 = (uint)local_38;
  if (uVar8 != 0) {
    pdVar7 = local_1f8;
    do {
      iVar1 = (iVar5 + -1) * 2;
      *pdVar7 = local_b8 + local_80[iVar1 + 1];
      pdVar7[4] = local_80[iVar1 + 2];
      iVar5 = iVar5 + 1;
      pdVar7 = pdVar7 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  local_208 = local_90;
  if (*(char *)(*param_7 + 6) != '\0') {
    local_2e0 = 0x3ff0000000000000;
    local_2d8 = 0x46293e5939a08cea;
    if (*(char *)(*param_7 + 4) == '\0') {
      local_2d0 = local_138[2];
    }
    else {
      local_2d0 = 1e+30;
    }
    local_2c8 = 0;
    local_2c0 = 0;
    local_2b8 = 0;
    local_2b0 = 0;
    local_2a8 = 0;
    local_2a0 = 0;
    local_298 = 0;
    local_290 = local_c8;
    local_288 = local_c0;
    local_280 = 0;
    local_278 = 0;
    local_270 = 0;
  }
  if (*(char *)(*param_7 + 4) == '\0') {
    if (1000000.0 <= local_258) {
      *(undefined4 *)*param_7 = 200;
      FUN_016ee330(param_1,param_7,*(undefined2 *)*param_7,0);
      FUN_014d3c60(param_1,param_2,&local_30,param_4,param_5,&local_268,*param_7 + 8);
    }
    else {
      *(undefined1 *)(*param_7 + 5) = 1;
      local_1b0 = local_138[0];
      local_1a8 = local_138[1];
      local_1a0 = local_138[2];
      local_198 = local_c8;
      local_190 = local_c0;
      local_188 = local_90;
      local_140 = FUN_0040c770(local_88);
      local_13f = FUN_0040c770(local_80[0]);
      local_13e = local_38;
      iVar5 = 1;
      uVar8 = (uint)local_38;
      if (uVar8 != 0) {
        pdVar7 = local_180;
        do {
          iVar1 = (iVar5 + -1) * 2;
          *pdVar7 = local_b8 + local_80[iVar1 + 1];
          pdVar7[4] = local_80[iVar1 + 2];
          iVar5 = iVar5 + 1;
          pdVar7 = pdVar7 + 1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      *(undefined4 *)*param_7 = 0x80;
      FUN_016ee330(param_1,param_7,*(undefined2 *)*param_7,0);
      FUN_014d5710(param_1,param_2,&local_30,param_4,param_5,&local_1b0,*param_7 + 8);
    }
  }
  else {
    local_330 = 0x3ff0000000000000;
    local_328 = 0;
    local_320 = local_138[2];
    local_318 = local_138[3];
    local_310 = local_118;
    local_308 = local_110;
    local_300 = local_108;
    local_2f8 = local_100;
    local_2f0 = local_c8;
    local_2e8 = local_c0;
    *(undefined4 *)*param_7 = 0x138;
    cVar3 = FUN_016e9d10(param_1,1);
    cVar3 = cVar3 + '\x01';
    cVar4 = cVar3;
    if (*(char *)(*param_7 + 6) != '\0') {
      *(int *)*param_7 = *(int *)*param_7 + 0xa0;
      cVar4 = FUN_016e9d10(param_1,1);
      cVar4 = cVar4 + '\x01';
    }
    FUN_016ee330(param_1,param_7,*(undefined2 *)*param_7,0);
    FUN_014d3c60(param_1,param_2,&local_30,cVar3,param_5,&local_268,*param_7 + 8);
    if (*(char *)(*param_7 + 6) != '\0') {
      FUN_014d2420(param_1,param_2,cVar3,param_5,cVar4,param_5,&local_2e0,*param_7 + 0x138);
    }
    FUN_014d6960(param_1,cVar4,param_4,param_5,&local_330,*param_7 + 200);
  }
  return;
}

