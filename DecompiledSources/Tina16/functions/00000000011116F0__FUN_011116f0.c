/* Ghidra address: 011116f0 */
/* Ghidra symbol: FUN_011116f0 */


void FUN_011116f0(longlong *param_1,byte param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined1 uVar14;
  int iVar15;
  undefined8 in_stack_ffffffffffffff88;
  undefined1 local_58 [20];
  undefined1 local_44 [12];
  undefined1 local_38 [16];
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  if ((*(char *)((longlong)param_1 + 0x5c1) == '\0') ||
     (param_2 != *(byte *)((longlong)param_1 + 0x5c2))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  lVar7 = thunk_FUN_041da4fa();
  lVar8 = FUN_0065b870(param_1);
  if ((lVar7 == lVar8) && (param_2 == *(byte *)(param_1 + 0xc2))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  cVar4 = '\0';
  plVar13 = (longlong *)param_1[0x92];
  plVar9 = (longlong *)FUN_00781840();
  cVar3 = (**(code **)(*plVar9 + 0x98))(plVar9);
  if (cVar3 == '\0') {
    FUN_005fdcb0(plVar13[0x10],0);
    FUN_005fdab0(plVar13[0x10],0xff00000f);
    FUN_005fd4e0(plVar13[0xf],0xff000006);
    FUN_005fd6d0(plVar13[0xf],1);
    uVar10 = CONCAT44(uVar5,*(undefined4 *)((longlong)param_1 + 0x9c));
    (**(code **)(*plVar13 + 0xf8))
              (plVar13,param_3,0,param_3 + *(int *)((longlong)param_1 + 0x5d4),uVar10);
    uVar5 = (undefined4)((ulonglong)uVar10 >> 0x20);
    if (bVar1) {
      FUN_005fd4e0(plVar13[0xf],0xff000010);
      (**(code **)(*plVar13 + 200))(plVar13,param_3 + 1,*(int *)((longlong)param_1 + 0x9c) + -2);
      (**(code **)(*plVar13 + 0xc0))(plVar13,param_3 + 1,1);
      (**(code **)(*plVar13 + 0xc0))(plVar13,param_3 + *(int *)((longlong)param_1 + 0x5d4) + -1,1);
    }
    else {
      FUN_005fd4e0(plVar13[0xf],0xff000014);
      (**(code **)(*plVar13 + 200))(plVar13,param_3 + 1,*(int *)((longlong)param_1 + 0x9c) + -2);
      (**(code **)(*plVar13 + 0xc0))(plVar13,param_3 + 1,1);
      (**(code **)(*plVar13 + 0xc0))(plVar13,param_3 + *(int *)((longlong)param_1 + 0x5d4) + -1,1);
      FUN_005fd4e0(plVar13[0xf],0xff000010);
      (**(code **)(*plVar13 + 200))(plVar13,param_3 + 2,*(int *)((longlong)param_1 + 0x9c) + -2);
      (**(code **)(*plVar13 + 0xc0))
                (plVar13,param_3 + *(int *)((longlong)param_1 + 0x5d4) + -2,
                 *(int *)((longlong)param_1 + 0x9c) + -2);
      (**(code **)(*plVar13 + 0xc0))(plVar13,param_3 + *(int *)((longlong)param_1 + 0x5d4) + -2,1);
    }
  }
  else {
    FUN_004238d0(local_38,param_3,0,param_3 + *(int *)((longlong)param_1 + 0x5d4),
                 CONCAT44(uVar5,*(undefined4 *)((longlong)param_1 + 0x9c)));
    if (bVar1) {
      plVar9 = (longlong *)FUN_00781840();
      (**(code **)(*plVar9 + 200))(plVar9,local_44,4);
    }
    else if (bVar2) {
      plVar9 = (longlong *)FUN_00781840();
      (**(code **)(*plVar9 + 200))(plVar9,local_44,6);
    }
    else {
      cVar3 = (**(code **)(*param_1 + 0xf0))(param_1);
      if (cVar3 == '\0') {
        plVar9 = (longlong *)FUN_00781840();
        (**(code **)(*plVar9 + 200))(plVar9,local_44,5);
      }
      else {
        plVar9 = (longlong *)FUN_00781840();
        (**(code **)(*plVar9 + 200))(plVar9,local_44,2);
      }
    }
    FUN_005fdcb0(plVar13[0x10],0);
    uVar10 = FUN_00781840();
    uVar5 = FUN_007793c0(uVar10,0xff00000f);
    FUN_005fdab0(plVar13[0x10],uVar5);
    (**(code **)(*plVar13 + 0xa8))(plVar13,local_38);
    cVar3 = FUN_00781870();
    if (cVar3 != '\0') {
      FUN_00423b10(local_38,0xffffffff,0xffffffff);
    }
    uVar10 = FUN_00781840();
    uVar11 = FUN_005ffa40(plVar13);
    uVar5 = 0;
    FUN_00778dc0(uVar10,uVar11,local_44,local_38,0,0);
    cVar3 = FUN_00781870();
    if (cVar3 != '\0') {
      cVar3 = (**(code **)(*param_1 + 0xf0))(param_1);
      if (cVar3 == '\0') {
        uVar14 = (&DAT_01f226db)[param_2];
      }
      else if ((char)param_1[0xcb] == '\0') {
        uVar12 = (ulonglong)param_2;
        if (*(char *)((longlong)param_1 + uVar12 * 0x20 + 0x499) == '\0') {
          uVar14 = (&DAT_01f226db)[uVar12];
        }
        else if (bVar1) {
          uVar14 = (&DAT_01f226d2)[uVar12];
        }
        else if (bVar2) {
          uVar14 = (&DAT_01f226c9)[uVar12];
        }
        else {
          uVar14 = (&DAT_01f226c0)[uVar12];
        }
      }
      else {
        uVar12 = (ulonglong)param_2;
        if (*(char *)((longlong)param_1 + uVar12 * 0x20 + 0x49b) == '\0') {
          uVar14 = (&DAT_01f226db)[uVar12];
        }
        else if (bVar1) {
          uVar14 = (&DAT_01f226d2)[uVar12];
        }
        else if (bVar2) {
          uVar14 = (&DAT_01f226c9)[uVar12];
        }
        else {
          uVar14 = (&DAT_01f226c0)[uVar12];
        }
      }
      uVar10 = FUN_00781840();
      uVar11 = FUN_005ffa40(param_1[0x92]);
      plVar13 = (longlong *)FUN_00781840();
      (**(code **)(*plVar13 + 0x108))(plVar13,local_58,uVar14);
      uVar5 = 0;
      cVar4 = FUN_00778dc0(uVar10,uVar11,local_58,local_38,0,0);
    }
  }
  if (cVar4 == '\0') {
    cVar3 = (**(code **)(*param_1 + 0xf0))(param_1);
    if ((cVar3 == '\0') && ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0)) {
      lVar7 = 1;
    }
    else if (((char)param_1[0xcb] == '\0') || ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) != 0))
    {
      if (*(char *)((longlong)param_1 + (ulonglong)param_2 * 0x20 + 0x499) == '\0') {
        lVar7 = 1;
      }
      else {
        lVar7 = 0;
        if (*(char *)((longlong)param_1 + (ulonglong)param_2 * 0x20 + 0x49a) != '\0') {
          lVar7 = 2;
        }
      }
    }
    else if (*(char *)((longlong)param_1 + (ulonglong)param_2 * 0x20 + 0x49b) == '\0') {
      lVar7 = 1;
    }
    else {
      lVar7 = 0;
      if (*(char *)((longlong)param_1 + (ulonglong)param_2 * 0x20 + 0x49a) != '\0') {
        lVar7 = 2;
      }
    }
    plVar13 = (longlong *)param_1[(ulonglong)param_2 * 4 + lVar7 + 0x94];
    iVar6 = (**(code **)(*plVar13 + 0x60))(plVar13);
    iVar15 = *(int *)((longlong)param_1 + 0x5d4) / 2 - iVar6 / 2;
    iVar6 = (**(code **)(*plVar13 + 0x48))(plVar13,(longlong)iVar6 % 2 & 0xffffffff);
    iVar6 = *(int *)((longlong)param_1 + 0x9c) / 2 - iVar6 / 2;
    if (bVar1) {
      iVar15 = iVar15 + 1;
      iVar6 = iVar6 + 1;
    }
    (**(code **)(*(longlong *)param_1[0x92] + 0x88))
              ((longlong *)param_1[0x92],param_3 + iVar15,iVar6,plVar13);
  }
  cVar3 = FUN_00781870();
  if ((bool)(bVar2 & cVar3 == '\0')) {
    FUN_00423b80(local_38,param_3,0,*(undefined4 *)((longlong)param_1 + 0x5d4),
                 CONCAT44(uVar5,*(undefined4 *)((longlong)param_1 + 0x9c)));
    FUN_00423b10(local_38,0xfffffffd,0xfffffffd);
    if (bVar1) {
      FUN_00423b50(local_38,1,1);
    }
    uVar10 = FUN_005ffa40(param_1[0x92]);
    thunk_FUN_03b3ef59(uVar10,local_38);
  }
  return;
}

