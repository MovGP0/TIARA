/* Ghidra address: 015deae0 */
/* Ghidra symbol: FUN_015deae0 */


void FUN_015deae0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_578 [32];
  undefined1 local_558;
  int local_53c;
  undefined8 local_538 [8];
  longlong local_4f2;
  undefined8 local_4a8 [8];
  longlong local_462;
  undefined8 local_418 [8];
  longlong local_3d2;
  undefined8 local_388;
  undefined1 *local_380;
  longlong local_378;
  longlong local_370;
  int local_364;
  int local_360;
  int local_35c;
  longlong local_358;
  longlong local_350;
  undefined4 local_348;
  longlong local_340;
  int local_334;
  int local_330;
  int local_32c;
  longlong local_328;
  undefined8 local_320;
  longlong local_318;
  undefined8 local_30f;
  undefined4 local_2d2;
  undefined8 local_b8 [8];
  longlong local_72;
  
  puVar3 = local_538;
  for (lVar2 = 0x12; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = local_4a8;
  for (lVar2 = 0x12; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = local_418;
  for (lVar2 = 0x12; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_388 = 0;
  local_318 = 0;
  local_320 = 0;
  local_328 = 0;
  puVar3 = &local_30f;
  for (lVar2 = 0x4a; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = *(undefined4 *)param_2;
  *(undefined2 *)((longlong)puVar3 + 4) = *(undefined2 *)((longlong)param_2 + 4);
  *(undefined1 *)((longlong)puVar3 + 6) = *(undefined1 *)((longlong)param_2 + 6);
  local_380 = auStack_578;
  FUN_004179d0(&local_30f,&DAT_015b8318);
  lVar2 = FUN_015c2a60(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x510) + 0x238) + 0x28)
                       ,local_2d2);
  FUN_00414b50(&local_318,*(undefined8 *)(lVar2 + 0x2e));
  lVar2 = FUN_015c2a60(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x510) + 0x238) + 0x28)
                       ,local_2d2);
  if (*(char *)(lVar2 + 0x6c) == '\0') {
LAB_015dec10:
    lVar2 = FUN_015c2a60(*(undefined8 *)
                          (*(longlong *)(*(longlong *)(param_1 + 0x510) + 0x238) + 0x28),local_2d2);
    FUN_00414ad0(lVar2 + 0x36,local_318);
  }
  else {
    lVar2 = FUN_015c2a60(*(undefined8 *)
                          (*(longlong *)(*(longlong *)(param_1 + 0x510) + 0x238) + 0x28),local_2d2);
    if (*(char *)(lVar2 + 0x8e) != '\x06') goto LAB_015dec10;
  }
  local_558 = 1;
  FUN_015bf370(&local_320,*(undefined8 *)(param_1 + 0x518),&DAT_015df2c8,&DAT_015df2d8);
  local_558 = 1;
  FUN_015bf370(&local_328,*(undefined8 *)(param_1 + 0x520),&DAT_015df2c8,&DAT_015df2d8);
  local_558 = 3;
  FUN_015bf370(&local_388,local_318,local_320,local_328);
  FUN_00414b50(&local_318,local_388);
  FUN_015c3450(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x510) + 0x238) + 0x28),
               local_2d2,local_318);
  local_348 = 0;
  if (local_318 != 0) {
    local_348 = *(undefined4 *)(local_318 + -4);
  }
  lVar2 = FUN_015c2a60(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x510) + 0x238) + 0x28)
                       ,local_2d2);
  *(undefined2 *)(lVar2 + 0x1c) = (undefined2)local_348;
  lVar2 = FUN_015c2a60(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x510) + 0x238) + 0x28)
                       ,local_2d2);
  if (*(char *)(lVar2 + 0x6c) != '\0') {
    lVar2 = FUN_015c2a60(*(undefined8 *)
                          (*(longlong *)(*(longlong *)(param_1 + 0x510) + 0x238) + 0x28),local_2d2);
    if (*(char *)(lVar2 + 0x8e) != '\a') {
      lVar2 = FUN_015c2a60(*(undefined8 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x510) + 0x238) + 0x28),local_2d2
                          );
      if (*(char *)(lVar2 + 0x8e) != '\b') goto LAB_015dee42;
    }
  }
  lVar2 = FUN_015c2a60(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x510) + 0x238) + 0x28)
                       ,local_2d2);
  *(undefined1 *)(lVar2 + 0x6c) = 1;
  lVar2 = FUN_015c2a60(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x510) + 0x238) + 0x28)
                       ,local_2d2);
  *(undefined1 *)(lVar2 + 0x8e) = 6;
