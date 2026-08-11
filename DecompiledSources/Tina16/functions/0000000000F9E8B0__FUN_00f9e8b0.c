/* Ghidra address: 00f9e8b0 */
/* Ghidra symbol: FUN_00f9e8b0 */


void FUN_00f9e8b0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 local_c8;
  undefined8 local_c0;
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
  
  local_c8 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_88 = 0;
  local_90 = 0;
  local_80[0] = 0;
  local_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x700),local_80);
  if (local_80[0] != 0) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x260))(*(longlong **)(param_1 + 0x6c8))
    ;
    if (cVar2 == '\0') {
      iVar3 = 0x100;
      (**(code **)(**(longlong **)(param_1 + 0x718) + 0x268))
                (*(longlong **)(param_1 + 0x718),*(undefined4 *)(param_1 + 0x758));
      iVar4 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0x260))
                        (*(longlong **)(param_1 + 0x718));
      iVar4 = *(int *)(param_1 + 0x760 + (longlong)iVar4 * 4);
    }
    else {
      iVar4 = 1;
      iVar3 = 1;
      (**(code **)(**(longlong **)(param_1 + 0x718) + 0x268))
                (*(longlong **)(param_1 + 0x718),*(undefined4 *)(param_1 + 0x75c));
    }
    dVar9 = *(double *)(param_1 + 0x740) / 4.0;
    dVar10 = (1.0 / dVar9) * (double)*(int *)(param_1 + 0x784) * (double)iVar3;
    FUN_00b8fd60(&local_90,dVar10,*PTR_DAT_02005310,0,1);
    FUN_00416ba0(&local_88,L"Time max: ",local_90);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6d8),local_88);
    dVar8 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x700));
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x260))(*(longlong **)(param_1 + 0x6c8))
    ;
    if (cVar2 == '\0') {
      if (*(char *)(param_1 + 0x74c) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x718) + 0x268))(*(longlong **)(param_1 + 0x718),0);
        *(undefined4 *)(param_1 + 0x758) = 0;
        iVar4 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0x260))
                          (*(longlong **)(param_1 + 0x718));
        iVar4 = *(int *)(param_1 + 0x760 + (longlong)iVar4 * 4);
      }
      if (*(int *)(param_1 + 0x748) == 1) {
        iVar3 = 7;
      }
      else {
        iVar3 = 8;
      }
      if (dVar10 < dVar8) {
        FUN_0064de00(*(undefined8 *)(param_1 + 0x6f0),L"Time: out of range");
        FUN_0064de00(*(undefined8 *)(param_1 + 0x728),&DAT_00f9f02c);
      }
      else {
        FUN_00468860(&local_70,(dVar9 * dVar8) / (double)iVar4);
        iVar5 = FUN_00462650(&local_70);
        if ((double)(*(int *)(param_1 + 0x784) << 8) / (double)iVar4 <= (double)iVar5) {
          FUN_00b90440(*(undefined8 *)(param_1 + 0x700),dVar10);
          *(int *)(param_1 + 0x758) = iVar3;
          (**(code **)(**(longlong **)(param_1 + 0x718) + 0x268))
                    (*(longlong **)(param_1 + 0x718),iVar3);
          iVar4 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0x260))
                            (*(longlong **)(param_1 + 0x718));
          iVar4 = *(int *)(param_1 + 0x760 + (longlong)iVar4 * 4);
          FUN_0064de00(*(undefined8 *)(param_1 + 0x728),&LAB_00f9f03c);
          FUN_00468860(&local_70,(dVar9 * dVar8) / (double)iVar4);
          iVar5 = FUN_00462650(&local_70);
        }
        while (*(int *)(param_1 + 0x784) <= iVar5) {
          iVar6 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0x260))
                            (*(longlong **)(param_1 + 0x718));
          if (iVar3 <= iVar6) break;
          plVar1 = *(longlong **)(param_1 + 0x718);
          iVar4 = (**(code **)(*plVar1 + 0x260))(plVar1);
          (**(code **)(*plVar1 + 0x268))(plVar1,iVar4 + 1);
          uVar7 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0x260))
                            (*(longlong **)(param_1 + 0x718));
          *(undefined4 *)(param_1 + 0x758) = uVar7;
          iVar4 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0x260))
                            (*(longlong **)(param_1 + 0x718));
          iVar4 = *(int *)(param_1 + 0x760 + (longlong)iVar4 * 4);
          FUN_00468860(&local_70,(dVar9 * dVar8) / (double)iVar4);
          iVar5 = FUN_00462650(&local_70);
        }
        FUN_00f61040(&local_b0,*(int *)(param_1 + 0x784) - iVar5);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x728),local_b0);
        FUN_00b8fd60(&local_c0,(1.0 / dVar9) * (double)iVar5 * (double)iVar4,*PTR_DAT_02005310,0,1);
        FUN_00416ba0(&local_b8,L"Time: ",local_c0);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x6f0),local_b8);
      }
      plVar1 = *(longlong **)(param_1 + 0x718);
      uVar7 = (**(code **)(*plVar1 + 0x260))(plVar1);
      (**(code **)(*(longlong *)plVar1[0x9e] + 0x18))((longlong *)plVar1[0x9e],&local_c8,uVar7);
      FUN_0064de00(plVar1,local_c8);
    }
    else if (dVar10 < dVar8) {
      FUN_0064de00(*(undefined8 *)(param_1 + 0x6f0),L"Time: out of range");
      FUN_0064de00(*(undefined8 *)(param_1 + 0x728),&DAT_00f9f02c);
    }
    else {
      FUN_00468860(&local_70,(dVar9 * dVar8) / (double)iVar4);
      iVar3 = FUN_00462650(&local_70);
      if (iVar3 < *(int *)(param_1 + 0x784)) {
        FUN_00f61040(&local_98,*(int *)(param_1 + 0x784) - iVar3);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x728),local_98);
        FUN_00b8fd60(&local_a8,(1.0 / dVar9) * (double)iVar3 * (double)iVar4,*PTR_DAT_02005310,0,1);
        FUN_00416ba0(&local_a0,L"Time: ",local_a8);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x6f0),local_a0);
      }
      else {
        FUN_0064de00(*(undefined8 *)(param_1 + 0x6f0),L"Time: out of range");
        FUN_0064de00(*(undefined8 *)(param_1 + 0x728),&DAT_00f9f02c);
      }
    }
  }
  FUN_00414560(&local_c8,9);
  FUN_00414480(local_80);
  FUN_00460ba0(&local_70);
  return;
}

