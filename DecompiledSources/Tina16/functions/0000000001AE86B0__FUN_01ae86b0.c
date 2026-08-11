/* Ghidra address: 01ae86b0 */
/* Ghidra symbol: FUN_01ae86b0 */


undefined8 *
FUN_01ae86b0(undefined8 param_1,undefined8 *param_2,longlong param_3,longlong param_4,
            undefined8 param_5)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined *puVar7;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  FUN_00414610(param_5);
  FUN_00414480(param_2);
  if (param_3 != 0) {
    plVar3 = (longlong *)FUN_01abda80(param_4);
    uVar4 = FUN_01abdb20(param_4);
    (**(code **)(*plVar3 + 0x10))(plVar3,uVar4,1);
    uVar4 = FUN_01abdb20(param_4);
    *(undefined8 *)PTR_DAT_02005620 = uVar4;
    uVar4 = FUN_01abda80(param_4);
    *(undefined8 *)PTR_DAT_020041f8 = uVar4;
    if (param_4 != 0) {
      uVar4 = FUN_01abda80(param_4);
      cVar2 = FUN_004113d0(uVar4,&PTR_FUN_01cb9c30);
      if (cVar2 != '\0') {
        plVar3 = (longlong *)FUN_01abda80(param_4);
        (**(code **)(*plVar3 + 0x90))(plVar3,*(undefined8 *)(param_3 + 0x70),local_20,&local_28);
        FUN_00b8fd60(&local_30,*(undefined8 *)(param_3 + 0x70),*PTR_DAT_02005310,0,1);
        puVar7 = &DAT_01ae8b8c;
        uVar4 = local_30;
        FUN_00416cd0(param_2,5,*param_2,&DAT_01ae8b7c,param_5,&DAT_01ae8b8c,local_30);
        iVar1 = *(int *)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xcf0) + 0x4a8);
        if (iVar1 == 0) {
          FUN_00b8fd60(&local_38,local_20[0],*PTR_DAT_02005310,0,1);
          FUN_00416cd0(param_2,3,*param_2,&DAT_01ae8ba0,local_38,puVar7,uVar4);
          FUN_00b8fd60(&local_40,local_28,*PTR_DAT_02005310,0,1);
          FUN_00416cd0(param_2,4,*param_2,&DAT_01ae8ba0,local_40,&LAB_01ae8bb4);
        }
        else if (iVar1 == 1) {
          FUN_00c44460(local_58,local_20[0],local_28);
          uVar5 = FUN_00c44590(local_58);
          FUN_00b8fd60(&local_48,uVar5,*PTR_DAT_02005310,0,1);
          FUN_00416cd0(param_2,3,*param_2,&DAT_01ae8ba0,local_48,puVar7,uVar4);
          FUN_00c44460(local_58,local_20[0],local_28);
          dVar6 = (double)FUN_00c445d0(local_58);
          FUN_00b8fd60(&local_60,dVar6 * 57.29577951308232,*PTR_DAT_02005310,0,1);
          FUN_00416cd0(param_2,4,*param_2,&DAT_01ae8ba0,local_60,&LAB_01ae8bb4);
        }
        goto code_r0x01ae8aeb;
      }
    }
    plVar3 = (longlong *)FUN_01abda80(param_4);
    local_28 = (**(code **)(*plVar3 + 0x48))(plVar3,*(undefined8 *)(param_3 + 0x78));
    FUN_00b8fd60(&local_68,*(undefined8 *)(param_3 + 0x78),*PTR_DAT_02005310,0,1);
    FUN_00416cd0(param_2,5,*param_2,&DAT_01ae8b7c,param_5,&DAT_01ae8b8c,local_68);
    FUN_00b8fd60(&local_70,local_28,*PTR_DAT_02005310,0,1);
    FUN_00416cd0(param_2,4,*param_2,&DAT_01ae8ba0,local_70,&LAB_01ae8bb4);
  }
code_r0x01ae8aeb:
  FUN_00414560(&local_70,3);
  FUN_00414560(&local_48,4);
  FUN_00414480(&param_5);
  return param_2;
}

