/* Ghidra address: 00fbbe80 */
/* Ghidra symbol: FUN_00fbbe80 */


void FUN_00fbbe80(longlong param_1)

{
  double dVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
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
  
  local_b0 = 0;
  local_b8 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80[0] = 0;
  local_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x780),local_80);
  if (local_80[0] != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x268))(*(longlong **)(param_1 + 0x6f0),1);
    (**(code **)(**(longlong **)(param_1 + 0x738) + 0x268))(*(longlong **)(param_1 + 0x738),1);
    FUN_0043e130(&local_88,*(undefined8 *)(param_1 + 0xd48));
    iVar3 = FUN_004170c0(L"ATTINY26",local_88,1);
    if (iVar3 == 0) {
      FUN_0043e130(&local_90,*(undefined8 *)(param_1 + 0xd48));
      iVar3 = FUN_004170c0(L"ATTINY24",local_90,1);
      if (iVar3 == 0) {
        iVar3 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x260))
                          (*(longlong **)(param_1 + 0x6f0));
        iVar3 = *(int *)(param_1 + 0x81c + (longlong)iVar3 * 4);
        iVar5 = *(int *)(param_1 + 0x830);
        iVar6 = 0x10000;
      }
      else {
        iVar3 = (**(code **)(**(longlong **)(param_1 + 0x758) + 0x260))
                          (*(longlong **)(param_1 + 0x758));
        iVar3 = *(int *)(param_1 + 0x87c + (longlong)iVar3 * 4);
        iVar5 = *(int *)(param_1 + 0x89c);
        iVar6 = 0x100;
      }
    }
    else {
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x738) + 0x260))
                        (*(longlong **)(param_1 + 0x738));
      iVar3 = *(int *)(param_1 + 0x83c + (longlong)iVar3 * 4);
      iVar5 = *(int *)(param_1 + 0x878);
      iVar6 = 0x100;
    }
    dVar1 = *(double *)(param_1 + 0xd30);
    dVar7 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x780));
    dVar8 = (1.0 / dVar1) * (double)iVar6 * (double)iVar5;
    FUN_00468860(&local_70,(dVar1 * dVar7) / (double)iVar3);
    iVar4 = FUN_00462650(&local_70);
    if (dVar8 < dVar7) {
      FUN_0064de00(*(undefined8 *)(param_1 + 0x798),L"Time: out of range");
      FUN_0064de00(*(undefined8 *)(param_1 + 0x6c0),&DAT_00fbc4b4);
    }
    else {
      if ((double)(iVar6 * iVar5) / (double)iVar3 <= (double)iVar4) {
        FUN_00b90440(*(undefined8 *)(param_1 + 0x780),dVar8);
        (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x268))(*(longlong **)(param_1 + 0x6f0),5);
        (**(code **)(**(longlong **)(param_1 + 0x738) + 0x268))(*(longlong **)(param_1 + 0x738),0xf)
        ;
        FUN_0064de00(*(undefined8 *)(param_1 + 0x6c0),&DAT_00fbc4b4);
      }
      while (iVar6 <= iVar4) {
        iVar5 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x260))
                          (*(longlong **)(param_1 + 0x6f0));
        if (4 < iVar5) break;
        iVar5 = (**(code **)(**(longlong **)(param_1 + 0x758) + 0x260))
                          (*(longlong **)(param_1 + 0x758));
        if (7 < iVar5) break;
        iVar5 = (**(code **)(**(longlong **)(param_1 + 0x738) + 0x260))
                          (*(longlong **)(param_1 + 0x738));
        if (0xe < iVar5) break;
        FUN_0043e130(&local_98,*(undefined8 *)(param_1 + 0xd48));
        iVar3 = FUN_004170c0(L"ATTINY26",local_98,1);
        if (iVar3 == 0) {
          FUN_0043e130(&local_a0,*(undefined8 *)(param_1 + 0xd48));
          iVar3 = FUN_004170c0(L"ATTINY24",local_a0,1);
          if (iVar3 == 0) {
            plVar2 = *(longlong **)(param_1 + 0x6f0);
            iVar3 = (**(code **)(*plVar2 + 0x260))(plVar2);
            (**(code **)(*plVar2 + 0x268))(plVar2,iVar3 + 1);
            iVar3 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x260))
                              (*(longlong **)(param_1 + 0x6f0));
            iVar3 = *(int *)(param_1 + 0x81c + (longlong)iVar3 * 4);
          }
          else {
            plVar2 = *(longlong **)(param_1 + 0x758);
            iVar3 = (**(code **)(*plVar2 + 0x260))(plVar2);
            (**(code **)(*plVar2 + 0x268))(plVar2,iVar3 + 1);
            iVar3 = (**(code **)(**(longlong **)(param_1 + 0x758) + 0x260))
                              (*(longlong **)(param_1 + 0x758));
            iVar3 = *(int *)(param_1 + 0x87c + (longlong)iVar3 * 4);
          }
        }
        else {
          plVar2 = *(longlong **)(param_1 + 0x738);
          iVar3 = (**(code **)(*plVar2 + 0x260))(plVar2);
          (**(code **)(*plVar2 + 0x268))(plVar2,iVar3 + 1);
          iVar3 = (**(code **)(**(longlong **)(param_1 + 0x738) + 0x260))
                            (*(longlong **)(param_1 + 0x738));
          iVar3 = *(int *)(param_1 + 0x83c + (longlong)iVar3 * 4);
        }
        FUN_00468860(&local_70,(dVar1 * dVar7) / (double)iVar3);
        iVar4 = FUN_00462650(&local_70);
      }
      FUN_00f61040(&local_a8,iVar6 - iVar4);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x6c0),local_a8);
      FUN_00b8fd60(&local_b8,(1.0 / dVar1) * (double)iVar4 * (double)iVar3,*PTR_DAT_02005310,0,1);
      FUN_00416ba0(&local_b0,L"Time: ",local_b8);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x798),local_b0);
    }
  }
  FUN_00414560(&local_b8,7);
  FUN_00414480(local_80);
  FUN_00460ba0(&local_70);
  return;
}

