/* Ghidra address: 014aeb50 */
/* Ghidra symbol: FUN_014aeb50 */


void FUN_014aeb50(undefined8 param_1,char param_2,undefined8 *param_3,undefined8 param_4,
                 longlong param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 local_res8;
  char local_res10;
  undefined8 *local_res18;
  undefined8 local_res20;
  undefined1 auStack_3e8 [32];
  undefined1 local_3c8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined1 *local_390;
  int local_388;
  int local_384;
  int local_380;
  int local_37c;
  undefined8 local_378;
  longlong local_370;
  longlong *local_368;
  undefined1 local_360 [756];
  undefined1 local_6c [52];
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_390 = auStack_3e8;
  local_3b0 = 0;
  local_3a8 = 0;
  local_3a0 = 0;
  local_398 = 0;
  local_370 = 0;
  local_378 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_1);
  FUN_00417580(local_6c,&DAT_01d2e6d8);
  if (local_res10 == '\0') {
    local_38 = FUN_004b9860(&PTR_FUN_0047c498,1,local_res8,0);
    local_3c8 = 0;
    local_30[0] = FUN_01d30b30(&DAT_01d2e8e8,1,local_38,0x40);
    if (param_5 != 0) {
      *(undefined1 *)(param_5 + 0x490) = 1;
    }
    FUN_01d31aa0(local_30[0],param_5);
    FUN_01d317c0(local_30[0],local_6c);
    if (param_5 == 0) {
      DAT_0210eae0 = (undefined8 *)FUN_0198b200(0,&PTR_FUN_01984d18,1,DAT_0210eae8);
      FUN_01d31aa0(local_30[0],DAT_0210eae0);
    }
    FUN_01d32e90(*(undefined8 *)PTR_DAT_02003458,local_30);
    if (param_5 == 0) {
      puVar6 = (undefined8 *)((longlong)DAT_0210eae0 + 0x55a);
      puVar7 = local_res18;
      for (lVar5 = 0x32; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      FUN_00414ad0(local_res20,*(undefined8 *)((longlong)DAT_0210eae0 + 0x6ea));
      uVar4 = (**(code **)*DAT_0210eae0)(DAT_0210eae0);
      FUN_00418590(uVar4,&DAT_01984da0);
    }
    iVar2 = FUN_01d31a40(local_30[0]);
    if (iVar2 != 0) {
      uVar3 = FUN_01d31a40(local_30[0]);
      FUN_00b047e0(uVar3);
    }
    FUN_00410f20(local_30[0]);
    FUN_00410f20(local_38);
  }
  else {
    FUN_0040cf10(local_360,local_res8,0);
    FUN_00409900();
    FUN_0040c9e0(local_360);
    FUN_00409900();
    local_368 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    uVar4 = FUN_00b89270();
    FUN_00b8e520(uVar4,&local_398,0x5a8);
    (**(code **)(*local_368 + 0x78))(local_368,local_398);
    uVar4 = FUN_00b89270();
    FUN_00b8e520(uVar4,&local_3a0,0x5a9);
    (**(code **)(*local_368 + 0x78))(local_368,local_3a0);
    FUN_0040e480(local_360);
    FUN_00409900();
    local_37c = 1;
    while( true ) {
      cVar1 = FUN_0040d1c0(local_360);
      FUN_00409900();
      if (cVar1 != '\0') break;
      FUN_0040e200(local_360,&local_370);
      FUN_0040e480(local_360);
      FUN_00409900();
      FUN_0043ea00(&local_3a8,local_370);
      FUN_00414b50(&local_370,local_3a8);
      local_388 = 0;
      if (local_370 != 0) {
        local_388 = *(int *)(local_370 + -4);
      }
      local_384 = local_388;
      FUN_00414480(&local_378);
      while ((0 < local_384 && (*(short *)(local_370 + -2 + (longlong)local_384 * 2) != 0x20))) {
        FUN_00416780(&local_3b0,*(undefined2 *)(local_370 + -2 + (longlong)local_384 * 2));
        FUN_00416ea0(local_3b0,&local_378,1);
        local_384 = local_384 + -1;
      }
      local_380 = FUN_014aeb20(auStack_3e8,local_37c);
      if (-1 < local_380) {
        lVar5 = (longlong)local_380;
        if ((PTR_DAT_02004b98[lVar5 * 0x28 + -0x25] == '\x01') ||
           (PTR_DAT_02004b98[lVar5 * 0x28 + -0x25] == '\x02')) {
          iVar2 = FUN_0043fc00(local_378);
          *(double *)(PTR_DAT_02004010 + lVar5 * 8 + 0xc0) = (double)iVar2;
        }
        else if (PTR_DAT_02004b98[lVar5 * 0x28 + -0x25] == '\x03') {
          iVar2 = (**(code **)(*local_368 + 0xb0))(local_368,local_378);
          *(double *)(PTR_DAT_02004010 + lVar5 * 8 + 0xc0) = (double)iVar2;
        }
        else {
          uVar4 = FUN_00b8f030(local_378);
          *(undefined8 *)(PTR_DAT_02004010 + lVar5 * 8 + 0xc0) = uVar4;
        }
      }
      local_37c = local_37c + 1;
    }
    FUN_00410f20(local_368);
    FUN_0040d150(local_360);
    FUN_00409900();
  }
  FUN_00414560(&local_3b0,4);
  FUN_00414560(&local_378,2);
  FUN_00417740(local_6c,&DAT_01d2e6d8);
  FUN_00414480(&local_res8);
  return;
}

