/* Ghidra address: 0067f380 */
/* Ghidra symbol: FUN_0067f380 */


void FUN_0067f380(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  code *pcVar10;
  ulonglong uVar11;
  int iVar12;
  ushort uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  
  plVar1 = (longlong *)param_1[0x62];
  (**(code **)(*param_1 + 0xe0))(param_1,&local_88);
  cVar3 = FUN_0067fd80(param_1);
  if (cVar3 == '\0') {
    FUN_005fdab0(plVar1[0x10],(int)param_1[0x19]);
    FUN_005fdcb0(plVar1[0x10],0);
    if ((*(uint *)((longlong)param_1 + 0xa4) & 0x8000) == 0) {
      (**(code **)(*plVar1 + 0xa8))(plVar1,&local_88);
    }
    else {
      FUN_0067f2c0(param_1[0x62],&local_88);
    }
  }
  FUN_005fdcb0(plVar1[0x10],1);
  iVar4 = FUN_005fcff0(plVar1[0xe]);
  if (iVar4 == 0) {
    uVar13 = *(ushort *)(&DAT_01df9576 + (ulonglong)*(byte *)((longlong)param_1 + 0x33d) * 2) | 0x40
             | *(ushort *)(&DAT_01df9570 + (ulonglong)*(byte *)(param_1 + 100) * 2);
    if (*(char *)((longlong)param_1 + 0x33c) != '\0') {
      local_98 = local_88;
      uStack_90 = uStack_80;
      pcVar10 = (code *)FUN_00411550(param_1,0xffc3);
      (*pcVar10)(param_1,&local_98,uVar13 | 0x400);
      if (*(char *)((longlong)param_1 + 0x33c) == '\x02') {
        FUN_00423b50(&local_88,0,*(int *)((longlong)param_1 + 0x9c) - uStack_90._4_4_);
      }
      else {
        FUN_00423b50(&local_88,0,
                     (longlong)(*(int *)((longlong)param_1 + 0x9c) - uStack_90._4_4_) / 2 &
                     0xffffffff);
      }
    }
    pcVar10 = (code *)FUN_00411550(param_1,0xffc3);
    (*pcVar10)(param_1,&local_88,uVar13);
  }
  else {
    local_98 = local_88;
    uStack_90 = uStack_80;
    pcVar10 = (code *)FUN_00411550(param_1,0xffc3);
    (*pcVar10)(param_1,&local_98,0x540);
    iVar4 = FUN_005fcff0(*(undefined8 *)(param_1[0x62] + 0x70));
    dVar17 = (double)(-iVar4 / 10) * 0.017453292519943295;
    dVar14 = (double)FUN_0040bdd0(dVar17,(longlong)-iVar4 % 10 & 0xffffffff);
    iVar4 = FUN_004230a0(&local_98);
    dVar15 = (double)FUN_0040bcd0(dVar17);
    iVar5 = FUN_004230a0(&local_98);
    dVar16 = (double)FUN_0040bdd0(dVar17 + 1.5707963267948966);
    iVar6 = FUN_004230c0(&local_98);
    dVar17 = (double)FUN_0040bcd0(dVar17 + 1.5707963267948966);
    iVar7 = FUN_004230c0(&local_98);
    iVar9 = 0;
    iVar12 = 0;
    iVar8 = FUN_005fcff0(*(undefined8 *)(param_1[0x62] + 0x70));
    uVar2 = (longlong)
            ((ulonglong)(uint)((int)((longlong)iVar8 / 10) >> 0x1f) << 0x20 |
            (longlong)iVar8 / 10 & 0xffffffffU) % 0x168;
    uVar2 = (ulonglong)(uint)((int)uVar2 >> 0x1f) << 0x20 | uVar2 & 0xffffffff;
    uVar11 = (longlong)uVar2 % 0x5a & 0xffffffff;
    iVar8 = (int)((longlong)uVar2 / 0x5a);
    if (iVar8 == 0) {
      iVar9 = -1;
      iVar12 = FUN_0040c770(dVar14 * (double)iVar4,uVar11);
      iVar12 = -iVar12;
    }
    else if (iVar8 == 1) {
      iVar9 = FUN_0040c770(dVar15 * (double)iVar5,uVar11);
      iVar9 = -1 - iVar9;
      iVar4 = FUN_0040c770(dVar14 * (double)iVar4);
      iVar5 = FUN_0040c770(dVar16 * (double)iVar6);
      iVar12 = (-iVar5 - iVar4) + -1;
    }
    else if (iVar8 == 2) {
      iVar4 = FUN_0040c770(dVar15 * (double)iVar5,uVar11);
      iVar5 = FUN_0040c770(dVar17 * (double)iVar7);
      iVar9 = (-iVar5 - iVar4) + -1;
      iVar12 = FUN_0040c770(dVar16 * (double)iVar6);
      iVar12 = -1 - iVar12;
    }
    else if (iVar8 == 3) {
      iVar9 = FUN_0040c770(dVar17 * (double)iVar7,uVar11);
      iVar9 = -1 - iVar9;
      iVar12 = 0;
    }
    (**(code **)(*param_1 + 0xe0))(param_1,&local_88);
    FUN_00423b50(&local_88,iVar9,iVar12);
    pcVar10 = (code *)FUN_00411550(param_1,0xffc3);
    (*pcVar10)(param_1,&local_88,0x140);
  }
  return;
}

