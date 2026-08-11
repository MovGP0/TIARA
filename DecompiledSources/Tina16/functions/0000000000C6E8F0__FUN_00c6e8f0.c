/* Ghidra address: 00c6e8f0 */
/* Ghidra symbol: FUN_00c6e8f0 */


void FUN_00c6e8f0(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  int local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  int local_34;
  longlong *local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_70 = auStack_d8;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_48 = 0;
  local_50 = 0;
  local_20[0] = 0;
  local_28 = FUN_005ea3c0(&DAT_005e7878,1);
  cVar1 = FUN_005ea880(local_28,*(undefined8 *)(param_1 + 0x10),0);
  if (cVar1 != '\0') {
    local_30 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_005eb0d0(local_28,local_30);
    iVar3 = (**(code **)(*local_30 + 0x28))();
    local_9c = iVar3 + -1;
    local_34 = 0;
    if (-1 < local_9c) {
      do {
        local_9c = iVar3;
        FUN_00414480(local_20);
        local_60 = *(undefined8 *)(param_1 + 0x10);
        FUN_0044f8b0(local_20,local_60);
        (**(code **)(*local_30 + 0x18))(local_30,&local_78,local_34);
        local_b8 = local_78;
        FUN_00416cd0(&local_48,3,local_20[0],&DAT_00c6ed5c);
        FUN_00414480(local_20);
        FUN_005ea630(local_28);
        cVar1 = FUN_005ea880(local_28,local_48,0);
        if (cVar1 != '\0') {
          FUN_005eb6d0(local_28,&local_50,L"Name");
          uVar4 = FUN_005eba50(local_28,L"SpecFolder");
          uVar4 = FUN_00c6e8c0(auStack_d8,uVar4);
          local_40 = FUN_00c6fe90(*(undefined8 *)(param_1 + 0x20),local_50,uVar4);
          if (local_40 == 0) {
            local_40 = FUN_00c6fda0(*(undefined8 *)(param_1 + 0x20));
          }
          FUN_00c6fcb0(local_40,local_50);
          FUN_005eb6d0(local_28,&local_80,L"Path");
          FUN_00c6fcd0(local_40,local_80);
          FUN_005eb6d0(local_28,&local_88,L"RegPath");
          FUN_00c6fcf0(local_40,local_88);
          FUN_005eb6d0(local_28,&local_90,L"IconDll");
          FUN_00c6fc90(local_40,local_90);
          uVar4 = FUN_005eba50(local_28,L"Icon");
          FUN_00c6fc80(local_40,uVar4);
          uVar4 = FUN_005eba50(local_28,L"IconHot");
          FUN_00c6fc70(local_40,uVar4);
          FUN_005eb6d0(local_28,&local_98,L"Hint");
          FUN_00c6fc50(local_40,local_98);
          uVar4 = FUN_005eba50(local_28,L"SpecFolder");
          uVar4 = FUN_00c6e8c0(auStack_d8,uVar4);
          FUN_00c6fd10(local_40,uVar4);
          uVar2 = FUN_005ebab0(local_28,L"AutoCaption");
          *(undefined1 *)(local_40 + 0x50) = uVar2;
        }
        local_34 = local_34 + 1;
        local_9c = local_9c + -1;
        iVar3 = local_9c;
      } while (local_9c != 0);
    }
    FUN_00410f20(local_30);
  }
  FUN_005ea630(local_28);
  FUN_00410f20(local_28);
  FUN_00414560(&local_98,5);
  FUN_00414560(&local_50,2);
  FUN_00414480(local_20);
  return;
}

