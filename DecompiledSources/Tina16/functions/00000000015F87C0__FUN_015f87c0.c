/* Ghidra address: 015f87c0 */
/* Ghidra symbol: FUN_015f87c0 */


void FUN_015f87c0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 local_res8 [4];
  int local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [88];
  undefined8 local_48;
  undefined8 local_40;
  int local_34 [2];
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  
  local_b8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_40 = 0;
  local_48 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  plVar5 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  bVar2 = false;
  lVar6 = FUN_01cfde70(param_2,2,1,&local_29,&local_2a,&local_2b);
  lVar6 = *(longlong *)(lVar6 + 8);
  FUN_01d3f830(param_2,local_34);
  FUN_00c42670(0x4000000000000000,(double)local_34[0]);
  iVar4 = FUN_0040c840();
  local_c8 = 0;
  bVar3 = false;
  if (-1 < iVar4 + -1) {
    do {
      bVar2 = bVar3;
      sVar1 = *(short *)(lVar6 + (longlong)local_c8 * 2);
      if (sVar1 != 0) {
        FUN_01aa0f40(local_a0,local_c8,local_34[0]);
        FUN_004169a0(&local_40,local_a0);
        FUN_01aa0f40(local_a0,sVar1,param_3);
        FUN_004169a0(&local_48,local_a0);
        FUN_00416cd0(&local_a8,3,local_40,&DAT_015f8abc,local_48);
        (**(code **)(*plVar5 + 0x78))(plVar5,local_a8);
        bVar2 = true;
      }
      local_c8 = local_c8 + 1;
      iVar4 = iVar4 + -1;
      bVar3 = bVar2;
    } while (iVar4 != 0);
  }
  if (!bVar2) {
    FUN_01aa0f40(local_a0,0,local_34[0]);
    FUN_004169a0(&local_40,local_a0);
    FUN_01aa0f40(local_a0,0,param_3);
    FUN_004169a0(&local_48,local_a0);
    FUN_00416cd0(&local_b0,3,local_40,&DAT_015f8abc,local_48);
    (**(code **)(*plVar5 + 0x78))(plVar5,local_b0);
  }
  FUN_015f8b00(&local_c0,param_2);
  FUN_00416cd0(&local_b8,4,local_res8[0],L"ram_file_",local_c0,L".dat");
  (**(code **)(*plVar5 + 0x100))(plVar5,local_b8);
  FUN_00410f20(plVar5);
  FUN_00414560(&local_c0,4);
  FUN_00414560(&local_48,2);
  FUN_00414480(local_res8);
  return;
}

