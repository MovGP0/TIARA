/* Ghidra address: 00a0a5b0 */
/* Ghidra symbol: FUN_00a0a5b0 */


void FUN_00a0a5b0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  longlong lVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined1 auStack_408 [32];
  uint local_3e8;
  undefined1 *local_3e0;
  undefined8 local_3d8;
  undefined1 local_3c0 [16];
  undefined1 *local_3b0;
  longlong local_3a8;
  uint local_3a0;
  int local_39c;
  undefined8 local_398 [21];
  code *local_2f0 [3];
  longlong local_2d8;
  undefined8 *local_2b0 [2];
  code **local_2a0;
  undefined4 local_280;
  uint local_27c;
  undefined4 local_278;
  undefined4 local_274;
  uint local_180;
  longlong *local_38;
  uint local_2c;
  
  local_3b0 = auStack_408;
  FUN_0040d200(local_398,0x360,0);
  ppuVar7 = &PTR_FUN_01e6e6c0;
  puVar8 = local_398;
  for (lVar6 = 0x15; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *ppuVar7;
    ppuVar7 = ppuVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  local_2b0[0] = local_398;
  FUN_00a1d840(local_2b0,0x3e,0x208);
  local_2f0[0] = FUN_00a0a0c0;
  local_2a0 = local_2f0;
  local_2d8 = param_1;
  FUN_00a0ade0(param_1);
  if (*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10) != 0) {
    FUN_00a0b890(param_1);
  }
  uVar4 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x10) = uVar4;
  FUN_004b6dc0(uVar4,0);
  FUN_00a1be10(local_2b0,*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x10));
  plVar1 = *(longlong **)(param_1 + 0x50);
  if (((plVar1 != (longlong *)0x0) && (iVar2 = (**(code **)(*plVar1 + 0x60))(plVar1), iVar2 != 0))
     && (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x48))
                           (*(longlong **)(param_1 + 0x50)), iVar2 != 0)) {
    local_280 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x60))
                          (*(longlong **)(param_1 + 0x50));
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x60))(*(longlong **)(param_1 + 0x50));
    *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x1c) = uVar3;
    local_27c = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x48))
                          (*(longlong **)(param_1 + 0x50));
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x48))(*(longlong **)(param_1 + 0x50));
    *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x18) = uVar3;
    local_278 = 3;
    local_274 = 2;
    local_38 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
    (**(code **)(*local_38 + 0x10))(local_38,*(undefined8 *)(param_1 + 0x50));
    FUN_0060bbf0(local_38,6);
    FUN_00a1c5a0(local_2b0);
    FUN_00a1c560(local_2b0,*(undefined1 *)(param_1 + 0x70),0xffffffff);
    if (*(char *)(param_1 + 0x69) != '\0') {
      *(undefined1 *)(*(longlong *)(param_1 + 0x48) + 0x20) = 1;
      FUN_00a1cad0(local_2b0,1);
    }
    if (*(char *)(param_1 + 0x72) != '\0') {
      FUN_00a1ce00(local_2b0);
    }
    local_3a8 = FUN_0060a050(local_38,0);
    if (local_27c < 2) {
      local_3a0 = 1;
      local_2c = 0;
    }
    else {
      iVar2 = FUN_0060a050(local_38,1);
      local_2c = iVar2 - (int)local_3a8;
      if (((int)local_2c < 1) || ((local_2c & 3) != 0)) {
        local_3a0 = 1;
      }
      else {
        local_3a0 = local_27c;
      }
    }
    local_3e8 = 0;
    FUN_00498350(local_3c0,0,0,0);
    pcVar5 = (code *)FUN_00411550(param_1,0xfffd);
    local_3e8 = local_3e8 & 0xffffff00;
    local_3e0 = local_3c0;
    local_3d8 = 0;
    (*pcVar5)(param_1,param_1,0,0);
    FUN_00a1d640(local_2b0,0xffffffff);
    while (local_180 < local_27c) {
      local_39c = FUN_00a1d6c0(local_2b0,&local_3a8,local_3a0);
      local_3a8 = local_3a8 + (int)(local_2c * local_39c);
    }
    FUN_00a1da30(local_2b0);
    lVar6 = FUN_004097b0();
    if (lVar6 == 0) {
      local_2c = 100;
    }
    else {
      local_2c = 0;
    }
    local_3e8 = 0;
    FUN_00498350(local_3c0,0,0,0);
    pcVar5 = (code *)FUN_00411550(param_1,0xfffd);
    local_3e8 = local_3e8 & 0xffffff00;
    local_3e0 = local_3c0;
    local_3d8 = 0;
    (*pcVar5)(param_1,param_1,2,(undefined1)local_2c);
    FUN_00410f20(local_38);
    FUN_00a0a230(local_398);
    return;
  }
  FUN_00a0aaf0(0,local_3b0);
  return;
}

