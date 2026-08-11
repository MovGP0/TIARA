/* Ghidra address: 007de690 */
/* Ghidra symbol: FUN_007de690 */


void FUN_007de690(longlong param_1,char param_2)

{
  byte bVar1;
  short sVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 uVar10;
  uint uVar11;
  int *piVar12;
  undefined4 uVar13;
  uint local_f0 [8];
  byte local_d0 [8];
  undefined1 local_c8 [24];
  undefined1 local_b0 [12];
  undefined1 local_a4 [16];
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  undefined8 local_74;
  undefined8 local_6c;
  int local_64;
  int local_60;
  int local_58;
  int local_54;
  int local_50;
  int local_48;
  int local_44;
  int local_40;
  int local_3c [2];
  undefined4 local_34;
  undefined8 local_30;
  
  local_30 = 0;
  plVar9 = (longlong *)FUN_007810f0();
  uVar6 = FUN_007e53b0(*(undefined8 *)(param_1 + 0xc0));
  if (*(char *)(param_1 + 0xe0) == '\0') {
    uVar10 = FUN_005ffa40(*(undefined8 *)(param_1 + 200));
    (**(code **)(*plVar9 + 0x158))(plVar9,local_c8,0x12);
    FUN_00778dc0(plVar9,uVar10,local_c8,param_1 + 0x80,0,0);
    (**(code **)(*plVar9 + 0x158))
              (plVar9,local_c8,(&DAT_01e131e1)[*(byte *)(*(longlong *)(param_1 + 0xc0) + 0x81)]);
    FUN_007790b0(plVar9,local_c8,2,&local_34);
    FUN_005fc860(*(undefined8 *)(*(longlong *)(param_1 + 200) + 0x70),local_34);
  }
  else if (((*(ushort *)(param_1 + 0xd8) & 1) == 0) && ((*(ushort *)(param_1 + 0xd8) & 0x40) == 0))
  {
    FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 200) + 0x80),0xff00001e);
    (**(code **)(**(longlong **)(param_1 + 200) + 0xa8))
              (*(longlong **)(param_1 + 200),param_1 + 0x80);
  }
  else {
    (**(code **)(*plVar9 + 0x158))
              (plVar9,local_c8,(&DAT_01e131df)[*(byte *)(*(longlong *)(param_1 + 0xc0) + 0x81)]);
    FUN_007790b0(plVar9,local_c8,2,&local_34);
    FUN_005fc860(*(undefined8 *)(*(longlong *)(param_1 + 200) + 0x70),local_34);
    uVar10 = FUN_005ffa40(*(undefined8 *)(param_1 + 200));
    (**(code **)(*plVar9 + 0x158))
              (plVar9,local_c8,
               (&DAT_01e131db)
               [(ulonglong)((*(ushort *)(param_1 + 0xd8) & 1) != 0) +
                (ulonglong)((*(ushort *)(param_1 + 0xd8) & 0x40) != 0) * 2]);
    FUN_00778dc0(plVar9,uVar10,local_c8,param_1 + 0x80,0,0);
  }
  (**(code **)(*plVar9 + 0x158))
            (plVar9,local_b0,
             (&DAT_01e131e7)
             [(ulonglong)*(byte *)(*(longlong *)(param_1 + 0xc0) + 0x85) +
              (ulonglong)*(byte *)(*(longlong *)(param_1 + 0xc0) + 0x81) * 2]);
  uVar10 = FUN_005ffa40(*(undefined8 *)(param_1 + 200));
  FUN_00779290(plVar9,uVar10,local_b0,1,&local_44,uVar6);
  uVar10 = FUN_005ffa40(*(undefined8 *)(param_1 + 200));
  FUN_00779130(plVar9,uVar10,local_b0,1,&local_64,uVar6);
  if (param_2 == '\0') {
    FUN_004238d0(&local_84,*(int *)(param_1 + 0x80),*(int *)(param_1 + 0x84),
                 *(int *)(param_1 + 0x80) + local_44 + local_60 * 2,
                 *(int *)(param_1 + 0x84) + local_40 + local_58 * 2);
  }
  else {
    FUN_004238d0(&local_84,(*(int *)(param_1 + 0x88) - local_44) + local_60 * -2,
                 *(int *)(param_1 + 0x84),*(int *)(param_1 + 0x88),
                 *(int *)(param_1 + 0x84) + local_40 + local_58 * 2);
  }
  iVar8 = *(int *)(param_1 + 0x8c);
  if (iVar8 < local_78) {
    iVar7 = FUN_00416db0(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x78),&DAT_007dfac8);
    if (iVar7 != 0) {
      local_78 = iVar8;
      local_7c = FUN_004230c0(param_1 + 0x80);
      local_7c = local_84 + local_7c;
    }
  }
  *(ulonglong *)(param_1 + 0x70) = CONCAT44(local_80,local_84);
  *(ulonglong *)(param_1 + 0x78) = CONCAT44(local_78,local_7c);
  if (*(longlong *)(param_1 + 0x68) != 0) {
    iVar8 = *(int *)(*(longlong *)(param_1 + 0x68) + 0x90);
    if (local_40 < iVar8) {
      *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + (iVar8 - local_40);
    }
    iVar8 = *(int *)(*(longlong *)(param_1 + 0x68) + 0x94);
    if (local_44 < iVar8) {
      if (param_2 == '\0') {
        *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + (iVar8 - local_44);
      }
      else {
        *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) - (iVar8 - local_44);
      }
    }
    FUN_00423b50(&local_84,(longlong)(*(int *)(param_1 + 0x78) - local_7c) / 2 & 0xffffffff,
                 (longlong)(*(int *)(param_1 + 0x7c) - local_78) / 2 & 0xffffffff);
  }
  local_74 = *(undefined8 *)(param_1 + 0x70);
  local_6c = *(undefined8 *)(param_1 + 0x78);
  if (param_2 != '\0') {
    local_6c._4_4_ = (undefined4)((ulonglong)local_6c >> 0x20);
    local_6c = CONCAT44(local_6c._4_4_,*(undefined4 *)(param_1 + 0x70));
  }
  (**(code **)(*plVar9 + 0x158))(plVar9,local_b0,0x1b);
  uVar10 = FUN_005ffa40(*(undefined8 *)(param_1 + 200));
  FUN_00779290(plVar9,uVar10,local_b0,1,local_3c,0);
  uVar10 = FUN_005ffa40(*(undefined8 *)(param_1 + 200));
  piVar12 = &local_54;
  FUN_00779130(plVar9,uVar10,local_b0,0,piVar12,0);
  uVar13 = (undefined4)((ulonglong)piVar12 >> 0x20);
  if (param_2 == '\0') {
    local_6c._0_4_ = (int)local_6c + local_3c[0] + local_64 + local_54;
  }
  else {
    local_74 = CONCAT44(local_74._4_4_,(int)local_74 - (local_3c[0] + local_60));
    local_6c._0_4_ = (int)local_6c - local_50;
  }
  if (*(char *)(param_1 + 0xe0) == '\0') {
    uVar10 = FUN_005ffa40(*(undefined8 *)(param_1 + 200));
    uVar13 = 0;
    FUN_00778dc0(plVar9,uVar10,local_b0,&local_74,0,0);
  }
  if (*(longlong *)(param_1 + 0x60) == 0) {
    cVar4 = FUN_004113d0(*(undefined8 *)(param_1 + 0x60),&PTR_FUN_007dba80);
    if (cVar4 == '\0') {
      *(undefined1 *)(param_1 + 0x5f) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x5f) = *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0xd0);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x5f) = 0;
  }
  if ((*(char *)(param_1 + 0x5e) != '\0') && (*(char *)(param_1 + 0xe0) == '\0')) {
    uVar10 = FUN_005ffa40(*(undefined8 *)(param_1 + 200));
    (**(code **)(*plVar9 + 0x158))
              (plVar9,local_c8,(&DAT_01e131e3)[*(byte *)(*(longlong *)(param_1 + 0xc0) + 0x81)]);
    uVar13 = 0;
    FUN_00778dc0(plVar9,uVar10,local_c8,param_1 + 0x80,0,0);
  }
  iVar8 = FUN_00416db0(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x78),&DAT_007dfac8);
  if (iVar8 == 0) goto LAB_007df4c1;
  if ((*(longlong *)(param_1 + 0x68) == 0) || (*(int *)(*(longlong *)(param_1 + 0xc0) + 0x88) < 0))
  {
LAB_007dee37:
    if (*(char *)(*(longlong *)(param_1 + 0xc0) + 0x80) != '\0') {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 0xa0);
      if (plVar3 != (longlong *)0x0) {
        cVar4 = (**(code **)(*plVar3 + 0x40))(plVar3);
        if (cVar4 == '\0') goto LAB_007dee6f;
      }
      goto LAB_007dee73;
    }
