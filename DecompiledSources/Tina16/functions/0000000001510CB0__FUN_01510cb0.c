/* Ghidra address: 01510cb0 */
/* Ghidra symbol: FUN_01510cb0 */


void FUN_01510cb0(longlong param_1,byte *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  byte *pbVar9;
  int iVar10;
  int local_3b8;
  int local_3b4;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_380 [2];
  undefined1 local_370 [759];
  undefined1 local_79;
  byte local_78 [80];
  
  local_3b0 = 0;
  local_3a8 = 0;
  local_3a0 = 0;
  local_398 = 0;
  local_390 = 0;
  local_380[0] = 0;
  local_388 = 0;
  uVar8 = (ulonglong)*param_2;
  if (0x4f < uVar8) {
    uVar8 = 0x50;
  }
  local_79 = (undefined1)uVar8;
  pbVar9 = local_78;
  for (; param_2 = param_2 + 1, uVar8 != 0; uVar8 = uVar8 - 1) {
    *pbVar9 = *param_2;
    pbVar9 = pbVar9 + 1;
  }
  FUN_004154b0(local_380,&local_79,0);
  FUN_00416880(&local_388,local_380[0]);
  FUN_0040cf10(local_370,local_388,0);
  FUN_00409900();
  FUN_0040ca00(local_370);
  FUN_00409900();
  uVar5 = FUN_0040f200(local_370,L"@ Digital Signal Generator file");
  FUN_0040f590(uVar5);
  FUN_00409900();
  FUN_0040f590(local_370);
  FUN_00409900();
  uVar5 = FUN_0040f200(local_370,L".# Period");
  FUN_0040f590(uVar5);
  FUN_00409900();
  uVar5 = (**(code **)(**(longlong **)(param_1 + 0xee0) + 0xc0))(*(longlong **)(param_1 + 0xee0));
  FUN_00b8fd60(&local_390,uVar5,2,0,1);
  uVar5 = FUN_0040f200(local_370,local_390);
  FUN_0040f590(uVar5);
  FUN_00409900();
  uVar5 = FUN_0040f200(local_370,L".# Length");
  FUN_0040f590(uVar5);
  FUN_00409900();
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0xee0) + 0xe8))(*(longlong **)(param_1 + 0xee0));
  FUN_0043f750(&local_398,uVar3);
  uVar5 = FUN_0040f200(local_370,local_398);
  FUN_0040f590(uVar5);
  FUN_00409900();
  FUN_0040f590(local_370);
  FUN_00409900();
  iVar4 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x7d8) + 0x4f0) + 0x28))();
  local_3b4 = 0;
  if (-1 < iVar4 + -1) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7d8) + 0x4f0);
      uVar5 = (**(code **)(*plVar1 + 0x30))(plVar1,local_3b4);
      lVar6 = FUN_004113f0(uVar5,&PTR_FUN_01106728);
      lVar2 = *(longlong *)(lVar6 + 0x148);
      uVar5 = FUN_0040f200(local_370,*(undefined8 *)(lVar6 + 8));
      FUN_0040f590(uVar5);
      FUN_00409900();
      uVar5 = FUN_0040f200(local_370,L"Default");
      FUN_0040f590(uVar5);
      FUN_00409900();
      lVar6 = FUN_01d3aab0(lVar2,0);
      FUN_01510bd0(param_1,&local_3a0,*(undefined1 *)(lVar6 + 8));
      uVar5 = FUN_0040f200(local_370,local_3a0);
      FUN_0040f590(uVar5);
      FUN_00409900();
      FUN_0040f590(local_370);
      FUN_00409900();
      iVar10 = *(int *)(lVar2 + 0x10) + -1;
      local_3b8 = 1;
      if (0 < iVar10) {
        do {
          puVar7 = (undefined8 *)FUN_01d3aab0(lVar2,local_3b8);
          FUN_00b8fd60(&local_3a8,*puVar7,2,0,1);
          uVar5 = FUN_0040f200(local_370,local_3a8);
          FUN_0040f590(uVar5);
          FUN_00409900();
          lVar6 = FUN_01d3aab0(lVar2,local_3b8);
          FUN_01510bd0(param_1,&local_3b0,*(undefined1 *)(lVar6 + 8));
          uVar5 = FUN_0040f200(local_370,local_3b0);
          FUN_0040f590(uVar5);
          FUN_00409900();
          FUN_0040f590(local_370);
          FUN_00409900();
          local_3b8 = local_3b8 + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      uVar5 = FUN_0040f200(local_370,L".# end of psg");
      FUN_0040f590(uVar5);
      FUN_00409900();
      local_3b4 = local_3b4 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  uVar5 = FUN_0040f200(local_370,L".@ end of file");
  FUN_0040f590(uVar5);
  FUN_00409900();
  FUN_0040d150(local_370);
  FUN_00409900();
  FUN_00414560(&local_3b0,6);
  FUN_004144d0(local_380);
  return;
}

