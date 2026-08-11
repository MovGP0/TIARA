/* Ghidra address: 00d41270 */
/* Ghidra symbol: FUN_00d41270 */


void FUN_00d41270(longlong *param_1,int *param_2)

{
  bool bVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  iVar6 = *param_2;
  if (iVar6 == 1) {
    uVar8 = FUN_00788400(param_1,param_2);
    *(undefined8 *)(param_2 + 6) = uVar8;
    iVar6 = (**(code **)(*param_1 + 0x50))(param_1,5);
    uVar7 = FUN_00787fa0(param_1[3]);
    *(undefined4 *)(param_1 + 0x21) = uVar7;
    uVar7 = FUN_00787c80(param_1[3]);
    *(undefined4 *)((longlong)param_1 + 0x10c) = uVar7;
    iVar4 = (**(code **)(*param_1 + 0x50))(param_1,0x1c);
    iVar5 = (**(code **)(*param_1 + 0x50))(param_1,0x1d);
    if ((iVar4 <= (int)param_1[0x21]) && (iVar5 <= *(int *)((longlong)param_1 + 0x10c))) {
      thunk_FUN_041cc6e2(param_1[1],0,0,0,(int)param_1[0x21] + iVar6 + 5,
                         *(int *)((longlong)param_1 + 0x10c) + iVar6 + 5,0x236);
    }
  }
  else {
    if (iVar6 == 0x18) {
      if ((*(longlong *)(param_2 + 2) != 0) && (param_1[0x20] == 0)) {
        iVar6 = FUN_00787fa0(param_1[3]);
        if (0 < iVar6) {
          iVar6 = FUN_00787c80(param_1[3]);
          if (0 < iVar6) {
            uVar7 = FUN_00787fa0(param_1[3]);
            *(undefined4 *)(param_1 + 0x21) = uVar7;
            uVar7 = FUN_00787c80(param_1[3]);
            *(undefined4 *)((longlong)param_1 + 0x10c) = uVar7;
            lVar9 = FUN_00d3f430(param_1);
            param_1[0x20] = lVar9;
            if (param_1[0x20] != 0) {
              cVar3 = FUN_00d3f270(param_1);
              if (cVar3 != '\0') {
                cVar3 = FUN_00d3f6a0(param_1);
                if (cVar3 != '\0') {
                  thunk_FUN_041e5f05(param_1[1],param_1[0x20],0xffffffff);
                }
              }
            }
          }
        }
      }
    }
    else if (iVar6 == 0x47) {
      uVar2 = FUN_00d3ee00(param_1);
      *(undefined1 *)(param_1 + 0x22) = uVar2;
      if ((*(uint *)(*(longlong *)(param_2 + 4) + 0x20) & 1) == 0) {
        *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(*(longlong *)(param_2 + 4) + 0x18);
        *(undefined4 *)((longlong)param_1 + 0x10c) =
             *(undefined4 *)(*(longlong *)(param_2 + 4) + 0x1c);
      }
    }
    FUN_00d3dfa0(param_1,param_2);
    if (*param_2 == 0x46) {
      bVar1 = false;
      if ((*(uint *)(*(longlong *)(param_2 + 4) + 0x20) & 1) == 0) {
        lVar9 = *(longlong *)(param_2 + 4);
        if (((*(int *)(lVar9 + 0x18) == (int)param_1[0x21]) &&
            (*(int *)(lVar9 + 0x1c) == *(int *)((longlong)param_1 + 0x10c))) ||
           ((*(uint *)(lVar9 + 0x20) & 1) != 0)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        *(int *)(param_1 + 0x21) = *(int *)(lVar9 + 0x18);
        *(undefined4 *)((longlong)param_1 + 0x10c) =
             *(undefined4 *)(*(longlong *)(param_2 + 4) + 0x1c);
      }
      if (bVar1) {
        lVar9 = FUN_00d3f430(param_1);
        param_1[0x20] = lVar9;
        if (param_1[0x20] != 0) {
          cVar3 = FUN_00d3f270(param_1);
          if (cVar3 != '\0') {
            cVar3 = FUN_00d3f6a0(param_1);
            if (cVar3 != '\0') {
              thunk_FUN_041e5f05(param_1[1],param_1[0x20],0xffffffff);
            }
          }
        }
        cVar3 = FUN_00d3f270(param_1);
        if (cVar3 != '\0') {
          (**(code **)(*param_1 + 0x68))(param_1);
        }
      }
    }
  }
  return;
}

