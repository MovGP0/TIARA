/* Ghidra address: 01b97ba0 */
/* Ghidra symbol: FUN_01b97ba0 */


void FUN_01b97ba0(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  uVar4 = FUN_00b89270();
  FUN_00b8e520(uVar4,&local_30,0x83f);
  FUN_00416ba0(&DAT_02110dc8,local_30,
               L",57,TMacroHandler,$tina\\MacroLib\\NewMacro.tsm,120,$tina\\Help\\NewMacro.htm");
  uVar4 = FUN_00b89270();
  FUN_00b8e520(uVar4,&local_38,0x83e);
  FUN_00416ba0(&DAT_02110dd0,local_38,L":{new_group}");
  uVar4 = FUN_00b89270();
  FUN_00b8e520(uVar4,&local_40,0x83d);
  FUN_00414ad0(&DAT_02110dd8,local_40);
  lVar1 = *(longlong *)(param_1 + 0xd0);
  uVar2 = thunk_FUN_03f3ed25(*(undefined4 *)(lVar1 + 0x18),
                             *(undefined4 *)(*(longlong *)PTR_DAT_02005950 + 0x98),0x60);
  FUN_0064b380(lVar1,2,uVar2);
  lVar1 = *(longlong *)(param_1 + 0xd0);
  uVar2 = thunk_FUN_03f3ed25(*(undefined4 *)(lVar1 + 0x1c),
                             *(undefined4 *)(*(longlong *)PTR_DAT_02005950 + 0x98),0x60);
  FUN_0064b380(lVar1,3,uVar2);
  uVar4 = FUN_0065f300(&PTR_FUN_00643358,1,param_1);
  *(undefined8 *)(param_1 + 0x8b0) = uVar4;
  FUN_0064cf60(param_1,0x47c);
  *(undefined1 *)(param_1 + 0x8a8) = 1;
  *(undefined1 *)(param_1 + 0x8a9) = 0;
  uVar4 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x880) = uVar4;
  uVar4 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x888) = uVar4;
  plVar5 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  *(longlong **)(param_1 + 0x890) = plVar5;
  (**(code **)(*plVar5 + 0x10))(plVar5,*(undefined8 *)(*(longlong *)PTR_DAT_02002c40 + 0x38));
  FUN_01b1edb0(*(undefined8 *)(param_1 + 0x880));
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x880) + 0x28))();
  iVar6 = 0;
  if (-1 < iVar3 + -1) {
    do {
      plVar5 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      (**(code **)(**(longlong **)(param_1 + 0x880) + 0x18))
                (*(longlong **)(param_1 + 0x880),&local_48,iVar6);
      (**(code **)(*plVar5 + 0xd8))(plVar5,local_48);
      (**(code **)(**(longlong **)(param_1 + 0x880) + 0x48))
                (*(longlong **)(param_1 + 0x880),iVar6,plVar5);
      plVar5 = (longlong *)FUN_006d6380(*(undefined8 *)(param_1 + 0x7e0));
      (**(code **)(**(longlong **)(param_1 + 0x880) + 0x18))
                (*(longlong **)(param_1 + 0x880),&local_60,iVar6);
      FUN_00441920(&local_58,local_60);
      FUN_004414c0(&local_50,local_58,0);
      (**(code **)(*plVar5 + 0x78))(plVar5,local_50);
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  plVar5 = (longlong *)FUN_006d6380(*(undefined8 *)(param_1 + 0x7e0));
  iVar3 = (**(code **)(*plVar5 + 0x28))(plVar5);
  if (1 < iVar3) {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7e0),1);
  }
  (**(code **)(**(longlong **)(param_1 + 0x7e0) + 0x278))(*(longlong **)(param_1 + 0x7e0),0);
  FUN_01b979d0(param_1,0);
  FUN_01b99300(param_1,0);
  uVar4 = FUN_017105e0(0);
  FUN_01717780(uVar4,*(undefined8 *)(*(longlong *)(param_1 + 0x780) + 0x4f0),L"[All]",0);
  FUN_01717240(uVar4,*(undefined8 *)(*(longlong *)(param_1 + 0x788) + 0x4f0));
  (**(code **)(**(longlong **)(param_1 + 0x788) + 0x268))(*(longlong **)(param_1 + 0x788),0);
  (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x148))(*(longlong **)(param_1 + 0x6f8),0);
  (**(code **)(**(longlong **)(param_1 + 0x7a0) + 0x148))(*(longlong **)(param_1 + 0x7a0),0);
  (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x148))(*(longlong **)(param_1 + 0x6f0),0);
  (**(code **)(**(longlong **)(param_1 + 0x810) + 0x148))(*(longlong **)(param_1 + 0x810),0);
  FUN_00414560(&local_60,7);
  return;
}

