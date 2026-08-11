/* Ghidra address: 0125d4b0 */
/* Ghidra symbol: FUN_0125d4b0 */


void FUN_0125d4b0(undefined8 param_1,longlong *param_2,uint param_3,longlong param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8,
                 undefined8 param_9,undefined4 param_10)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  undefined8 local_res8;
  longlong *local_res10 [3];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90 [2];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40 [2];
  
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_f0 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_90[0] = 0;
  local_98 = 0;
  local_40[0] = (longlong *)0x0;
  local_48 = 0;
  local_50 = (longlong *)0x0;
  local_58 = 0;
  local_60 = (longlong *)0x0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_res8 = param_1;
  local_res10[0] = param_2;
  FUN_0041b910(param_1);
  FUN_0041b910(local_res10[0]);
  FUN_00414610(param_6);
  FUN_00414610(param_7);
  FUN_00414610(param_9);
  if (((param_3 & 4) == 0) && (DAT_01f2c224 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((bVar1) && (local_res10[0] == (longlong *)0x0)) {
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,
                         L"CreateMCUSubCktCFilesParameterNodeProc: xmlDoc is Nil");
    FUN_004134c0(uVar3);
  }
  FUN_00bac3d0(&local_60);
  if (bVar1) {
    FUN_0041b840(&local_60,local_res8);
    FUN_0043f750(&local_98,param_10);
    FUN_00416ba0(local_90,L"source_files",local_98);
    (**(code **)(*local_60 + 0x148))(local_60,local_40,local_90[0]);
    (**(code **)(*local_res10[0] + 0x98))(local_res10[0],&local_a0,local_40[0]);
  }
  else {
    (**(code **)(*local_60 + 0x148))(local_60,&local_a8,L"files");
    (**(code **)(*local_60 + 0x108))(local_60,local_a8);
    (**(code **)(*local_60 + 0x100))(local_60,local_40);
  }
  FUN_0041b840(&local_50,local_40[0]);
  iVar2 = FUN_00416db0(param_9,&DAT_0125dd40);
  FUN_010b00f0(param_4);
  (**(code **)(*local_60 + 0x148))(local_60,local_40,L"file");
  (**(code **)(*local_40[0] + 0x108))(local_40[0],&PTR_DAT_0125dd6c,&DAT_0125dd80);
  (**(code **)(*local_40[0] + 0x108))(local_40[0],L"parentid",&DAT_0125ddb4);
  (**(code **)(*local_40[0] + 0x108))(local_40[0],L"name",&DAT_0125dd80);
  (**(code **)(*local_50 + 0x98))(local_50,&local_b0,local_40[0]);
  iVar7 = *(int *)(*(longlong *)(param_4 + 0x18) + 0x10);
  iVar6 = 0;
  if (-1 < iVar7 + -1) {
    do {
      lVar4 = FUN_004aeac0(*(undefined8 *)(param_4 + 0x18),iVar6);
      if (*(uint *)(lVar4 + 0x4c) == (uint)(iVar2 == 0)) {
        FUN_00414b50(&local_78,*(undefined8 *)(lVar4 + 0x30));
        if ((param_8 == 0x100) || ((param_8 == 0x40 && (*(int *)(lVar4 + 0x4c) == 1)))) {
          uVar3 = 1;
        }
        else {
          uVar3 = 0;
        }
        (**(code **)(*local_60 + 0x148))(local_60,local_40,L"file");
        (**(code **)(*local_40[0] + 0x108))
                  (local_40[0],&PTR_DAT_0125dd6c,*(undefined8 *)(lVar4 + 0x30));
        (**(code **)(*local_40[0] + 0x108))(local_40[0],L"parentid",&DAT_0125dd80);
        (**(code **)(*local_40[0] + 0x108))(local_40[0],L"name",*(undefined8 *)(lVar4 + 0x30));
        (**(code **)(*local_40[0] + 0x108))(local_40[0],L"rel_path",*(undefined8 *)(lVar4 + 0x38));
        FUN_0043f750(&local_b8,uVar3);
        (**(code **)(*local_40[0] + 0x108))(local_40[0],L"show",local_b8);
        (**(code **)(*local_50 + 0x98))(local_50,&local_c0,local_40[0]);
        plVar5 = (longlong *)FUN_010af3b0(lVar4);
        (**(code **)(*plVar5 + 0x38))(plVar5,&local_e0);
        FUN_004168e0(&local_e8,local_e0);
        FUN_01242880(&local_d8,local_e8);
        FUN_004168b0(&local_f0,local_d8);
        (**(code **)(*local_60 + 0x128))(local_60,&local_d0,local_f0);
        (**(code **)(*local_40[0] + 0x98))(local_40[0],&local_c8,local_d0);
        FUN_0041b840(&local_58,local_40[0]);
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_00414480(&local_f0);
  FUN_00414520(&local_e8);
  FUN_00414480(&local_e0);
  FUN_00414520(&local_d8);
  FUN_0041b800(&local_d0);
  FUN_00417840(&local_c8,&DAT_00b9f8e0,2);
  FUN_00414480(&local_b8);
  FUN_0041b800(&local_b0);
  FUN_0041b800(&local_a8);
  FUN_0041b800(&local_a0);
  FUN_00414560(&local_98,2);
  FUN_00414560(&local_80,4);
  FUN_0041b800(&local_60);
  FUN_00417840(&local_58,&LAB_00b9fca0,4);
  FUN_0041b800(&local_res8);
  FUN_0041b800(local_res10);
  FUN_00414560(&param_6,2);
  FUN_00414480(&param_9);
  return;
}

