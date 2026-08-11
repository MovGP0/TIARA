/* Ghidra address: 00649f90 */
/* Ghidra symbol: FUN_00649f90 */


void FUN_00649f90(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 uVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  code *pcVar11;
  uint uVar12;
  bool bVar13;
  undefined1 auStack_78 [40];
  undefined8 local_50 [2];
  longlong local_40 [2];
  
  if (((DAT_0201232c == '\0') &&
      (uVar6 = DAT_02012318 - (int)*param_1, uVar12 = (int)uVar6 >> 0x1f,
      (int)((uVar6 ^ uVar12) - uVar12) < DAT_02012328)) &&
     (uVar6 = DAT_0201231c - *(int *)((longlong)param_1 + 4), uVar12 = (int)uVar6 >> 0x1f,
     (int)((uVar6 ^ uVar12) - uVar12) < DAT_02012328)) {
    return;
  }
  lVar8 = FUN_00649e00(param_1,local_40,*(undefined1 *)(DAT_020122f8 + 0xff),DAT_020122f8);
  if ((DAT_0201232c == '\0') && (DAT_02012330 != 0)) {
    uVar9 = thunk_FUN_0417695f();
    FUN_00660030(DAT_02012330,uVar9,DAT_02012318,DAT_0201231c);
  }
  cVar5 = DAT_0201232c;
  bVar13 = *(char *)(DAT_020122f8 + 0xff) != '\0';
  if (bVar13) {
    DAT_0201232c = '\x02';
  }
  else {
    DAT_0201232c = '\x01';
  }
  if (lVar8 != DAT_02012300[4]) {
    FUN_00649e70(1);
    if (DAT_02012300 == (longlong *)0x0) {
      return;
    }
    DAT_02012300[4] = lVar8;
    DAT_02012300[2] = local_40[0];
    DAT_02012300[3] = *param_1;
    FUN_00649e70(0);
    if (DAT_02012300 == (longlong *)0x0) {
      return;
    }
  }
  DAT_02012300[3] = *param_1;
  if (DAT_02012300[4] != 0) {
    lVar10 = FUN_0064d3a0(DAT_02012300[4],param_1);
    DAT_02012300[5] = lVar10;
  }
  uVar7 = FUN_00649e70(2);
  uVar7 = (**(code **)(*DAT_02012300 + 8))
                    (DAT_02012300,uVar7,(int)*param_1,*(int *)((longlong)param_1 + 4));
  if (DAT_02012330 != 0) {
    if (((lVar8 == 0) || ((*(uint *)(lVar8 + 0xa0) & 0x2000) != 0)) ||
       ((char)DAT_02012300[1] != '\0')) {
      FUN_0065ffa0(DAT_02012330,uVar7);
      if (*(char *)(DAT_02012330 + 0xea) == '\0') {
        uVar9 = thunk_FUN_0417695f();
        FUN_00660030(DAT_02012330,uVar9,(int)*param_1,*(int *)((longlong)param_1 + 4));
      }
      else {
        FUN_006601a0(DAT_02012330,(int)*param_1,*(int *)((longlong)param_1 + 4));
      }
    }
    else {
      FUN_00660220(DAT_02012330);
      uVar9 = FUN_00808880(*(undefined8 *)PTR_DAT_02005950,(longlong)(short)uVar7);
      thunk_FUN_04176eb1(uVar9);
    }
  }
  uVar9 = FUN_00808880(*(undefined8 *)PTR_DAT_02005950,(longlong)(short)uVar7);
  thunk_FUN_04176eb1(uVar9);
  plVar1 = DAT_02012300;
  if (DAT_0201232c == '\x02') {
    if (lVar8 == 0) {
      lVar8 = DAT_02012300[10];
      pcVar11 = (code *)FUN_00411550(lVar8,0xffe7);
      (*pcVar11)(lVar8,plVar1,(int)*param_1,*(int *)((longlong)param_1 + 4));
    }
    else {
      lVar8 = FUN_00649ed0(auStack_78);
      DAT_02012300[0xf] = lVar8;
      if (lVar8 == 0) {
        lVar8 = DAT_02012300[4];
        pcVar11 = (code *)FUN_00411550(lVar8,0xffd8);
        uVar3 = (*pcVar11)(lVar8,DAT_02012300 + 5);
        *(undefined1 *)(DAT_02012300 + 0xe) = uVar3;
      }
      else {
        local_50[0] = FUN_0064d3a0(lVar8,param_1);
        pcVar11 = (code *)FUN_00411550(lVar8,0xffd8);
        uVar3 = (*pcVar11)(lVar8,local_50);
        *(undefined1 *)(DAT_02012300 + 0xe) = uVar3;
      }
    }
    if ((DAT_02012300 != (longlong *)0x0) &&
       (cVar4 = FUN_0043e2c0(DAT_02012300 + 0xc,DAT_02012300 + 0x10,0x10), cVar4 == '\0')) {
      if ((bVar13 && cVar5 != '\0') &&
         (cVar5 = (**(code **)(*DAT_02012300 + 0x78))(DAT_02012300), cVar5 != '\0')) {
        (**(code **)(*DAT_02012300 + 0x68))(DAT_02012300);
      }
      (**(code **)(*DAT_02012300 + 0x60))(DAT_02012300);
      plVar2 = DAT_02012300 + 0x11;
      plVar1 = DAT_02012300 + 0xd;
      DAT_02012300[0x10] = DAT_02012300[0xc];
      *plVar2 = *plVar1;
    }
  }
  return;
}

