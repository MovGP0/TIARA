/* Ghidra address: 00faaab0 */
/* Ghidra symbol: FUN_00faaab0 */


void FUN_00faaab0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70 [2];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  local_a8 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_90 = 0;
  local_88 = 0;
  local_78 = 0;
  local_80 = 0;
  local_70[0] = 0;
  local_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x7f8),local_70);
  if (local_70[0] != 0) {
    iVar7 = 0x10000;
    if (((*(int *)(param_1 + 0x850) == 8) &&
        (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x800) + 0x260))
                           (*(longlong **)(param_1 + 0x800)), cVar2 == '\0')) ||
       (*(int *)(param_1 + 0x850) == 1)) {
      iVar7 = 0x100;
    }
    iVar4 = *(int *)(param_1 + 0x844);
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x260))(*(longlong **)(param_1 + 0x6c0))
    ;
    iVar3 = *(int *)(param_1 + 0x83c + (longlong)iVar3 * 4);
    *(int *)(param_1 + 0x864) = iVar3;
    dVar9 = *(double *)(param_1 + 0x848) / 4.0;
    *(double *)(param_1 + 0x880) = (1.0 / dVar9) * (double)iVar7 * (double)iVar4;
    FUN_00b8fd60(&local_80,*(undefined8 *)(param_1 + 0x880),*PTR_DAT_02005310,0,1);
    FUN_00416ba0(&local_78,L"Time max: ",local_80);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x7e0),local_78);
    dVar8 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x7f8));
    if (*(char *)(param_1 + 0x8a0) == '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x268))(*(longlong **)(param_1 + 0x6c0),0);
      *(undefined4 *)(param_1 + 0x868) = 0;
      iVar4 = (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x260))
                        (*(longlong **)(param_1 + 0x6c0));
      *(undefined4 *)(param_1 + 0x864) = *(undefined4 *)(param_1 + 0x83c + (longlong)iVar4 * 4);
    }
    FUN_00468860(&local_60,(dVar9 * dVar8) / (double)*(int *)(param_1 + 0x864));
    iVar4 = FUN_00462650(&local_60);
    if (*(double *)(param_1 + 0x880) < dVar8) {
      FUN_0064de00(*(undefined8 *)(param_1 + 0x7d8),L"Start time: out of range");
      FUN_0064de00(*(undefined8 *)(param_1 + 0x828),&LAB_00fab050);
    }
    else {
      while ((iVar7 < iVar4 &&
             (iVar5 = (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x260))
                                (*(longlong **)(param_1 + 0x6c0)), iVar5 < 2))) {
        plVar1 = *(longlong **)(param_1 + 0x6c0);
        iVar4 = (**(code **)(*plVar1 + 0x260))(plVar1);
        (**(code **)(*plVar1 + 0x268))(plVar1,iVar4 + 1);
        uVar6 = (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x260))
                          (*(longlong **)(param_1 + 0x6c0));
        *(undefined4 *)(param_1 + 0x868) = uVar6;
        iVar4 = (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x260))
                          (*(longlong **)(param_1 + 0x6c0));
        iVar4 = *(int *)(param_1 + 0x83c + (longlong)iVar4 * 4);
        *(int *)(param_1 + 0x864) = iVar4;
        FUN_00468860(&local_60,(dVar9 * dVar8) / (double)iVar4);
        iVar4 = FUN_00462650(&local_60);
      }
      iVar5 = *(int *)(param_1 + 0x87c);
      if (iVar5 < iVar4) {
        FUN_0043f750(&local_88,(iVar7 - iVar4) + iVar5);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x828),local_88);
      }
      else {
        FUN_0043f750(&local_90,iVar5 - iVar4);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x828),local_90);
      }
      FUN_00b8fd60(&local_a0,(1.0 / dVar9) * (double)iVar4 * (double)*(int *)(param_1 + 0x864),
                   *PTR_DAT_02005310,0,1);
      FUN_00416ba0(&local_98,L"Start time: ",local_a0);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x7d8),local_98);
    }
    plVar1 = *(longlong **)(param_1 + 0x6c0);
    uVar6 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*(longlong *)plVar1[0x9e] + 0x18))((longlong *)plVar1[0x9e],&local_a8,uVar6);
    FUN_0064de00(plVar1,local_a8);
    if (iVar3 != *(int *)(param_1 + 0x864)) {
      *(undefined1 *)(param_1 + 0x8a0) = 1;
      FUN_00fab140(param_1,param_2);
      *(undefined1 *)(param_1 + 0x8a0) = 0;
    }
  }
  FUN_00414560(&local_a8,7);
  FUN_00414480(local_70);
  FUN_00460ba0(&local_60);
  return;
}

