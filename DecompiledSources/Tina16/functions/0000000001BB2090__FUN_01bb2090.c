/* Ghidra address: 01bb2090 */
/* Ghidra symbol: FUN_01bb2090 */


void FUN_01bb2090(longlong param_1,undefined8 param_2)

{
  undefined2 uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  longlong local_40 [4];
  
  local_78 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_58 = 0;
  local_50[0] = 0;
  local_40[0] = 0;
  uVar7 = FUN_0065f300(&PTR_FUN_00643358,1,param_1);
  *(undefined8 *)(param_1 + 0x770) = uVar7;
  FUN_01bb1b90(local_50);
  FUN_00414ad0(param_1 + 0x780,local_50[0]);
  FUN_01bb1cf0(*(undefined8 *)(*(longlong *)(param_1 + 0x6e0) + 0x4f0),0);
  FUN_00416cd0(&local_58,3,*(undefined8 *)PTR_DAT_02005010,&DAT_01bb253c,L"TINA.INI");
  plVar8 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_58);
  uVar5 = (**(code **)(*plVar8 + 0x30))(plVar8,L"PCB Setup",L"Auto placement",0);
  (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x268))(*(longlong **)(param_1 + 0x6f0),uVar5);
  uVar5 = (**(code **)(*plVar8 + 0x30))(plVar8,L"PCB Setup",L"Auto route",0);
  (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x268))(*(longlong **)(param_1 + 0x6f8),uVar5);
  uVar5 = (**(code **)(*plVar8 + 0x30))(plVar8,L"PCB Setup",L"Use template",0);
  (**(code **)(**(longlong **)(param_1 + 0x708) + 0x268))(*(longlong **)(param_1 + 0x708),uVar5);
  uVar7 = (**(code **)(**(longlong **)(param_1 + 0x708) + 0x260))(*(longlong **)(param_1 + 0x708));
  (**(code **)(**(longlong **)(param_1 + 0x720) + 0x268))
            (*(longlong **)(param_1 + 0x720),
             CONCAT71((int7)((ulonglong)uVar7 >> 8),(char)uVar7 == '\0') & 0xffffffff);
  uVar1 = *(undefined2 *)(PTR_DAT_02004830 + 0x17a);
  *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = 0x2e;
  uVar7 = (**(code **)(*plVar8 + 0x58))(plVar8,L"PCB Setup",L"Board width",0x409f400000000000);
  uVar9 = (**(code **)(*plVar8 + 0x58))(plVar8,L"PCB Setup",L"Board height",0x409f400000000000);
  *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = uVar1;
  FUN_01bb3e80(param_1,uVar7,uVar9);
  (**(code **)(*plVar8 + 0x10))(plVar8,&local_68,L"PCB Setup",L"Template",0);
  FUN_00415dd0(&local_70,local_68,0);
  FUN_00b0d000(&local_60,local_70,0xfde9);
  FUN_004168b0(local_40,local_60);
  if (local_40[0] != 0) {
    FUN_00414ad0(param_1 + 0x780,local_40[0]);
  }
  lVar2 = *(longlong *)(param_1 + 0x710);
  FUN_00b965d0(&local_78,*(undefined8 *)(param_1 + 0x780),*(undefined8 *)(lVar2 + 0x310),
               *(undefined4 *)(lVar2 + 0x98));
  FUN_0064de00(lVar2,local_78);
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x6e0) + 0x4f0);
  iVar6 = (**(code **)(*plVar3 + 0x28))(plVar3);
  if (iVar6 == 0) {
    (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x268))(*(longlong **)(param_1 + 0x6e8),1);
    (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x268))(*(longlong **)(param_1 + 0x6d0),0);
    FUN_01bb29d0(param_1,param_2);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x268))(*(longlong **)(param_1 + 0x6e8),0);
    (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x268))(*(longlong **)(param_1 + 0x6d0),1);
    FUN_01bb2840(param_1,param_2);
  }
  (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x268))(*(longlong **)(param_1 + 0x6e0),0);
  cVar4 = (**(code **)(**(longlong **)(param_1 + 0x708) + 0x260))(*(longlong **)(param_1 + 0x708));
  if (cVar4 == '\0') {
    FUN_01bb2d20(param_1,param_2);
  }
  else {
    FUN_01bb2b10(param_1,param_2);
  }
  FUN_00410f20(plVar8);
  FUN_0064cf60(param_1,0x494);
  FUN_00414480(&local_78);
  FUN_004144d0(&local_70);
  FUN_00414480(&local_68);
  FUN_00414520(&local_60);
  FUN_00414560(&local_58,2);
  FUN_00414480(local_40);
  return;
}