LAB_007dee6f:
    uVar5 = 0;
  }
  else {
    iVar8 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x90))(*(longlong **)(param_1 + 0x68));
    if (iVar8 <= *(int *)(*(longlong *)(param_1 + 0xc0) + 0x88)) goto LAB_007dee37;
LAB_007dee73:
    uVar5 = 1;
  }
  *(undefined1 *)(param_1 + 0x5d) = uVar5;
  if (*(char *)(param_1 + 0x5d) == '\0') {
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 0xa0);
    if (plVar3 == (longlong *)0x0) goto LAB_007df4c1;
    cVar4 = (**(code **)(*plVar3 + 0x40))(plVar3);
    if (cVar4 != '\0') goto LAB_007df4c1;
  }
  if (*(char *)(param_1 + 0x5d) == '\0') {
    if ((*(char *)(*(longlong *)(param_1 + 0xc0) + 0x80) != '\0') &&
       (*(char *)(param_1 + 0xe0) == '\0')) {
      uVar10 = FUN_005ffa40(*(undefined8 *)(param_1 + 200));
      (**(code **)(*plVar9 + 0x158))
                (plVar9,local_c8,(&DAT_01e131e5)[*(byte *)(*(longlong *)(param_1 + 0xc0) + 0x81)]);
      uVar13 = 0;
      FUN_00778dc0(plVar9,uVar10,local_c8,&local_84,0,0);
    }
    FUN_004238d0(&local_94,0,0,0x10,CONCAT44(uVar13,0x10));
    FUN_00423b50(&local_94,
                 *(int *)(param_1 + 0x70) +
                 ((*(int *)(param_1 + 0x78) - *(int *)(param_1 + 0x70)) + -0x10) / 2,
                 *(int *)(param_1 + 0x74) +
                 ((*(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x74)) + -0x10) / 2);
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 0xa0);
    iVar8 = (**(code **)(*plVar3 + 0x60))(plVar3);
    if (iVar8 < local_44) {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 0xa0);
      iVar8 = (**(code **)(*plVar3 + 0x60))(plVar3);
      iVar8 = (local_8c - local_94) - iVar8;
      local_94 = local_94 + iVar8 / 2;
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 0xa0);
      local_8c = (**(code **)(*plVar3 + 0x60))(plVar3,(longlong)iVar8 % 2 & 0xffffffff);
      local_8c = local_94 + local_8c;
    }
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 0xa0);
    iVar8 = (**(code **)(*plVar3 + 0x48))(plVar3);
    if (iVar8 < local_40) {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 0xa0);
      iVar8 = (**(code **)(*plVar3 + 0x48))(plVar3);
      iVar8 = (local_88 - local_90) - iVar8;
      local_90 = local_90 + iVar8 / 2;
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 0xa0);
      local_88 = (**(code **)(*plVar3 + 0x48))(plVar3,(longlong)iVar8 % 2 & 0xffffffff);
      local_88 = local_90 + local_88;
    }
    (**(code **)(**(longlong **)(param_1 + 200) + 0x110))
              (*(longlong **)(param_1 + 200),&local_94,
               *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0xa0));
  }
  else {
    if ((*(longlong *)(param_1 + 0x68) != 0) &&
       (-1 < *(int *)(*(longlong *)(param_1 + 0xc0) + 0x88))) {
      iVar8 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x90))(*(longlong **)(param_1 + 0x68));
      if (*(int *)(*(longlong *)(param_1 + 0xc0) + 0x88) < iVar8) {
        if ((*(char *)(*(longlong *)(param_1 + 0xc0) + 0x80) != '\0') &&
           (*(char *)(param_1 + 0xe0) == '\0')) {
          uVar10 = FUN_005ffa40(*(undefined8 *)(param_1 + 200));
          (**(code **)(*plVar9 + 0x158))
                    (plVar9,local_c8,
                     (&DAT_01e131e5)[*(byte *)(*(longlong *)(param_1 + 0xc0) + 0x81)]);
          uVar13 = 0;
          FUN_00778dc0(plVar9,uVar10,local_c8,&local_84,0,0);
        }
        FUN_007d6c70(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 200),
                     *(int *)(param_1 + 0x70) +
                     ((*(int *)(param_1 + 0x78) - *(int *)(param_1 + 0x70)) -
                     *(int *)(*(longlong *)(param_1 + 0x68) + 0x94)) / 2,
                     *(int *)(param_1 + 0x74) +
                     ((*(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x74)) -
                     *(int *)(*(longlong *)(param_1 + 0x68) + 0x90)) / 2,
                     CONCAT44(uVar13,*(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x88)),
                     *(undefined1 *)(*(longlong *)(param_1 + 0xc0) + 0x81));
        goto LAB_007df4c1;
      }
    }
    if ((*(char *)(*(longlong *)(param_1 + 0xc0) + 0x80) != '\0') &&
       (*(char *)(param_1 + 0xe0) == '\0')) {
      uVar10 = FUN_005ffa40(*(undefined8 *)(param_1 + 200));
      (**(code **)(*plVar9 + 0x158))
                (plVar9,local_c8,(&DAT_01e131e5)[*(byte *)(*(longlong *)(param_1 + 0xc0) + 0x81)]);
      FUN_00778dc0(plVar9,uVar10,local_c8,&local_84,0,0);
      uVar10 = FUN_005ffa40(*(undefined8 *)(param_1 + 200));
      (**(code **)(*plVar9 + 0x158))
                (plVar9,local_c8,
                 (&DAT_01e131e7)
                 [(ulonglong)*(byte *)(*(longlong *)(param_1 + 0xc0) + 0x85) +
                  (ulonglong)*(byte *)(*(longlong *)(param_1 + 0xc0) + 0x81) * 2]);
      FUN_00779290(plVar9,uVar10,local_c8,1,&local_44,uVar6);
      FUN_004238d0(local_a4,0,0,local_44,local_40);
      iVar8 = FUN_004230a0(&local_84);
      iVar7 = FUN_004230c0(&local_84);
      FUN_00423b50(local_a4,local_84 + (iVar8 - local_44) / 2,local_80 + (iVar7 - local_40) / 2);
      uVar10 = FUN_005ffa40(*(undefined8 *)(param_1 + 200));
      (**(code **)(*plVar9 + 0x158))
                (plVar9,local_c8,
                 (&DAT_01e131e7)
                 [(ulonglong)*(byte *)(*(longlong *)(param_1 + 0xc0) + 0x85) +
                  (ulonglong)*(byte *)(*(longlong *)(param_1 + 0xc0) + 0x81) * 2]);
      FUN_00778dc0(plVar9,uVar10,local_c8,local_a4,0,uVar6);
    }
  }