LAB_015dee42:
  lVar2 = FUN_015c2a60(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x510) + 0x238) + 0x28)
                       ,local_2d2);
  local_350 = *(longlong *)(lVar2 + 0x46);
  local_358 = local_350;
  if (local_350 != 0) {
    local_358 = *(longlong *)(local_350 + -8);
  }
  local_53c = (int)local_358 + -1;
  local_32c = 0;
  if (-1 < local_53c) {
    local_53c = (int)local_358;
    do {
      lVar2 = FUN_015c2a60(*(undefined8 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x510) + 0x238) + 0x28),local_2d2
                          );
      if (*(short *)(*(longlong *)(lVar2 + 0x46) + (longlong)local_32c * 0xc) == DAT_01f6fdb8) {
        lVar2 = FUN_015c2a60(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x510) + 0x238) + 0x28),
                             local_2d2);
        FUN_004095f0(*(undefined8 *)(*(longlong *)(lVar2 + 0x46) + 4 + (longlong)local_32c * 0xc));
        local_35c = 0;
        if (local_328 != 0) {
          local_35c = *(int *)(local_328 + -4);
        }
        local_334 = local_35c;
        local_360 = 0;
        if (local_328 != 0) {
          local_360 = *(int *)(local_328 + -4);
        }
        local_330 = local_360 * 2 + 8;
        FUN_015c29e0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x510) + 0x238) + 0x28),
                     local_418,local_2d2);
        *(undefined2 *)(local_3d2 + 2 + (longlong)local_32c * 0xc) = (undefined2)local_330;
        local_364 = 0;
        if (local_328 != 0) {
          local_364 = *(int *)(local_328 + -4);
        }
        uVar1 = FUN_00409570((longlong)(local_364 * 2 + 8));
        FUN_015c29e0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x510) + 0x238) + 0x28),
                     local_4a8,local_2d2);
        *(undefined8 *)(local_462 + 4 + (longlong)local_32c * 0xc) = uVar1;
        puVar3 = local_b8;
        for (lVar2 = 0x12; lVar2 != 0; lVar2 = lVar2 + -1) {
          *puVar3 = 0;
          puVar3 = puVar3 + 1;
        }
        FUN_015c29e0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x510) + 0x238) + 0x28),
                     local_b8,local_2d2);
        FUN_015c29e0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x510) + 0x238) + 0x28),
                     local_538,local_2d2);
        local_370 = local_4f2;
        local_378 = local_4f2;
        if (local_4f2 != 0) {
          local_378 = *(longlong *)(local_4f2 + -8);
        }
        local_340 = *(longlong *)(local_72 + -8 + local_378 * 0xc);
        FUN_00417740(local_b8,&DAT_015b9418);
        FUN_00409a70(&DAT_01f6fdb4,local_340,4);
        local_340 = local_340 + 4;
        FUN_00409a70(&local_334,local_340,4);
        local_340 = local_340 + 4;
        uVar1 = FUN_00416740(local_328);
        FUN_00409a70(uVar1,local_340,(longlong)(local_334 * 2));
      }
      local_32c = local_32c + 1;
      local_53c = local_53c + -1;
    } while (local_53c != 0);
  }
  FUN_00417840(local_538,&DAT_015b9418,3);
  FUN_00414480(&local_388);
  FUN_00414560(&local_328,3);
  FUN_00417740(&local_30f,&DAT_015b8318);
  return;
}

