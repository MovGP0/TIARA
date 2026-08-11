/* Ghidra address: 01060c30 */
/* Ghidra symbol: FUN_01060c30 */


undefined8
FUN_01060c30(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
            undefined8 param_5,longlong param_6)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 local_res20;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70 [2];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70[0] = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_00414610(param_5);
  FUN_00414610(param_6);
  FUN_00416ba0(&local_50,local_res20,param_5);
  cVar1 = FUN_00440b00(local_50,1);
  if (cVar1 == '\0') {
    FUN_00414480(param_2);
  }
  else {
    FUN_00416ba0(local_70,local_50,L"\\*.cpp");
    plVar3 = (longlong *)FUN_01603790(local_70[0],0x20);
    FUN_00416ba0(&local_78,local_50,L"\\*.c");
    uVar4 = FUN_01603790(local_78,0x20);
    FUN_00416ba0(&local_80,local_50,L"\\*.h");
    plVar5 = (longlong *)FUN_01603790(local_80,0x20);
    (**(code **)(*plVar3 + 0x88))(plVar3,uVar4);
    (**(code **)(*plVar5 + 0x88))(plVar5,plVar3);
    FUN_01059cc0(&local_60,plVar5);
    FUN_00414b50(&local_58,*(undefined8 *)(param_1 + 0x38));
    FUN_00416cd0(&local_58,3,local_58,&DAT_0106124c,local_60);
    if (param_6 != 0) {
      FUN_00416cd0(&local_58,3,local_58,&DAT_0106124c,param_6);
    }
    FUN_00414b50(&local_38,*(undefined8 *)(param_1 + 0x10));
    iVar2 = (**(code **)(*plVar3 + 0x28))();
    iVar6 = 0;
    if (-1 < iVar2 + -1) {
      do {
        FUN_00414480(param_1 + 0x78);
        (**(code **)(*plVar3 + 0x18))(plVar3,&local_40,iVar6);
        FUN_0105ff90(param_1,&local_30,local_40);
        FUN_00416cd0(&local_40,3,&DAT_0106125c,local_40,&DAT_0106125c);
        FUN_00416cd0(param_1 + 0x78,6,&DAT_0106125c,*(undefined8 *)(param_1 + 0x78),
                     *(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x18),
                     *(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x30),local_30,&DAT_0106125c);
        FUN_00416ad0(param_1 + 0x78,&DAT_0106126c);
        FUN_0105e6d0(param_1,&local_88,local_38,&DAT_0106127c,0x2c);
        FUN_00416ad0(param_1 + 0x78,local_88);
        FUN_00416ad0(param_1 + 0x78,&DAT_0106126c);
        FUN_0105e6d0(param_1,&local_90,*(undefined8 *)(param_1 + 8),&PTR_LAB_0106128c,0x2c);
        FUN_00416ad0(param_1 + 0x78,local_90);
        FUN_00416ad0(param_1 + 0x78,&DAT_0106126c);
        FUN_0105e6d0(param_1,&local_98,local_58,&PTR_DAT_010612a0,0x2c);
        FUN_00416ad0(param_1 + 0x78,local_98);
        FUN_00416ad0(param_1 + 0x78,&DAT_0106126c);
        FUN_00416cd0(param_1 + 0x78,3,*(undefined8 *)(param_1 + 0x78),local_40,&DAT_0106126c);
        FUN_00416ad0(param_1 + 0x78,&DAT_010612b4);
        (**(code **)(*plVar3 + 0x18))(plVar3,&local_a0,iVar6);
        FUN_00441920(&local_40,local_a0);
        FUN_00416cd0(param_1 + 0x78,4,*(undefined8 *)(param_1 + 0x78),L"Debug\\",local_40,
                     &LAB_010612e4);
        (**(code **)(*param_3 + 0x78))(param_3,*(undefined8 *)(param_1 + 0x78));
        iVar6 = iVar6 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_004b37d0(plVar3,param_2);
    FUN_00410f20(plVar3);
    FUN_00410f20(uVar4);
    FUN_00410f20(plVar5);
  }
  FUN_00414560(&local_a0,7);
  FUN_00414560(&local_60,7);
  FUN_00414560(&local_res20,3);
  return param_2;
}

