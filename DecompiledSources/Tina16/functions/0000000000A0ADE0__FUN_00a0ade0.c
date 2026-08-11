/* Ghidra address: 00a0ade0 */
/* Ghidra symbol: FUN_00a0ade0 */


longlong FUN_00a0ade0(longlong *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined1 auStack_418 [32];
  uint local_3f8;
  undefined1 *local_3f0;
  undefined8 local_3e8;
  undefined1 local_3d0 [16];
  undefined1 *local_3c0;
  longlong *local_3b0;
  char local_3a5;
  int local_3a4;
  undefined4 *local_3a0;
  undefined4 *local_398;
  int local_390;
  undefined4 local_38c;
  longlong local_388;
  undefined1 local_380 [216];
  undefined4 local_2a8;
  char local_2a4;
  undefined4 local_2a0;
  undefined1 local_298 [16];
  longlong local_288;
  int local_258;
  int local_240;
  undefined4 local_238;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_210;
  uint local_20c;
  undefined4 local_200;
  longlong local_1f8;
  uint local_1f0;
  undefined4 local_1ec;
  uint local_1c;
  
  local_3c0 = auStack_418;
  local_388 = param_1[10];
  if ((local_388 == 0) && (*(longlong *)(param_1[9] + 0x10) != 0)) {
    lVar5 = FUN_00608c80(&PTR_FUN_005f92e8,1);
    param_1[10] = lVar5;
    local_388 = param_1[10];
    local_3a5 = '\x01';
    FUN_00a0a260(param_1,local_380);
    FUN_0060b650(param_1[10],0);
    if ((*(int *)((longlong)param_1 + 0x6c) == 1) || (local_258 == 1)) {
      FUN_0060bbf0(param_1[10],3);
    }
    else if (local_258 - 4U < 2) {
      FUN_0060bbf0(param_1[10],7);
    }
    else {
      FUN_0060bbf0(param_1[10],6);
    }
    local_3f8 = 0;
    FUN_00498350(local_3d0,0,0,0);
    pcVar6 = (code *)FUN_00411550(param_1,0xfffd);
    local_3f8 = local_3f8 & 0xffffff00;
    local_3f0 = local_3d0;
    local_3e8 = 0;
    (*pcVar6)(param_1,param_1,0,0);
    lVar5 = param_1[0xc];
    if (lVar5 != 0) {
      if (*(int *)((longlong)param_1 + 0x6c) == 1) {
        FUN_00a0acc0(local_298,lVar5);
        uVar7 = FUN_00608880(param_1[0xc]);
        (**(code **)(*(longlong *)param_1[10] + 0x78))((longlong *)param_1[10],uVar7);
        local_3a5 = '\0';
      }
      else {
        thunk_FUN_0416f828(lVar5);
        param_1[0xc] = 0;
      }
    }
    FUN_00a0dfc0(local_298);
    local_3b0 = (longlong *)param_1[10];
    FUN_0060b650(local_3b0,0);
    (**(code **)(*local_3b0 + 0x88))(local_3b0,local_210);
    (**(code **)(*local_3b0 + 0x70))(local_3b0,local_20c);
    local_398 = (undefined4 *)FUN_0060a050(local_3b0,0);
    if (local_20c < 2) {
      local_38c = 1;
      local_1c = 0;
    }
    else {
      iVar3 = FUN_0060a050(local_3b0,1);
      local_1c = iVar3 - (int)local_398;
      if (((int)local_1c < 1) || ((local_1c & 3) != 0)) {
        local_38c = 1;
      }
      else {
        local_38c = local_200;
      }
    }
    if (local_240 != 0) {
      while (iVar3 = FUN_00a0c030(local_298), iVar3 != 2) {
        FUN_00a0e310(local_298,local_1ec);
        if ((((*(int *)(local_288 + 0x10) == 0) && (local_1f8 != 0)) &&
            (cVar2 = FUN_00609f90(param_1[10]), cVar2 == '\x03')) && (local_3a5 != '\0')) {
          uVar7 = FUN_00a0abd0(local_298);
          (**(code **)(*(longlong *)param_1[10] + 0x78))((longlong *)param_1[10],uVar7);
          *(undefined1 *)((longlong)param_1 + 0x3a) = 1;
        }
        local_398 = (undefined4 *)FUN_0060a050(param_1[10],0);
        while (local_1f0 < local_20c) {
          local_390 = FUN_00a0e1b0(local_298,&local_398,local_38c);
          if (local_258 == 4) {
            local_3a0 = local_398;
            local_3a4 = (**(code **)(*(longlong *)param_1[10] + 0x60))((longlong *)param_1[10]);
            for (; puVar1 = local_3a0,
                (longlong)local_3a0 - (longlong)local_398 < (longlong)(local_3a4 * 4);
                local_3a0 = local_3a0 + 1) {
              uVar4 = FUN_00a0ad80(*local_3a0);
              *puVar1 = uVar4;
            }
          }
          local_398 = (undefined4 *)((longlong)local_398 + (longlong)(int)(local_1c * local_390));
        }
        FUN_00a0e380(local_298);
      }
      local_238 = local_2a8;
      local_228 = local_2a0;
      if (local_2a4 != '\0') {
        local_224 = 0xffffffff;
        local_1f8 = 0;
      }
      FUN_00a0e310(local_298,local_1ec);
      local_398 = (undefined4 *)FUN_0060a050(param_1[10],0);
    }
    if (((local_240 == 0) || (local_2a4 != '\0')) && ((local_1f8 != 0 && (local_3a5 != '\0')))) {
      uVar7 = FUN_00a0abd0(local_298);
      (**(code **)(*(longlong *)param_1[10] + 0x78))((longlong *)param_1[10],uVar7);
      *(undefined1 *)((longlong)param_1 + 0x3a) = 1;
      local_398 = (undefined4 *)FUN_0060a050(param_1[10],0);
    }
    while (local_1f0 < local_20c) {
      local_390 = FUN_00a0e1b0(local_298,&local_398,local_38c);
      cVar2 = FUN_00609f90(param_1[10]);
      if (cVar2 == '\a') {
        local_3a0 = local_398;
        local_3a4 = (**(code **)(*(longlong *)param_1[10] + 0x60))((longlong *)param_1[10]);
        for (; puVar1 = local_3a0,
            (longlong)local_3a0 - (longlong)local_398 < (longlong)(local_3a4 * 4);
            local_3a0 = local_3a0 + 1) {
          uVar4 = FUN_00a0ad80(*local_3a0);
          *puVar1 = uVar4;
        }
      }
      local_398 = (undefined4 *)((longlong)local_398 + (longlong)(int)(local_1c * local_390));
    }
    if (local_240 != 0) {
      FUN_00a0e380(local_298);
    }
    FUN_00a0c310(local_298);
    lVar5 = FUN_004097b0();
    if (lVar5 == 0) {
      local_1c = 100;
    }
    else {
      local_1c = 0;
    }
    local_3f8 = 0;
    FUN_00498350(local_3d0,0,0,0);
    pcVar6 = (code *)FUN_00411550(param_1,0xfffd);
    local_3f8 = CONCAT31(local_3f8._1_3_,*(undefined1 *)((longlong)param_1 + 0x3a));
    local_3f0 = local_3d0;
    local_3e8 = 0;
    (*pcVar6)(param_1,param_1,2,(undefined1)local_1c);
    if (*(char *)((longlong)param_1 + 0x3a) != '\0') {
      (**(code **)(*param_1 + 0x20))(param_1,param_1);
    }
    FUN_00a0a230(local_380);
  }
  return local_388;
}

