/* Ghidra address: 00fa3f80 */
/* Ghidra symbol: FUN_00fa3f80 */


void FUN_00fa3f80(longlong param_1)

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
  double dVar10;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong local_80 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  local_b8 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_88 = 0;
  local_90 = 0;
  local_80[0] = 0;
  local_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x758),local_80);
  if (local_80[0] != 0) {
    iVar7 = 0x10000;
    if (*(int *)(param_1 + 0x870) == 8) {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x7c0) + 0x260))
                        (*(longlong **)(param_1 + 0x7c0));
      if (cVar2 == '\0') {
        iVar7 = 0x100;
      }
    }
    iVar5 = *(int *)(param_1 + 0x850);
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x260))(*(longlong **)(param_1 + 0x6c0))
    ;
    iVar3 = *(int *)(param_1 + 0x844 + (longlong)iVar3 * 4);
    dVar9 = *(double *)(param_1 + 0x858) / 4.0;
    dVar10 = (1.0 / dVar9) * (double)iVar7 * (double)iVar5;
    FUN_00b8fd60(&local_90,dVar10,*PTR_DAT_02005310,0,1);
    FUN_00416ba0(&local_88,L"Time max: ",local_90);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x740),local_88);
    dVar8 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x758));
    if (*(char *)(param_1 + 0x874) == '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x268))(*(longlong **)(param_1 + 0x6c0),0);
      *(undefined4 *)(param_1 + 0x878) = 0;
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x260))
                        (*(longlong **)(param_1 + 0x6c0));
      iVar3 = *(int *)(param_1 + 0x844 + (longlong)iVar3 * 4);
    }
    FUN_00468860(&local_70,(dVar9 * dVar8) / (double)iVar3);
    iVar4 = FUN_00462650(&local_70);
    if (dVar10 < dVar8) {
      FUN_0064de00(*(undefined8 *)(param_1 + 0x738),L"Time: out of range");
      FUN_0064de00(*(undefined8 *)(param_1 + 0x6c8),&LAB_00fa4528);
    }
    else {
      if ((double)(iVar7 * iVar5) / (double)iVar3 <= (double)iVar4) {
        FUN_00b90440(*(undefined8 *)(param_1 + 0x758),dVar10);
        (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x268))(*(longlong **)(param_1 + 0x6c0),3);
        iVar5 = (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x260))
                          (*(longlong **)(param_1 + 0x6c0));
        iVar3 = *(int *)(param_1 + 0x844 + (longlong)iVar5 * 4);
        FUN_0043f750(&local_98,iVar7 + -1);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x6c8),local_98);
        FUN_00468860(&local_70,(dVar9 * dVar8) / (double)iVar3);
        iVar4 = FUN_00462650(&local_70);
      }
      while (iVar7 < iVar4) {
        iVar5 = (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x260))
                          (*(longlong **)(param_1 + 0x6c0));
        if (2 < iVar5) break;
        plVar1 = *(longlong **)(param_1 + 0x6c0);
        iVar5 = (**(code **)(*plVar1 + 0x260))(plVar1);
        (**(code **)(*plVar1 + 0x268))(plVar1,iVar5 + 1);
        uVar6 = (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x260))
                          (*(longlong **)(param_1 + 0x6c0));
        *(undefined4 *)(param_1 + 0x878) = uVar6;
        iVar5 = (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x260))
                          (*(longlong **)(param_1 + 0x6c0));
        iVar3 = *(int *)(param_1 + 0x844 + (longlong)iVar5 * 4);
        FUN_00468860(&local_70,(dVar9 * dVar8) / (double)iVar3);
        iVar4 = FUN_00462650(&local_70);
      }
      FUN_00f61040(&local_a0,iVar7 - iVar4);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x6c8),local_a0);
      FUN_00b8fd60(&local_b0,(1.0 / dVar9) * (double)iVar4 * (double)iVar3,*PTR_DAT_02005310,0,1);
      FUN_00416ba0(&local_a8,L"Time: ",local_b0);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x738),local_a8);
    }
    plVar1 = *(longlong **)(param_1 + 0x6c0);
    uVar6 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*(longlong *)plVar1[0x9e] + 0x18))((longlong *)plVar1[0x9e],&local_b8,uVar6);
    FUN_0064de00(plVar1,local_b8);
  }
  FUN_00414560(&local_b8,7);
  FUN_00414480(local_80);
  FUN_00460ba0(&local_70);
  return;
}

