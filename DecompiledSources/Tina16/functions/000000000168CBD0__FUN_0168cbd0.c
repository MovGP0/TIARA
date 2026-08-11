/* Ghidra address: 0168cbd0 */
/* Ghidra symbol: FUN_0168cbd0 */


longlong FUN_0168cbd0(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     double *param_5,undefined8 *param_6,double param_7,char param_8)

{
  uint uVar1;
  undefined1 *puVar2;
  longlong lVar3;
  double *pdVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 uVar7;
  longlong local_res8;
  undefined1 auStack_5c8 [32];
  double local_5a8;
  uint local_58c;
  longlong local_588;
  undefined1 *local_580;
  undefined4 local_564;
  double local_560;
  longlong local_558;
  double local_550;
  double dStack_548;
  longlong local_540;
  undefined8 local_538;
  double local_530;
  longlong local_528;
  undefined4 local_50c;
  double local_508;
  longlong local_500;
  double local_4f8;
  double dStack_4f0;
  longlong local_4e8;
  double local_4e0;
  double dStack_4d8;
  longlong local_4d0;
  undefined8 local_4c8;
  double local_4c0;
  longlong local_4b8;
  undefined8 local_4b0;
  double local_4a8;
  longlong local_4a0;
  longlong local_498;
  uint local_48c;
  double local_488;
  double local_480;
  double local_478;
  double local_470;
  undefined8 local_468;
  undefined1 local_45f;
  undefined1 local_45e;
  undefined8 local_3f8;
  double local_370;
  double local_368;
  double local_360;
  double local_358;
  double local_2a8;
  double local_1c0 [8];
  double local_180;
  
  local_580 = auStack_5c8;
  pdVar4 = local_1c0;
  for (lVar3 = 0x31; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pdVar4 = *param_5;
    param_5 = param_5 + 1;
    pdVar4 = pdVar4 + 1;
  }
  puVar5 = &local_468;
  for (lVar3 = 0x55; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *param_6;
    param_6 = param_6 + 1;
    puVar5 = puVar5 + 1;
  }
  local_res8 = param_1;
  puVar2 = auStack_5c8;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar2 = local_580;
  }
  local_580 = puVar2;
  FUN_01b0fbb0(local_res8,0,param_3,param_4);
  local_478 = local_368 * param_7;
  local_480 = local_370 * 8.61708745588933e-05;
  local_498 = *(longlong *)(local_res8 + 0x58);
  FUN_005980a0(local_498 + 8);
  if (param_8 == '\x01') {
    *(undefined1 *)(local_res8 + 0x78) = local_468._5_1_;
    *(undefined1 *)(local_res8 + 0x79) = local_45f;
    local_488 = param_7 * local_358;
    local_5a8 = local_2a8 / local_488;
    uVar7 = FUN_0168c900(auStack_5c8,local_478,local_480 * local_180,local_3f8);
    *(undefined8 *)(local_res8 + 0x70) = uVar7;
  }
  else {
    *(undefined1 *)(local_res8 + 0x78) = local_468._5_1_;
    *(undefined1 *)(local_res8 + 0x79) = local_45e;
    local_488 = param_7 * local_360;
    local_5a8 = local_2a8 / local_488;
    uVar7 = FUN_0168c900(auStack_5c8,local_478,local_480 * local_1c0[2],local_3f8);
    *(undefined8 *)(local_res8 + 0x70) = uVar7;
  }
  FUN_01b0fae0(local_res8,0,*(int *)(*(longlong *)(local_res8 + 0x58) + 0x10) + -1);
  iVar6 = *(int *)(*(longlong *)(local_res8 + 0x58) + 0x10);
  local_48c = 0;
  if (-1 < iVar6 + -2) {
    iVar6 = iVar6 + -1;
    do {
      local_4a0 = *(longlong *)(local_res8 + 0x58);
      local_58c = local_48c + 1;
      if (*(uint *)(local_4a0 + 0x10) <= local_58c) {
        FUN_00594f90();
      }
      uVar1 = local_48c;
      local_588 = (longlong)(int)local_58c;
      puVar5 = (undefined8 *)(*(longlong *)(local_4a0 + 8) + local_588 * 0x10);
      local_4b0 = *puVar5;
      local_4a8 = (double)puVar5[1];
      local_4b8 = *(longlong *)(local_res8 + 0x58);
      if (*(uint *)(local_4b8 + 0x10) <= local_48c) {
        FUN_00594f90();
      }
      lVar3 = (longlong)(int)local_48c;
      puVar5 = (undefined8 *)(*(longlong *)(local_4b8 + 8) + lVar3 * 0x10);
      local_4c8 = *puVar5;
      local_4c0 = (double)puVar5[1];
      local_4d0 = *(longlong *)(local_res8 + 0x58);
      if (*(uint *)(local_4d0 + 0x10) <= local_58c) {
        FUN_00594f90();
      }
      pdVar4 = (double *)(*(longlong *)(local_4d0 + 8) + local_588 * 0x10);
      local_4e0 = *pdVar4;
      dStack_4d8 = pdVar4[1];
      local_4e8 = *(longlong *)(local_res8 + 0x58);
      if (*(uint *)(local_4e8 + 0x10) <= uVar1) {
        FUN_00594f90();
      }
      pdVar4 = (double *)(*(longlong *)(local_4e8 + 8) + lVar3 * 0x10);
      local_4f8 = *pdVar4;
      dStack_4f0 = pdVar4[1];
      local_508 = (local_4a8 - local_4c0) / (local_4e0 - local_4f8);
      local_500 = *(longlong *)(local_res8 + 0x60);
      local_470 = local_508;
      local_50c = FUN_00597e50(local_500 + 8,&local_508);
      local_528 = *(longlong *)(local_res8 + 0x58);
      if (*(uint *)(local_528 + 0x10) <= uVar1) {
        FUN_00594f90();
      }
      puVar5 = (undefined8 *)(*(longlong *)(local_528 + 8) + lVar3 * 0x10);
      local_538 = *puVar5;
      local_530 = (double)puVar5[1];
      local_540 = *(longlong *)(local_res8 + 0x58);
      if (*(uint *)(local_540 + 0x10) <= uVar1) {
        FUN_00594f90();
      }
      pdVar4 = (double *)(*(longlong *)(local_540 + 8) + (longlong)(int)local_48c * 0x10);
      local_550 = *pdVar4;
      dStack_548 = pdVar4[1];
      local_558 = *(longlong *)(local_res8 + 0x68);
      local_560 = local_530 - local_550 * local_470;
      local_564 = FUN_00597e50(local_558 + 8,&local_560);
      local_48c = local_48c + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  iVar6 = FUN_01b0faf0(local_res8,0);
  local_48c = -1;
  if (-2 < iVar6) {
    iVar6 = iVar6 + 2;
    do {
      FUN_01b0faa0(local_res8,0,local_48c);
      local_48c = local_48c + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_01b0fa30(local_res8,0,1);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