LAB_007df4c1:
  uVar10 = FUN_005ffa40(*(undefined8 *)(param_1 + 200));
  (**(code **)(*plVar9 + 0x158))(plVar9,local_c8,0x1c);
  FUN_00779130(plVar9,uVar10,local_c8,0,&local_54,uVar6);
  if (*(char *)(param_1 + 0xe0) == '\0') {
    if (param_2 != '\0') {
      *(int *)(param_1 + 0x88) = (int)local_74;
      *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) - local_54;
    }
    else {
      *(int *)(param_1 + 0x80) = (int)local_6c;
      *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + local_54;
    }
    iVar8 = FUN_00416db0(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x78),&DAT_007dfac8);
    if (iVar8 != 0) {
      uVar10 = FUN_005ffa40(*(undefined8 *)(param_1 + 200));
      (**(code **)(*plVar9 + 0x158))
                (plVar9,local_c8,(&DAT_01e131eb)[*(byte *)(*(longlong *)(param_1 + 0xc0) + 0x81)]);
      FUN_00779290(plVar9,uVar10,local_c8,1,local_3c,uVar6);
      if (param_2 != '\0') {
        *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + local_3c[0];
      }
      else {
        *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) - local_3c[0];
      }
    }
  }
  else if (((*(longlong *)(param_1 + 0x68) == 0) ||
           (*(int *)(*(longlong *)(param_1 + 0xc0) + 0x88) == -1)) &&
          (*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0xa0) == 0)) {
    if (param_2 == '\0') {
      *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + local_54 + 3;
    }
    else {
      *(int *)(param_1 + 0x88) = (*(int *)(param_1 + 0x88) - local_54) + -3;
    }
  }
  else if (param_2 == '\0') {
    *(int *)(param_1 + 0x80) =
         *(int *)(param_1 + 0x80) + (*(int *)(param_1 + 0x78) - *(int *)(param_1 + 0x70));
  }
  else {
    *(int *)(param_1 + 0x88) =
         *(int *)(param_1 + 0x88) - (*(int *)(param_1 + 0x78) - *(int *)(param_1 + 0x70));
  }
  iVar8 = FUN_00416db0(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x78),&DAT_007dfac8);
  if (iVar8 == 0) {
    if (param_2 == '\0') {
      *(int *)(param_1 + 0x80) = (int)local_6c + 1;
    }
    else {
      *(int *)(param_1 + 0x88) = (int)local_74 + -1;
    }
    (**(code **)(*plVar9 + 0x158))(plVar9,local_b0,0x20);
    uVar10 = FUN_005ffa40(*(undefined8 *)(param_1 + 200));
    FUN_00779130(plVar9,uVar10,local_b0,0,&local_54,0);
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) - local_48;
    uVar10 = FUN_005ffa40(*(undefined8 *)(param_1 + 200));
    FUN_00778dc0(plVar9,uVar10,local_b0,param_1 + 0x80,0,0);
  }
  else {
    local_d0[0] = 0x40;
    local_d0[1] = 0x40;
    local_d0[2] = 0;
    bVar1 = (&DAT_01e131d8)[*(byte *)(param_1 + 0x5f)];
    if (bVar1 < 0x18) {
      local_d0[(longlong)((ulonglong)bVar1 & 0x7f) >> 3] =
           local_d0[(longlong)((ulonglong)bVar1 & 0x7f) >> 3] | '\x01' << ((ulonglong)bVar1 & 7);
    }
    FUN_0040f840(local_d0,local_f0,0,3);
    uVar11 = local_f0[0];
    if ((*(ushort *)(param_1 + 0xd8) & 0x100) != 0) {
      uVar11 = local_f0[0] | 0x40000;
    }
    *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)(param_1 + 0x88);
    FUN_007de490(*(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 200),
                 *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x78),param_1 + 0x80,
                 *(undefined1 *)(param_1 + 0x5e),uVar11 | 0x402);
    if (param_2 != '\0') {
      *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x4c);
      *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x54);
    }
    FUN_00423b50(param_1 + 0x80,0,
                 (longlong)
                 ((*(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x50)) -
                 (*(int *)(param_1 + 0x8c) - *(int *)(param_1 + 0x84))) / 2 & 0xffffffff);
    FUN_007de490(*(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 200),
                 *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x78),param_1 + 0x80,
                 *(undefined1 *)(param_1 + 0x5e),uVar11);
    sVar2 = *(short *)(*(longlong *)(param_1 + 0xc0) + 0xc0);
    if (((sVar2 != 0) && (*(char *)(param_1 + 0xe0) == '\0')) &&
       (*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0xb8) == 0)) {
      FUN_007dc700(&local_30,sVar2);
      if (param_2 == '\0') {
        *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x88);
        *(int *)(param_1 + 0x88) = (*(int *)(param_1 + 0x54) - local_3c[0]) - local_54;
      }
      else {
        *(int *)(param_1 + 0x80) = local_3c[0] * 2 + local_54 + local_50;
        iVar8 = FUN_005fdff0(*(undefined8 *)(param_1 + 200),local_30);
        *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x80) + iVar8;
      }
      FUN_007de160(*(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 200),local_30,
                   param_1 + 0x80,*(undefined1 *)(param_1 + 0x5e),2);
    }
  }
  FUN_00414480(&local_30);
  return;
}

