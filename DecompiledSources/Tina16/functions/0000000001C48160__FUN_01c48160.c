/* Ghidra address: 01c48160 */
/* Ghidra symbol: FUN_01c48160 */


void FUN_01c48160(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_58 = 0;
  local_60 = 0;
  local_48 = 0;
  local_50 = 0;
  local_40[0] = 0;
  uVar5 = FUN_00b89270();
  FUN_00b8e520(uVar5,local_40,0x429);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6b0),0,0,local_40[0]);
  uVar5 = FUN_00b89270();
  FUN_0041ddd0(&local_50,&PTR_PTR_01c47f88);
  FUN_00b8e650(uVar5,&local_48,L"frmCompMainValueLimits.Txt_Min",local_50);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6b0),1,0,local_48);
  uVar5 = FUN_00b89270();
  FUN_0041ddd0(&local_60,&LAB_01c47f98);
  FUN_00b8e650(uVar5,&local_58,L"frmCompMainValueLimits.Txt_Max",local_60);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6b0),2,0,local_58);
  FUN_01c47fb0(*(undefined8 *)(param_1 + 0x6f0),
               *(undefined8 *)(*(longlong *)(param_1 + 0x6e8) + 0x4f0));
  plVar6 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined2 *)((longlong)plVar6 + 0x2c) = 0xff;
  iVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x6f0) + 0x448) + 0x28))();
  iVar7 = 0;
  if (-1 < iVar3 + -1) {
    do {
      (**(code **)(*plVar6 + 0x90))(plVar6);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6f0) + 0x448);
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_68,iVar7);
      FUN_004b50b0(plVar6,local_68);
      iVar4 = (**(code **)(*plVar6 + 0x28))(plVar6);
      if (iVar4 == 3) {
        lVar2 = *(longlong *)(param_1 + 0x6b0);
        (**(code **)(*plVar6 + 0x18))(plVar6,&local_70,0);
        FUN_0084e3e0(lVar2,0,*(int *)(lVar2 + 0x4c0) + iVar7,local_70);
        lVar2 = *(longlong *)(param_1 + 0x6b0);
        (**(code **)(*plVar6 + 0x18))(plVar6,&local_78,1);
        FUN_0084e3e0(lVar2,1,*(int *)(lVar2 + 0x4c0) + iVar7,local_78);
        lVar2 = *(longlong *)(param_1 + 0x6b0);
        (**(code **)(*plVar6 + 0x18))(plVar6,&local_80,2);
        FUN_0084e3e0(lVar2,2,*(int *)(lVar2 + 0x4c0) + iVar7,local_80);
      }
      iVar7 = iVar7 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00410f20(plVar6);
  plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x6f0) + 0x448);
  iVar3 = (**(code **)(*plVar6 + 0x28))(plVar6);
  if (iVar3 < 2) {
    iVar3 = 1;
  }
  FUN_00848a70(*(longlong *)(param_1 + 0x6b0),
               *(int *)(*(longlong *)(param_1 + 0x6b0) + 0x4c0) + iVar3);
  FUN_00414560(&local_80,9);
  return;
}

