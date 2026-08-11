/* Ghidra address: 01bc2800 */
/* Ghidra symbol: FUN_01bc2800 */


void FUN_01bc2800(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_70 = 0;
  local_60 = 0;
  local_68 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_30[0] = 0;
  uVar2 = FUN_0065f300(&PTR_FUN_00643358,1,param_1);
  *(undefined8 *)(param_1 + 0x778) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x758) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x760) = uVar2;
  plVar3 = (longlong *)FUN_00c85d40(*(undefined8 *)PTR_DAT_02002c40,*PTR_DAT_02002480,0);
  *(longlong **)(param_1 + 0x750) = plVar3;
  if (plVar3 != (longlong *)0x0) {
    iVar1 = (**(code **)(*plVar3 + 0x90))();
    iVar4 = 0;
    if (-1 < iVar1 + -1) {
      do {
        FUN_0043f750(local_30,iVar4);
        plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x710) + 0x4f0);
        (**(code **)(*plVar3 + 0x78))(plVar3,local_30[0]);
        iVar4 = iVar4 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    (**(code **)(**(longlong **)(param_1 + 0x710) + 0x268))(*(longlong **)(param_1 + 0x710),0);
  }
  FUN_01bc4190(param_1,0);
  FUN_01b1edb0(*(undefined8 *)(param_1 + 0x758));
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x758) + 0x28))();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x758) + 0x18))
                (*(longlong **)(param_1 + 0x758),&local_48,iVar4);
      FUN_00441920(&local_40,local_48);
      FUN_004414c0(&local_38,local_40,0);
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x740) + 0x4f0);
      (**(code **)(*plVar3 + 0x78))(plVar3,local_38);
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x758) + 0x28))(*(longlong **)(param_1 + 0x758));
  if (0 < iVar1) {
    (**(code **)(**(longlong **)(param_1 + 0x740) + 0x268))(*(longlong **)(param_1 + 0x740),0);
    FUN_01bc42f0(param_1,param_2);
  }
  uVar2 = FUN_0177d960(&PTR_FUN_0177caa0,1,param_1);
  *(undefined8 *)(param_1 + 0x780) = uVar2;
  plVar3 = *(longlong **)(param_1 + 0x780);
  (**(code **)(*plVar3 + 0x50))(plVar3,L"SaveTSMDlg");
  FUN_0177dd40(plVar3,&DAT_01bc2be0);
  FUN_00414ad0(plVar3 + 0x1c,L"Schematics Macro (*.TSM)|*.TSM");
  *(undefined4 *)(plVar3 + 0x1b) = 0x80116;
  FUN_00c78ad0(plVar3,L"Save Macro");
  FUN_00416cd0(&local_60,3,L"User Macros|",*(undefined8 *)PTR_DAT_02005010,L"\\Macrolib");
  local_58 = local_60;
  FUN_00416cd0(&local_68,3,L"Tina Macros|",*(undefined8 *)PTR_DAT_020049a0,L"\\Macrolib");
  local_50 = local_68;
  (**(code **)(*plVar3 + 0x130))(plVar3,&local_58,1);
  FUN_00416ba0(&local_70,*(undefined8 *)PTR_DAT_02005010,L"\\Macrolib");
  FUN_0177d560(*(undefined8 *)(param_1 + 0x780),local_70);
  FUN_0064cf60(param_1,0x492);
  FUN_00414560(&local_70,3);
  FUN_00414560(&local_48,4);
  return;
}

