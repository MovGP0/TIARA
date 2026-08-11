/* Ghidra address: 012f41e0 */
/* Ghidra symbol: FUN_012f41e0 */


void FUN_012f41e0(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_b8;
  uint local_b0 [2];
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  uint local_80 [2];
  undefined1 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  char local_31;
  undefined8 local_30;
  undefined4 local_28;
  uint local_24;
  longlong *local_20;
  
  local_40 = auStack_e8;
  local_b8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_88 = 0;
  local_90 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_30 = 0;
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)PTR_DAT_020013f8 = 0;
  FUN_00414ad0(*(longlong *)(param_1 + 0x770) + 0xe0,L"Text file (*.txt)|*.txt");
  FUN_00414ad0(*(longlong *)(param_1 + 0x770) + 0x100,&DAT_012f47d8);
  local_c8 = 0;
  (**(code **)(**(longlong **)(param_1 + 0xa98) + 0x10))
            (*(longlong **)(param_1 + 0xa98),&local_30,L"ModelTest Settings",L"TestBench");
  FUN_00416ba0(&local_48,L"file name: ",local_30);
  FUN_013022b0(param_1,local_48);
  FUN_00441640(&local_50,local_30);
  FUN_00724420(*(undefined8 *)(param_1 + 0x770),local_50);
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x770) + 0xa8))(*(longlong **)(param_1 + 0x770));
  if (cVar1 != '\0') {
    FUN_013022b0(param_1,L"Before load file ");
    FUN_00724270(*(undefined8 *)(param_1 + 0x770),&local_58);
    (**(code **)(*local_20 + 0xd8))(local_20,local_58);
    FUN_013022b0(param_1,L"After load file ");
    local_31 = '\0';
    local_24 = 0;
    local_28 = (**(code **)(*local_20 + 0x28))(local_20);
    uVar4 = FUN_007fc180(&PTR_FUN_012e9fe8,1,*(undefined8 *)PTR_DAT_02004030);
    *(undefined8 *)PTR_DAT_020013f8 = uVar4;
    local_80[0] = local_24;
    local_78 = 0;
    local_70 = local_28;
    local_68 = 0;
    FUN_00442f70(&local_60,L"Multiple status: %d/%d",local_80,1);
    FUN_012ea640(*(undefined8 *)PTR_DAT_020013f8,0,local_60);
    FUN_012ea610(*(undefined8 *)PTR_DAT_020013f8,1,0);
    FUN_008059a0(*(undefined8 *)PTR_DAT_020013f8);
    FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
    FUN_013022b0(param_1,L"Multiple run start...");
    uVar2 = (**(code **)(*local_20 + 0x28))(local_20);
    FUN_0043f750(&local_90,uVar2);
    FUN_00416ba0(&local_88,L"File count: ",local_90);
    FUN_013022b0(param_1,local_88);
    while( true ) {
      iVar3 = (**(code **)(*local_20 + 0x28))(local_20);
      if ((iVar3 <= (int)local_24) || (local_31 != '\0')) break;
      (**(code **)(*local_20 + 0x18))(local_20,&local_98,local_24);
      FUN_012f3f60(param_1,local_98,1);
      local_b0[0] = local_24;
      local_a8 = 0;
      FUN_00442f70(&local_a0,L"Multiple run: %d",local_b0,0);
      FUN_013022b0(param_1,local_a0);
      local_80[0] = local_24 + 1;
      local_31 = *(char *)(*(longlong *)PTR_DAT_020013f8 + 0x6c9);
      local_78 = 0;
      local_70 = local_28;
      local_68 = 0;
      local_24 = local_80[0];
      FUN_00442f70(&local_b8,L"Multiple status: %d/%d",local_80);
      FUN_012ea640(*(undefined8 *)PTR_DAT_020013f8,0,local_b8);
      FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
      thunk_FUN_0419965d(200);
    }
  }
  FUN_013022b0(param_1,L"Multiple run end..");
  FUN_00410f20(local_20);
  *(undefined1 *)(*(longlong *)PTR_DAT_02003e70 + 0x98) = 0;
  if (*(longlong *)PTR_DAT_020013f8 != 0) {
    FUN_00410f20(*(undefined8 *)PTR_DAT_020013f8);
    *(undefined8 *)PTR_DAT_020013f8 = 0;
  }
  FUN_00414480(&local_b8);
  FUN_00414560(&local_a0,4);
  FUN_00414480(&local_60);
  FUN_00414480(&local_58);
  FUN_00414560(&local_50,2);
  FUN_00414480(&local_30);
  return;
}

