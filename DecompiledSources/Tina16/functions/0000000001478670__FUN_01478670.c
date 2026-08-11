/* Ghidra address: 01478670 */
/* Ghidra symbol: FUN_01478670 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01478670(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 char param_5)

{
  longlong *plVar1;
  undefined1 uVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_388 [32];
  int *local_368;
  undefined8 local_360;
  undefined1 local_358;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined1 *local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined1 local_300 [32];
  undefined1 local_2e0 [8];
  undefined8 local_2d8 [73];
  undefined8 local_90 [3];
  undefined1 local_71;
  int local_60 [5];
  int local_4c;
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  
  local_320 = auStack_388;
  local_348 = 0;
  local_340 = 0;
  local_338 = 0;
  local_330 = 0;
  local_328 = 0;
  local_90[0] = 0;
  local_308 = 0;
  local_310 = 0;
  local_318 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  local_71 = *PTR_DAT_020052b0;
  local_38 = 0;
  local_40 = 0;
  local_30 = (longlong *)0x0;
  *(undefined8 *)(param_1 + 8) = 0;
  local_30 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_60[1] = 0;
  local_60[0] = 0;
  FUN_00414480(*(longlong *)(*(longlong *)(param_1 + 0x278) + 0x208) + 0x30);
  FUN_00414ad0(*(longlong *)(*(longlong *)(param_1 + 0x278) + 0x208) + 0x38,local_res10);
  if (*(int *)(param_1 + 0x2b0) == 1) {
    local_368 = (int *)local_2d8;
    FUN_010cd270(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x278) + 0x208) + 0x18),
                 local_30,local_2e0,local_300);
    (**(code **)(*local_30 + 0x38))(local_30,&local_310);
    FUN_013b9dc0(*(undefined8 *)(param_1 + 0x2a8));
    uVar2 = FUN_019a1540(*(undefined8 *)(param_1 + 0x278),*(longlong *)(param_1 + 0x2a8) + 0xb0);
    lVar6 = *(longlong *)(param_1 + 0x2a8);
    *(undefined1 *)(lVar6 + 0xb8) = uVar2;
    FUN_013bcca0(lVar6,local_res18);
    FUN_01478380(param_1);
    if (param_5 == '\0') {
      local_368 = (int *)0x0;
      FUN_013bc030(*(undefined8 *)(param_1 + 0x2a8),&local_308,local_310,1);
      FUN_01479c00(param_1,2,local_308,local_60 + 1);
    }
    else {
      local_368 = local_60;
      FUN_013c3500(*(undefined8 *)(param_1 + 0x2a8),2,local_310,&local_318);
    }
    if (local_60[0] == 0) {
      FUN_013bbba0(*(undefined8 *)(param_1 + 0x2a8),0,5);
      if (*(char *)(*(longlong *)(param_1 + 0x2a8) + 0x124) != '\0') {
        FUN_013bc9e0(*(longlong *)(param_1 + 0x2a8),&local_328);
        FUN_00414ad0(local_res20,local_328);
        FUN_013bc9e0(*(undefined8 *)(param_1 + 0x2a8),&local_330);
        FUN_00414ad0(*(longlong *)(*(longlong *)(param_1 + 0x278) + 0x208) + 0x30,local_330);
      }
    }
    local_368 = (int *)CONCAT71(local_368._1_7_,3);
    FUN_00450070(&local_338,local_318,*(undefined8 *)(*(longlong *)(param_1 + 0x2a8) + 0xe8),
                 L"{$work}");
    FUN_00414b50(&local_318,local_338);
    FUN_00414ad0(*(longlong *)(*(longlong *)(param_1 + 0x278) + 0x208) + 0x40,local_318);
    if (local_60[0] == 4) {
      *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x278) + 0x208) + 0x4c) = 1;
    }
    else {
      *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x278) + 0x208) + 0x4c) = 0;
    }
    if (local_60[0] == 3) {
      *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x278) + 0x208) + 0x48) = 1;
    }
    else {
      *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x278) + 0x208) + 0x48) = 0;
    }
    FUN_01478f00(0,local_320);
  }
  else {
    local_368 = *(int **)(param_1 + 0x288);
    local_360 = 0;
    local_358 = 0;
    uVar4 = FUN_017e1bd0(&DAT_017df868,1,0,0);
    *(undefined8 *)(param_1 + 8) = uVar4;
    FUN_017e2440(uVar4,2);
    FUN_017e32f0(*(undefined8 *)(param_1 + 8),local_res18);
    lVar6 = *(longlong *)(param_1 + 8);
    *(undefined1 *)(lVar6 + 0x50b) = *(undefined1 *)(param_1 + 0x2b5);
    puVar7 = (undefined8 *)(lVar6 + 0x650);
    puVar8 = local_2d8;
    for (lVar5 = 0x48; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    cVar3 = FUN_019a1540(*(undefined8 *)(param_1 + 0x278),*(longlong *)(param_1 + 8) + 0x548);
    lVar6 = *(longlong *)(param_1 + 8);
    *(char *)(lVar6 + 0x540) = cVar3;
    if (cVar3 != '\0') {
      FUN_017e9ba0(lVar6,*(undefined8 *)(lVar6 + 0x548));
    }
    lVar6 = *(longlong *)(param_1 + 8);
    local_368 = (int *)(lVar6 + 0x650);
    FUN_010cd270(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x278) + 0x208) + 0x18),
                 local_30,lVar6 + 0x628,lVar6 + 0x630);
    FUN_01695540(*(undefined8 *)(param_1 + 8),local_30);
    FUN_01695da0(*(undefined8 *)(param_1 + 8),local_71);
    FUN_016942f0(*(undefined8 *)(param_1 + 8));
    FUN_01694110(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x550),1,
                 *(undefined8 *)(param_1 + 0x278),4);
    FUN_01478380(param_1);
    local_40 = FUN_013bdbe0(&DAT_013bda78,1,*(undefined8 *)(param_1 + 8));
    local_4c = FUN_013bfdc0(local_40);
    if (local_4c != 0) {
      FUN_01478630(param_1);
    }
    FUN_01696180(*(undefined8 *)(param_1 + 8));
    local_38 = FUN_010c2660(&DAT_010c2500,1,*(undefined8 *)(param_1 + 8));
    local_4c = FUN_010c7360(local_38);
    if (local_4c != 0) {
      FUN_01478630(param_1);
    }
    cVar3 = FUN_00c53220(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x4f8));
    if (cVar3 == '\0') {
      FUN_017e2760(*(undefined8 *)(param_1 + 8),2);
      plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x278) + 0x208) + 0x18);
      (**(code **)(*plVar1 + 0x10))(plVar1,local_30);
    }
    cVar3 = FUN_019a1540(*(undefined8 *)(param_1 + 0x278),*(longlong *)(param_1 + 8) + 0x548);
    if (cVar3 != '\0') {
      FUN_017e9ff0(*(longlong *)(param_1 + 8),*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x548));
    }
    FUN_017ea2d0(*(undefined8 *)(param_1 + 0x278),
                 *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x550),0,5);
    cVar3 = FUN_017e28e0(*(undefined8 *)(param_1 + 8));
    if (cVar3 != '\0') {
      FUN_01478630(param_1);
    }
    if (*(char *)(*(longlong *)(param_1 + 8) + 0x50a) != '\0') {
      FUN_017e9ab0(*(longlong *)(param_1 + 8),&local_340);
      FUN_00414ad0(local_res20,local_340);
      FUN_017e9ab0(*(undefined8 *)(param_1 + 8),&local_348);
      FUN_00414ad0(*(longlong *)(*(longlong *)(param_1 + 0x278) + 0x208) + 0x30,local_348);
      puVar7 = (undefined8 *)(*(longlong *)(param_1 + 8) + 0x650);
      puVar8 = local_2d8;
      for (lVar6 = 0x48; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    if (local_30 != (longlong *)0x0) {
      FUN_00410f20(local_30);
    }
    if (local_38 != 0) {
      FUN_00410f20(local_38);
    }
    if (local_40 != 0) {
      FUN_00410f20(local_40);
    }
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_00410f20(*(longlong *)(param_1 + 8));
    }
  }
  FUN_00414560(&local_348,5);
  FUN_00414560(&local_318,3);
  FUN_00414480(local_90);
  FUN_00414480(&local_res10);
  return;
}

