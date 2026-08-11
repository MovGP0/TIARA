/* Ghidra address: 01511720 */
/* Ghidra symbol: FUN_01511720 */


void FUN_01511720(longlong param_1,byte *param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  byte *pbVar6;
  undefined1 auStack_478 [32];
  undefined1 local_458;
  undefined8 local_440;
  undefined8 local_438;
  undefined8 local_430;
  undefined8 local_428;
  undefined8 local_420;
  undefined8 local_418;
  undefined8 local_410;
  undefined8 local_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined1 *local_3c0;
  undefined8 local_3b8;
  char local_3a9;
  longlong local_3a8;
  undefined8 local_3a0;
  undefined4 local_394;
  undefined4 local_390 [2];
  undefined8 local_388;
  undefined1 local_37a;
  undefined1 local_379;
  byte local_378 [80];
  undefined1 local_328 [760];
  undefined8 local_30 [2];
  
  local_3c0 = auStack_478;
  local_440 = 0;
  local_438 = 0;
  local_430 = 0;
  local_428 = 0;
  local_420 = 0;
  local_418 = 0;
  local_410 = 0;
  local_408 = 0;
  local_400 = 0;
  local_3f8 = 0;
  local_3f0 = 0;
  local_3e8 = 0;
  local_3e0 = 0;
  local_3d8 = 0;
  local_3c8 = 0;
  local_3d0 = 0;
  local_30[0] = 0;
  uVar5 = (ulonglong)*param_2;
  if (0x4f < uVar5) {
    uVar5 = 0x50;
  }
  local_379 = (undefined1)uVar5;
  pbVar6 = local_378;
  for (; param_2 = param_2 + 1, uVar5 != 0; uVar5 = uVar5 - 1) {
    *pbVar6 = *param_2;
    pbVar6 = pbVar6 + 1;
  }
  FUN_004154b0(&local_3c8,&local_379,0);
  FUN_00416880(&local_3d0,local_3c8);
  FUN_0040cf10(local_328,local_3d0,0);
  FUN_00409900();
  FUN_0040c9e0(local_328);
  FUN_00409900();
  FUN_015116c0(auStack_478);
  FUN_00416dc0(&local_3d8,local_30[0],1,2);
  iVar3 = FUN_00416db0(local_3d8,&DAT_01511ed8);
  if (iVar3 != 0) {
    local_3a0 = (**(code **)(**(longlong **)(param_1 + 0xee0) + 0xc0))
                          (*(longlong **)(param_1 + 0xee0));
    local_394 = (**(code **)(**(longlong **)(param_1 + 0xee0) + 0xe8))
                          (*(longlong **)(param_1 + 0xee0));
    while( true ) {
      FUN_015116c0(auStack_478);
      FUN_00416dc0(&local_3e0,local_30[0],1,2);
      iVar3 = FUN_00416db0(local_3e0,&DAT_01511ed8);
      if (iVar3 == 0) break;
      local_3a9 = '\0';
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0xee0) + 0x40))
                        (*(longlong **)(param_1 + 0xee0),local_30[0],local_390);
      if (cVar2 == '\0') {
        FUN_00416dc0(&local_418,local_30[0],1,9);
        iVar3 = FUN_00416db0(local_418,L".# Period");
        if (iVar3 == 0) {
          FUN_015116c0(auStack_478);
          local_3a0 = FUN_00b8f030(local_30[0]);
        }
        else {
          FUN_00416dc0(&local_428,local_30[0],1,9);
          iVar3 = FUN_00416db0(local_428,L".# Length");
          if (iVar3 == 0) {
            FUN_015116c0(auStack_478);
            local_394 = FUN_0043fc00(local_30[0]);
          }
          else {
            do {
              FUN_015116c0(auStack_478);
              FUN_00416dc0(&local_438,local_30[0],1,2);
              iVar3 = FUN_00416db0(local_438,&DAT_01511ed8);
              if (iVar3 == 0) goto LAB_01511dc0;
              FUN_00416dc0(&local_440,local_30[0],1,2);
              iVar3 = FUN_00416db0(local_440,&DAT_01511f0c);
              if (iVar3 == 0) {
                local_3a9 = '\x01';
              }
            } while (local_3a9 == '\0');
          }
        }
      }
      else {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7d8) + 0x4f0);
        uVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,local_390[0]);
        local_3a8 = FUN_004113f0(uVar4,&PTR_FUN_01106728);
        local_3b8 = *(undefined8 *)(local_3a8 + 0x148);
        FUN_00b95290(local_3b8);
        FUN_015116c0(auStack_478);
        iVar3 = FUN_00416db0(local_30[0],L"Default");
        if (iVar3 != 0) {
          uVar4 = FUN_00b89270();
          FUN_00b8e520(uVar4,&local_3e8,0x46b);
          FUN_0072d440(local_3e8,1,4,0);
          break;
        }
        FUN_015116c0(auStack_478);
        cVar2 = FUN_01510aa0(param_1,local_30[0],&local_37a);
        if (cVar2 == '\0') {
          uVar4 = FUN_00b89270();
          FUN_00b8e520(uVar4,&local_3f0,0x46c);
          FUN_0072d440(local_3f0,1,4,0);
          break;
        }
        FUN_01d3aad0(local_3b8,0,local_37a);
        local_3a9 = '\0';
        do {
          FUN_015116c0(auStack_478);
          FUN_00416dc0(&local_3f8,local_30[0],1,2);
          iVar3 = FUN_00416db0(local_3f8,&DAT_01511ed8);
          if (iVar3 == 0) goto LAB_01511dc0;
          FUN_00416dc0(&local_400,local_30[0],1,2);
          iVar3 = FUN_00416db0(local_400,&DAT_01511f0c);
          if (iVar3 == 0) {
            local_3a9 = '\x01';
          }
          else {
            local_388 = FUN_00b8f030(local_30[0]);
            FUN_015116c0(auStack_478);
            cVar2 = FUN_01510aa0(param_1,local_30[0],&local_37a);
            if (cVar2 == '\0') {
              uVar4 = FUN_00b89270();
              FUN_00b8e520(uVar4,&local_410,0x46c);
              FUN_0072d440(local_410,1,4,0);
              goto LAB_01511dc0;
            }
            FUN_01d3aad0(local_3b8,local_388,local_37a);
          }
        } while (local_3a9 == '\0');
      }
    }
  }
LAB_01511dc0:
  FUN_0040d150(local_328);
  FUN_00409900();
  local_458 = 0;
  FUN_0150fa70(param_1,local_394,local_3a0,0);
  FUN_00414560(&local_440,0xf);
  FUN_004144d0(&local_3c8);
  FUN_00414480(local_30);
  return;
}

