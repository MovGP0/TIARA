/* Ghidra address: 018aba70 */
/* Ghidra symbol: FUN_018aba70 */


void FUN_018aba70(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int iVar7;
  int local_40;
  int iStack_3c;
  
  cVar2 = FUN_018a91e0(param_1);
  if (((cVar2 == '\0') || ((char)param_1[0xa6] != '\0')) &&
     (iVar3 = FUN_018a9b40(param_1), iVar3 != 0)) {
    *(undefined1 *)((longlong)param_1 + 0x4b9) = 0;
    *(undefined4 *)(param_1[0xaa] + 0x500) = 0xffffffff;
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x278))(param_1);
    uVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,(int)param_1[0xa5] + -1);
    iStack_3c = (int)((ulonglong)uVar5 >> 0x20);
    if (iStack_3c != 0) {
      local_40 = (int)uVar5;
      if ((char)param_1[0xac] == '\x01') {
        iVar3 = FUN_018a9b40(param_1);
        if (iVar3 < 2) {
          iVar3 = 0;
        }
        else {
          iVar3 = (**(code **)(*param_1 + 0x1a0))(param_1,2);
        }
        iVar3 = (*(int *)(param_1[0xaa] + 0x98) - iVar3) + -0x1a;
        if (iVar3 < 1) {
          iVar3 = 1;
        }
        iVar7 = *(int *)(param_1[0xaa] + 0x9c) + -0x1a;
        if (iVar7 < 1) {
          iVar7 = 1;
        }
        if ((double)local_40 / (double)iVar3 <= (double)iStack_3c / (double)iVar7) {
          param_1[0xab] = (longlong)((double)iVar7 / (double)iStack_3c);
        }
        else {
          param_1[0xab] = (longlong)((double)iVar3 / (double)local_40);
        }
        FUN_018ab560(param_1,(int)param_1[0xa5],0);
      }
      else if ((char)param_1[0xac] == '\x02') {
        iVar3 = (**(code **)(*param_1 + 0x1a0))(param_1,2);
        param_1[0xab] =
             (longlong)
             ((double)((*(int *)(param_1[0xaa] + 0x98) - iVar3) + -0x1a) / (double)local_40);
      }
      FUN_00659460(param_1[0xa8],1);
      *(longlong *)(param_1[0xaa] + 0x548) = param_1[0xab];
      *(double *)(param_1[0xa8] + 0x548) = DAT_02110690 * 0.1;
      FUN_018a7610(param_1[0xaa]);
      FUN_018a7610(param_1[0xa8]);
      iVar3 = FUN_018a9b40();
      iVar7 = 0;
      if (-1 < iVar3 + -1) {
        do {
          plVar4 = (longlong *)(**(code **)(*param_1 + 0x278))(param_1);
          uVar6 = (**(code **)(*plVar4 + 0x10))(plVar4,iVar7);
          iStack_3c = (int)(uVar6 >> 0x20);
          FUN_018a74b0(param_1[0xaa],uVar6 & 0xffffffff,iStack_3c);
          if (*(char *)((longlong)param_1 + 0x531) == '\0') {
            FUN_018a74b0(param_1[0xa8],uVar6 & 0xffffffff,iStack_3c);
          }
          iVar7 = iVar7 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      lVar1 = param_1[0xaa];
      iVar3 = (**(code **)(*param_1 + 0x1a0))(param_1,2);
      FUN_018a74d0(lVar1,(*(int *)(lVar1 + 0x98) - iVar3) + -0x1a);
      if (*(char *)((longlong)param_1 + 0x531) == '\0') {
        lVar1 = param_1[0xa8];
        iVar3 = (**(code **)(*param_1 + 0x1a0))(param_1,2);
        FUN_018a74d0(lVar1,(*(int *)(lVar1 + 0x98) - iVar3) + -0x1a);
      }
      FUN_018a70e0(param_1[0xaa]);
      FUN_018a70e0(param_1[0xa8]);
      FUN_018932d0(param_1[0xaa],*(undefined4 *)(param_1[0xaa] + 0x4a0));
      FUN_018933f0(param_1[0xaa],*(undefined4 *)(param_1[0xaa] + 0x4b4));
      if ((char)param_1[0xa6] == '\0') {
        (**(code **)(*(longlong *)param_1[0xaa] + 0x188))((longlong *)param_1[0xaa]);
        (**(code **)(*(longlong *)param_1[0xa8] + 0x188))((longlong *)param_1[0xa8]);
      }
      lVar1 = param_1[1];
      cVar2 = FUN_004113d0(lVar1,&PTR_FUN_018a1608);
      if (cVar2 != '\0') {
        FUN_018af2e0(lVar1);
      }
      FUN_00659460(param_1[0xa8],0);
    }
  }
  return;
}

