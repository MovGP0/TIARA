/* Ghidra address: 012f2c80 */
/* Ghidra symbol: FUN_012f2c80 */


void FUN_012f2c80(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 local_res8 [4];
  int local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  
  local_a8 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = (longlong *)0x0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_58 = 0;
  local_30 = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  local_40 = (longlong *)0x0;
  local_48 = (longlong *)0x0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  plVar4 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  plVar5 = (longlong *)FUN_005dc9d0(&PTR_FUN_005d4e78,1,local_res8[0]);
  FUN_00bac3d0(&local_30);
  (**(code **)(*local_30 + 0x118))(local_30,0);
  (**(code **)(*local_30 + 0x158))
            (local_30,&local_58,&DAT_012f3288,L"version=\"1.0\" encoding=\"UTF-8\"");
  (**(code **)(*local_30 + 0x98))(local_30,&local_50,local_58);
  (**(code **)(*local_30 + 0x148))(local_30,&local_60,L"testbench");
  (**(code **)(*local_30 + 0x108))(local_30,local_60);
  (**(code **)(*local_30 + 0x100))(local_30,&local_38);
  (**(code **)(*plVar5 + 0x10))(plVar5,&local_68,L"Main",L"RootFolder",0);
  (**(code **)(*local_38 + 0x108))(local_38,L"rootFolder",local_68);
  (**(code **)(*plVar5 + 0x10))(plVar5,&local_48,L"Main",L"ResultFolder",0);
  if (local_48 == (longlong *)0x0) {
    (**(code **)(*local_38 + 0x100))(local_38,&local_70,L"rootFolder");
    (**(code **)(*local_38 + 0x108))(local_38,L"resultFolder",local_70);
  }
  else {
    (**(code **)(*local_38 + 0x108))(local_38,L"resultFolder",local_48);
  }
  (**(code **)(*plVar5 + 0x98))(plVar5,plVar3);
  iVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
  iVar1 = iVar1 + -1;
  local_ac = 1;
  if (0 < iVar1) {
    do {
      (**(code **)(*plVar3 + 0x18))(plVar3,&local_78,local_ac);
      (**(code **)(*plVar5 + 0x90))(plVar5,local_78,plVar4);
      iVar2 = (**(code **)(*plVar4 + 0x28))();
      iVar6 = 0;
      if (-1 < iVar2 + -1) {
        do {
          (**(code **)(*local_30 + 0x148))(local_30,&local_40,L"testcase");
          (**(code **)(*plVar3 + 0x18))(plVar3,&local_80,local_ac);
          (**(code **)(*local_40 + 0x108))(local_40,L"folder",local_80);
          (**(code **)(*plVar4 + 0x18))(plVar4,&local_88,iVar6);
          (**(code **)(*local_40 + 0x108))(local_40,L"circuit",local_88);
          (**(code **)(*plVar3 + 0x18))(plVar3,&local_98,local_ac);
          (**(code **)(*plVar4 + 0x18))(plVar4,&local_a0,iVar6);
          (**(code **)(*plVar5 + 0x10))(plVar5,&local_90,local_98,local_a0,0);
          FUN_012f2780(local_90,local_30,local_40);
          (**(code **)(*local_38 + 0x98))(local_38,&local_a8,local_40);
          iVar6 = iVar6 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      local_ac = local_ac + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  (**(code **)(*local_30 + 0x180))(local_30,local_res8[0],2);
  FUN_00410f20(plVar5);
  FUN_00410f20(plVar4);
  FUN_00410f20(plVar3);
  FUN_0041b800(&local_a8);
  FUN_00414560(&local_a0,8);
  FUN_0041b800(&local_60);
  FUN_0041b800(&local_58);
  FUN_0041b800(&local_50);
  FUN_00414480(&local_48);
  FUN_00417840(&local_40,&LAB_00b9fca0,2);
  FUN_0041b800(&local_30);
  FUN_00414480(local_res8);
  return;
}

