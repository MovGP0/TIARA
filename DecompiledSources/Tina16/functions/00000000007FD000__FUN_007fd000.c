/* Ghidra address: 007fd000 */
/* Ghidra symbol: FUN_007fd000 */


void FUN_007fd000(longlong *param_1,int param_2,undefined4 *param_3)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  if (0x1d < param_2) {
    iVar8 = *(int *)((longlong)param_1 + 0x2cc);
    if (iVar8 == 0) {
      iVar8 = (int)param_1[0xa4];
    }
    if (iVar8 == param_2) {
      if (0 < (int)param_1[0xa7]) {
        FUN_0064d0e0(param_1,(int)param_1[0xa7]);
      }
      if (0 < *(int *)((longlong)param_1 + 0x53c)) {
        FUN_0064d150(param_1,*(int *)((longlong)param_1 + 0x53c));
      }
    }
    else {
      *(float *)(param_1 + 0x61) = (*(float *)(param_1 + 0x61) * (float)param_2) / (float)iVar8;
      FUN_007fb920(param_1,param_2,iVar8);
      FUN_007fb540(param_1,param_2,iVar8);
      (**(code **)(*param_1 + 0x220))(param_1,param_2);
      FUN_007fce80(param_1,param_2,iVar8,0);
      if (param_3 == (undefined4 *)0x0) {
        bVar9 = (*(byte *)((longlong)param_1 + 0xfc) & 4) != 0;
        if ((bVar9) || ((*(byte *)((longlong)param_1 + 0xfc) & 8) != 0)) {
          if (bVar9) {
            uVar3 = thunk_FUN_03f3ed25((int)param_1[0xa7],param_2,iVar8);
            *(undefined4 *)(param_1 + 0xa7) = uVar3;
          }
          if ((*(byte *)((longlong)param_1 + 0xfc) & 8) != 0) {
            uVar3 = thunk_FUN_03f3ed25(*(undefined4 *)((longlong)param_1 + 0x53c),param_2,iVar8);
            *(undefined4 *)((longlong)param_1 + 0x53c) = uVar3;
          }
          if (0 < (int)param_1[0xa7]) {
            FUN_0064d0e0(param_1,(int)param_1[0xa7]);
          }
          if (0 < *(int *)((longlong)param_1 + 0x53c)) {
            FUN_0064d150(param_1,*(int *)((longlong)param_1 + 0x53c));
          }
        }
        else {
          cVar2 = FUN_007fda00(param_1);
          if (cVar2 != '\0') {
            uVar3 = FUN_0064d120(param_1);
            uVar4 = FUN_0064d0b0(param_1);
            uVar4 = thunk_FUN_03f3ed25(uVar4,param_2,iVar8);
            FUN_007fded0(param_1,uVar4);
            uVar3 = thunk_FUN_03f3ed25(uVar3,param_2,iVar8);
            FUN_007fdf10(param_1,uVar3);
          }
        }
        if ((*(byte *)((longlong)param_1 + 0xfc) & 0x20) != 0) {
          uVar3 = thunk_FUN_03f3ed25(*(undefined4 *)((longlong)param_1 + 0x47c),param_2,iVar8);
          *(undefined4 *)((longlong)param_1 + 0x47c) = uVar3;
          uVar3 = thunk_FUN_03f3ed25((int)param_1[0x90],param_2,iVar8);
          *(undefined4 *)(param_1 + 0x90) = uVar3;
        }
      }
      else {
        uVar3 = FUN_004230a0(param_3);
        uVar4 = FUN_004230c0(param_3);
        (**(code **)(*param_1 + 400))(param_1,*param_3,param_3[1],uVar3,uVar4);
      }
      if (*(char *)((longlong)param_1 + 0xab) == '\0') {
        lVar1 = param_1[0x17];
        uVar3 = thunk_FUN_03f3ed25(*(undefined4 *)(*(longlong *)(lVar1 + 0x18) + 0x28),param_2,iVar8
                                  );
        FUN_005fcc80(lVar1,uVar3);
      }
      FUN_007fce80(param_1,param_2,iVar8,1);
      iVar5 = FUN_007ff9d0();
      iVar7 = 0;
      if (-1 < iVar5 + -1) {
        do {
          plVar6 = (longlong *)FUN_007ffa40(param_1,iVar7);
          (**(code **)(*plVar6 + 0x170))(plVar6,param_2);
          iVar7 = iVar7 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      *(int *)((longlong)param_1 + 0x2cc) = param_2;
      FUN_00654450();
      FUN_007fcf40(param_1,param_2,iVar8);
    }
  }
  return;
}

