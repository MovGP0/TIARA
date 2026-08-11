/* Ghidra address: 01c1aaf0 */
/* Ghidra symbol: FUN_01c1aaf0 */


void FUN_01c1aaf0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar11;
  undefined1 local_48 [31];
  byte local_29;
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  uVar5 = (**(code **)(*param_1 + 0x288))(param_1);
  plVar9 = (longlong *)param_1[100];
  if (plVar9 != (longlong *)0x0) {
    cVar3 = (**(code **)(*plVar9 + 0x70))(plVar9);
    if (cVar3 == '\0') {
      uVar6 = (**(code **)(*param_1 + 0xd0))(param_1);
      cVar3 = FUN_004113d0(uVar6,&PTR_FUN_0061c2b8);
      if (cVar3 != '\0') {
        lVar7 = (**(code **)(*param_1 + 0xd0))(param_1);
        if (*(char *)(lVar7 + 0xd8) != '\0') {
          cVar3 = (**(code **)(*param_1 + 0x228))(param_1);
          if (cVar3 != '\0') {
            uVar6 = FUN_00781840();
            uVar8 = FUN_005ffa40(param_1[0x62]);
            plVar9 = (longlong *)FUN_00781840();
            uVar10 = (**(code **)(*param_1 + 0xf0))(param_1);
            (**(code **)(*plVar9 + 0x158))(plVar9,local_48,(&DAT_01fe48e0)[uVar10 & 0xff]);
            FUN_00778dc0(uVar6,uVar8,local_48,param_1 + 0x72,0,0);
            uVar6 = FUN_00781840();
            uVar8 = FUN_005ffa40(param_1[0x62]);
            plVar9 = (longlong *)FUN_00781840();
            uVar10 = (**(code **)(*param_1 + 0xf0))(param_1);
            (**(code **)(*plVar9 + 0x158))(plVar9,local_48,(&DAT_01fe48e2)[uVar10 & 0xff]);
            FUN_00778dc0(uVar6,uVar8,local_48,param_1 + 0x72,0,uVar5);
          }
          goto LAB_01c1ad85;
        }
      }
    }
  }
  lVar7 = (**(code **)(*param_1 + 0x220))(param_1,0,&local_29,*(undefined4 *)(param_1[100] + 0xa0));
  if ((lVar7 != 0) && (*(int *)(param_1[100] + 0xa0) != -1)) {
    lVar2 = param_1[0x72];
    iVar1 = *(int *)((longlong)param_1 + 0x394);
    bVar4 = (**(code **)(*param_1 + 0xf0))(param_1);
    FUN_007d6c70(lVar7,param_1[0x62],
                 (int)lVar2 + (((int)param_1[0x73] - (int)lVar2) - *(int *)(lVar7 + 0x94)) / 2,
                 iVar1 + ((*(int *)((longlong)param_1 + 0x39c) - iVar1) - *(int *)(lVar7 + 0x90)) /
                         2,CONCAT44(uVar11,*(undefined4 *)(param_1[100] + 0xa0)),bVar4 | local_29);
  }
LAB_01c1ad85:
  cVar3 = FUN_01be7540(param_1);
  if (cVar3 != '\0') {
    uVar6 = FUN_00781840();
    uVar8 = FUN_005ffa40(param_1[0x62]);
    plVar9 = (longlong *)FUN_00781840();
    uVar10 = (**(code **)(*param_1 + 0xf0))(param_1);
    (**(code **)(*plVar9 + 0x158))(plVar9,local_48,(&DAT_01fe48e0)[uVar10 & 0xff]);
    FUN_00778dc0(uVar6,uVar8,local_48,param_1 + 0x74,0,0);
    uVar6 = FUN_00781840();
    uVar8 = FUN_005ffa40(param_1[0x62]);
    plVar9 = (longlong *)FUN_00781840();
    uVar10 = (**(code **)(*param_1 + 0xf0))(param_1);
    (**(code **)(*plVar9 + 0x158))(plVar9,local_48,(&DAT_01fe48e2)[uVar10 & 0xff]);
    FUN_00778dc0(uVar6,uVar8,local_48,param_1 + 0x74,0,uVar5);
  }
  return;
}

