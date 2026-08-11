/* Ghidra address: 00db3f10 */
/* Ghidra symbol: FUN_00db3f10 */


longlong FUN_00db3f10(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 *param_5,undefined8 *param_6)

{
  double *pdVar1;
  uint uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong local_res8;
  undefined1 auStack_498 [44];
  uint local_46c;
  longlong local_468;
  undefined1 *local_460;
  undefined4 local_43c;
  double local_438;
  longlong local_430;
  double local_428;
  double dStack_420;
  longlong local_418;
  undefined8 local_410;
  double local_408;
  longlong local_400;
  undefined4 local_3e4;
  double local_3e0;
  longlong local_3d8;
  double local_3d0;
  double dStack_3c8;
  longlong local_3c0;
  double local_3b8;
  double dStack_3b0;
  longlong local_3a8;
  undefined8 local_3a0;
  double local_398;
  longlong local_390;
  undefined8 local_388;
  double local_380;
  longlong local_378;
  undefined1 local_368 [16];
  longlong local_358;
  undefined1 local_348 [16];
  longlong local_338;
  undefined1 local_328 [16];
  longlong local_318;
  undefined4 local_2fc;
  undefined1 local_2f8 [16];
  longlong local_2e8;
  undefined4 local_2cc;
  undefined1 local_2c8 [16];
  longlong local_2b8;
  undefined4 local_29c;
  undefined1 local_298 [16];
  longlong local_288;
  uint local_27c;
  double local_278;
  double local_270;
  double local_268;
  double local_260;
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
  double local_208;
  double local_200;
  double local_1f8;
  undefined8 local_1f0 [5];
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_170;
  double local_168;
  double local_140;
  undefined8 local_d8 [5];
  double local_b0;
  
  local_460 = auStack_498;
  puVar5 = local_d8;
  for (lVar4 = 0x14; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *param_5;
    param_5 = param_5 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_1f0;
  for (lVar4 = 0x23; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *param_6;
    param_6 = param_6 + 1;
    puVar5 = puVar5 + 1;
  }
  local_res8 = param_1;
  puVar3 = auStack_498;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar3 = local_460;
  }
  local_460 = puVar3;
  FUN_01b0fbb0(local_res8,0,param_3,param_4);
  local_200 = local_1c8 / local_1c0;
  local_260 = -local_1c8 / local_200;
  local_268 = -local_1c8;
  local_288 = *(longlong *)(local_res8 + 0x58);
  FUN_01b0f890(local_298,local_260,local_268);
  local_29c = FUN_005980d0(local_288 + 8,local_298);
  local_278 = (double)FUN_0040af80(local_1b8 / local_1c0);
  local_210 = local_1c8 * (local_278 - 1.0);
  local_1f8 = (local_1c8 / local_1c0) * local_278;
  local_220 = 1.0 / local_1f8 + local_b0;
  local_228 = 1.0 / local_220;
  local_230 = local_1b8 + local_210 * local_b0;
  local_260 = (local_210 - local_228 * local_230) / (local_200 - local_228);
  local_268 = local_200 * local_260;
  local_2b8 = *(longlong *)(local_res8 + 0x58);
  FUN_01b0f890(local_2c8,local_260,local_268);
  local_2cc = FUN_005980d0(local_2b8 + 8,local_2c8);
  local_250 = local_1b8 + local_1c0 * 8.0;
  local_278 = (double)FUN_0040af80(local_250 / local_1c0);
  local_218 = local_1c8 * (local_278 - 1.0);
  local_208 = (local_1c8 / local_1c0) * local_278;
  local_258 = local_250 + local_218 * local_b0;
  local_238 = 1.0 / local_208 + local_b0;
  local_240 = 1.0 / local_238;
  local_260 = (((local_218 - local_210) + local_228 * local_230) - local_240 * local_258) /
              (local_228 - local_240);
  local_268 = local_210 + local_228 * (local_260 - local_230);
  local_2e8 = *(longlong *)(local_res8 + 0x58);
  FUN_01b0f890(local_2f8,local_260,local_268);
  local_2fc = FUN_005980d0(local_2e8 + 8,local_2f8);
  if (local_140 < 1e+29) {
    local_200 = local_1c8 / local_170;
    local_260 = -local_1c8 / local_200 - local_140;
    local_268 = -local_1c8;
    local_318 = *(longlong *)(local_res8 + 0x58);
    FUN_01b0f890(local_328,local_260,local_268);
    FUN_0059a1a0(local_318 + 8,0,local_328);
    local_278 = (double)FUN_0040af80(local_168 / local_170);
    local_210 = local_1c8 * local_278;
    local_1f8 = (local_1c8 / local_170) * local_278;
    local_220 = 1.0 / local_1f8 + local_b0;
    local_228 = 1.0 / local_220;
    local_230 = local_168 + local_210 * local_b0;
    local_260 = (local_210 - local_228 * local_230) / (local_200 - local_228);
    local_268 = -local_200 * local_260 - local_1c8 * 2.0;
    local_338 = *(longlong *)(local_res8 + 0x58);
    FUN_01b0f890(local_348,-local_260 - local_140,local_268);
    FUN_0059a1a0(local_338 + 8,0,local_348);
    local_250 = local_168 + local_170 * 4.0;
    local_278 = (double)FUN_0040af80(local_250 / local_170);
    local_218 = local_1c8 * local_278;
    local_208 = (local_1c8 / local_170) * local_278;
    local_258 = local_250 + local_218 * local_b0;
    local_238 = 1.0 / local_208 + local_b0;
    local_248 = 1.0 / local_238;
    local_260 = (((local_218 - local_210) + local_228 * local_230) - local_240 * local_258) /
                (local_228 - local_240);
    local_268 = -(local_210 + local_228 * (local_260 - local_230)) - local_1c8 * 2.0;
    local_358 = *(longlong *)(local_res8 + 0x58);
    FUN_01b0f890(local_368,-local_260 - local_140,local_268);
    FUN_0059a1a0(local_358 + 8,0,local_368);
  }
  FUN_01b0fae0(local_res8,0,*(int *)(*(longlong *)(local_res8 + 0x58) + 0x10) + -1);
  iVar6 = *(int *)(*(longlong *)(local_res8 + 0x58) + 0x10);
  local_27c = 0;
  if (-1 < iVar6 + -2) {
    iVar6 = iVar6 + -1;
    do {
      local_378 = *(longlong *)(local_res8 + 0x58);
      local_46c = local_27c + 1;
      if (*(uint *)(local_378 + 0x10) <= local_46c) {
        FUN_00594f90();
      }
      uVar2 = local_27c;
      local_468 = (longlong)(int)local_46c;
      puVar5 = (undefined8 *)(*(longlong *)(local_378 + 8) + local_468 * 0x10);
      local_388 = *puVar5;
      local_380 = (double)puVar5[1];
      local_390 = *(longlong *)(local_res8 + 0x58);
      if (*(uint *)(local_390 + 0x10) <= local_27c) {
        FUN_00594f90();
      }
      lVar4 = (longlong)(int)local_27c;
      puVar5 = (undefined8 *)(*(longlong *)(local_390 + 8) + lVar4 * 0x10);
      local_3a0 = *puVar5;
      local_398 = (double)puVar5[1];
      local_3a8 = *(longlong *)(local_res8 + 0x58);
      if (*(uint *)(local_3a8 + 0x10) <= local_46c) {
        FUN_00594f90();
      }
      pdVar1 = (double *)(*(longlong *)(local_3a8 + 8) + local_468 * 0x10);
      local_3b8 = *pdVar1;
      dStack_3b0 = pdVar1[1];
      local_3c0 = *(longlong *)(local_res8 + 0x58);
      if (*(uint *)(local_3c0 + 0x10) <= uVar2) {
        FUN_00594f90();
      }
      pdVar1 = (double *)(*(longlong *)(local_3c0 + 8) + lVar4 * 0x10);
      local_3d0 = *pdVar1;
      dStack_3c8 = pdVar1[1];
      local_3e0 = (local_380 - local_398) / (local_3b8 - local_3d0);
      local_3d8 = *(longlong *)(local_res8 + 0x60);
      local_270 = local_3e0;
      local_3e4 = FUN_00597e50(local_3d8 + 8,&local_3e0);
      local_400 = *(longlong *)(local_res8 + 0x58);
      if (*(uint *)(local_400 + 0x10) <= uVar2) {
        FUN_00594f90();
      }
      puVar5 = (undefined8 *)(*(longlong *)(local_400 + 8) + lVar4 * 0x10);
      local_410 = *puVar5;
      local_408 = (double)puVar5[1];
      local_418 = *(longlong *)(local_res8 + 0x58);
      if (*(uint *)(local_418 + 0x10) <= uVar2) {
        FUN_00594f90();
      }
      pdVar1 = (double *)(*(longlong *)(local_418 + 8) + (longlong)(int)local_27c * 0x10);
      local_428 = *pdVar1;
      dStack_420 = pdVar1[1];
      local_430 = *(longlong *)(local_res8 + 0x68);
      local_438 = local_408 - local_428 * local_270;
      local_43c = FUN_00597e50(local_430 + 8,&local_438);
      local_27c = local_27c + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  iVar6 = FUN_01b0faf0(local_res8,0);
  local_27c = -1;
  if (-2 < iVar6) {
    iVar6 = iVar6 + 2;
    do {
      FUN_01b0faa0(local_res8,0,local_27c);
      local_27c = local_27c + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_01b0fa30(local_res8,0,1);
  *(double *)(local_res8 + 0x70) = local_240;
  if (1e+29 <= local_140) {
    *(undefined8 *)(local_res8 + 0x78) = 0;
  }
  else {
    *(double *)(local_res8 + 0x78) = local_248;
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

