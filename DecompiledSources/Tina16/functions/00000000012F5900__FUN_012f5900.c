/* Ghidra address: 012f5900 */
/* Ghidra symbol: FUN_012f5900 */


void FUN_012f5900(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_368 [32];
  ulonglong local_348;
  longlong local_340;
  wchar_t *local_338;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  int local_308 [2];
  undefined1 local_300;
  undefined4 local_2f8;
  undefined1 local_2f0;
  undefined8 local_2e8;
  undefined1 *local_2e0;
  longlong *local_2d8;
  ulonglong local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  int local_2b4;
  undefined4 local_2b0;
  int local_2ac;
  undefined1 local_2a8 [24];
  ulonglong local_290;
  char local_22;
  undefined1 local_21;
  undefined8 *local_20;
  
  local_2e0 = auStack_368;
  local_328 = 0;
  local_320 = 0;
  local_318 = 0;
  local_310 = 0;
  local_2e8 = 0;
  local_2c0 = 0;
  local_2c8 = 0;
  local_2d0 = 0;
  FUN_00417580(local_2a8,&DAT_00432b90);
  local_21 = *PTR_DAT_02003768;
  *(undefined8 *)PTR_DAT_020013f8 = 0;
  local_2d8 = (longlong *)FUN_007fc180(&PTR_FUN_012e71d8,1,*(undefined8 *)PTR_DAT_02004030);
  iVar1 = (**(code **)(*local_2d8 + 0x2d0))(local_2d8);
  if (iVar1 == 1) {
    *PTR_DAT_02003768 = 0;
    local_22 = '\0';
    local_2ac = 0;
    local_2b0 = FUN_012f4ad0(local_2d8[0xe4],L"*.tsc");
    uVar2 = FUN_007fc180(&PTR_FUN_012e9fe8,1,*(undefined8 *)PTR_DAT_02004030);
    *(undefined8 *)PTR_DAT_020013f8 = uVar2;
    FUN_012ea610(*(undefined8 *)PTR_DAT_020013f8,1,0);
    local_308[0] = local_2ac;
    local_300 = 0;
    local_2f8 = local_2b0;
    local_2f0 = 0;
    FUN_00442f70(&local_2e8,L"Progress: %d/%d",local_308,1);
    FUN_012ea640(*(undefined8 *)PTR_DAT_020013f8,0,local_2e8);
    FUN_008059a0(*(undefined8 *)PTR_DAT_020013f8);
    FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
    FUN_00416ba0(&local_310,local_2d8[0xe4],L"\\*.tsc");
    local_2b4 = FUN_00441230(local_310,0x20,local_2a8);
    while ((local_2b4 == 0 && (local_22 == '\0'))) {
      local_348 = local_290;
      FUN_00416cd0(&local_2c0,3,local_2d8[0xe4],&DAT_012f5f80);
      local_20 = (undefined8 *)FUN_0198b200(0,&PTR_FUN_01984d18,1,0);
      local_348 = local_348 & 0xffffffffffffff00;
      lVar3 = FUN_014a74d0(local_2c0,local_20,0,0);
      if (lVar3 != 0) {
        FUN_00441920(&local_318,local_2c0);
        FUN_00414b50(&local_2c0,local_318);
        FUN_012f5840(auStack_368,&local_320,local_2c0);
        FUN_00414b50(&local_2d0,local_320);
        local_348 = local_2d0;
        local_340 = local_2d8[0xe6];
        local_338 = L".tsc";
        FUN_00416cd0(&local_2c8,5,local_2d8[0xe5],&DAT_012f5f80);
        local_348 = local_348 & 0xffffffffffffff00;
        local_340 = 0;
        FUN_014a16d0(local_20,local_2c8,0,1);
      }
      if (local_20 != (undefined8 *)0x0) {
        uVar2 = (**(code **)*local_20)(local_20);
        FUN_00418590(uVar2,&DAT_01984da0);
      }
      local_308[0] = local_2ac + 1;
      local_300 = 0;
      local_2f8 = local_2b0;
      local_2f0 = 0;
      local_2ac = local_308[0];
      FUN_00442f70(&local_328,L"Progress: %d/%d",local_308,1);
      FUN_012ea640(*(undefined8 *)PTR_DAT_020013f8,0,local_328);
      local_22 = *(char *)(*(longlong *)PTR_DAT_020013f8 + 0x6c9);
      FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
      local_2b4 = FUN_00441290(local_2a8);
    }
    FUN_004412c0(local_2a8);
    (**(code **)(**(longlong **)(param_1 + 0xa98) + 0x18))
              (*(longlong **)(param_1 + 0xa98),L"ModelTest Settings",L"DE_SourceFolder",
               local_2d8[0xe4]);
    (**(code **)(**(longlong **)(param_1 + 0xa98) + 0x18))
              (*(longlong **)(param_1 + 0xa98),L"ModelTest Settings",L"DE_TargetFolder",
               local_2d8[0xe5]);
    (**(code **)(**(longlong **)(param_1 + 0xa98) + 0x18))
              (*(longlong **)(param_1 + 0xa98),L"ModelTest Settings",L"DE_TargetPrefix",
               local_2d8[0xe6]);
  }
  *PTR_DAT_02003768 = local_21;
  if (*(longlong *)PTR_DAT_020013f8 != 0) {
    FUN_00410f20(*(undefined8 *)PTR_DAT_020013f8);
    *(undefined8 *)PTR_DAT_020013f8 = 0;
  }
  FUN_00414560(&local_328,4);
  FUN_00414480(&local_2e8);
  FUN_00414560(&local_2d0,3);
  FUN_00417740(local_2a8,&DAT_00432b90);
  return;
}

