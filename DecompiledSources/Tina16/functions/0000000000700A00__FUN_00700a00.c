/* Ghidra address: 00700a00 */
/* Ghidra symbol: FUN_00700a00 */


undefined1 FUN_00700a00(longlong *param_1,longlong *param_2,ushort param_3)

{
  ulonglong uVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined1 local_68 [16];
  undefined4 local_58 [4];
  int local_48;
  int local_44;
  longlong local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  local_40 = 0;
  lVar7 = FUN_00609e10(param_1[0x93]);
  (**(code **)(**(longlong **)(lVar7 + 0x78) + 0x10))
            (*(longlong **)(lVar7 + 0x78),*(undefined8 *)(param_1[0x98] + 0x78));
  lVar7 = FUN_00609e10(param_1[0x93]);
  (**(code **)(**(longlong **)(lVar7 + 0x80) + 0x10))
            (*(longlong **)(lVar7 + 0x80),*(undefined8 *)(param_1[0x98] + 0x80));
  lVar7 = FUN_00609e10(param_1[0x93]);
  (**(code **)(**(longlong **)(lVar7 + 0x70) + 0x10))
            (*(longlong **)(lVar7 + 0x70),*(undefined8 *)(param_1[0x98] + 0x70));
  plVar14 = (longlong *)0x0;
  if ((*(byte *)((longlong)param_1 + 0x4cb) & 2) == 0) {
    (**(code **)(*(longlong *)param_1[0x93] + 0xe0))
              ((longlong *)param_1[0x93],(int)param_2[0x13],
               *(undefined4 *)((longlong)param_2 + 0x9c));
    lVar7 = FUN_00609e10(param_1[0x93]);
    FUN_005fdab0(*(undefined8 *)(lVar7 + 0x80),(int)param_2[0x19]);
    lVar7 = FUN_00609e10(param_1[0x93]);
    FUN_005fdcb0(*(undefined8 *)(lVar7 + 0x80),0);
    plVar11 = (longlong *)FUN_00609e10(param_1[0x93]);
    plVar10 = (longlong *)FUN_00609e10(param_1[0x93]);
    (**(code **)(*plVar10 + 0x20))(plVar10,local_58);
    (**(code **)(*plVar11 + 0xa8))(plVar11,local_58);
  }
  else {
    (**(code **)(*(longlong *)param_1[0x93] + 0xe0))
              ((longlong *)param_1[0x93],(int)param_1[0x13],
               *(undefined4 *)((longlong)param_1 + 0x9c));
    uVar8 = FUN_00609e10(param_1[0x93]);
    (**(code **)(*param_1 + 0xe0))(param_1,local_58);
    FUN_00636080(uVar8,*(undefined4 *)((longlong)param_1 + 0x4d4),(int)param_1[0x9a],local_58,
                 *(undefined1 *)((longlong)param_1 + 0x4cc));
    uVar8 = FUN_00609e10(param_1[0x93]);
    FUN_004238d0(local_58,0,0,(int)param_2[0x13],*(undefined4 *)((longlong)param_2 + 0x9c));
    uVar9 = FUN_00609e10(param_1[0x93]);
    FUN_0064d000(param_2,local_68);
    FUN_005fead0(uVar8,local_58,uVar9,local_68);
    (**(code **)(*(longlong *)param_1[0x93] + 0xe0))
              ((longlong *)param_1[0x93],(int)param_2[0x13],
               *(undefined4 *)((longlong)param_2 + 0x9c));
  }
  cVar2 = *(char *)((longlong)param_2 + 0x33a);
  if ((((cVar2 != '\0') && (cVar2 != '\x01')) && (cVar2 != '\x02')) && (cVar2 != '\x05'))
  goto LAB_007015e3;
  if ((param_3 & 0x40) != 0) {
    plVar14 = (longlong *)param_1[0xa1];
  }
  cVar2 = (**(code **)(*param_2 + 0xf0))(param_2);
  if (cVar2 == '\0') {
    plVar14 = (longlong *)param_1[0x9f];
  }
  if (plVar14 == (longlong *)0x0) {
    plVar14 = (longlong *)param_1[0x9d];
  }
  if ((param_3 & 0x40) == 0) {
    if (*(char *)((longlong)param_2 + 0x31a) != '\0') {
      cVar2 = (**(code **)(*param_2 + 0xf0))(param_2);
      if (cVar2 != '\0') goto LAB_00700d49;
    }
  }
  else {
LAB_00700d49:
    if ((*(byte *)((longlong)param_1 + 0x4cb) & 1) == 0) {
      if (*(char *)((longlong)param_2 + 0x31a) == '\0') {
        uVar8 = 0xff000016;
        uVar4 = 0xff000015;
      }
      else {
        uVar8 = 0xff000015;
        uVar4 = 0xff000016;
      }
      FUN_004238d0(&local_38,0,0,(int)param_2[0x13],*(undefined4 *)((longlong)param_2 + 0x9c));
      uVar9 = FUN_00609e10(param_1[0x93]);
      FUN_00741000(uVar9,&local_38,uVar8,uVar4,
                   *(undefined4 *)(*(longlong *)(*(longlong *)(param_1[0x98] + 0x78) + 0x18) + 0x2c)
                  );
      if (*(char *)((longlong)param_2 + 0x33a) == '\x02') {
        plVar11 = (longlong *)FUN_00609e10(param_1[0x93]);
        (**(code **)(*plVar11 + 200))(plVar11,local_30 + -0xe,0);
        plVar11 = (longlong *)FUN_00609e10(param_1[0x93]);
        (**(code **)(*plVar11 + 0xc0))
                  (plVar11,local_30 + -0xe,*(undefined4 *)((longlong)param_2 + 0x9c));
      }
    }
    else {
      uVar4 = (undefined4)param_1[0x9b];
      if ((param_3 & 1) != 0) {
        uVar4 = FUN_00635930(uVar4,0xffffffe7);
      }
      uVar5 = FUN_00635930(uVar4,0xffffffce);
      FUN_004238d0(&local_38,0,0,(int)param_2[0x13],*(undefined4 *)((longlong)param_2 + 0x9c));
      lVar7 = FUN_00609e10(param_1[0x93]);
      FUN_005fdab0(*(undefined8 *)(lVar7 + 0x80),uVar5);
      if (*(char *)((longlong)param_2 + 0x33a) == '\x02') {
        lVar7 = FUN_00609e10(param_1[0x93]);
        local_30 = local_30 + *(int *)(*(longlong *)(*(longlong *)(lVar7 + 0x78) + 0x18) + 0x2c) / 2
                   + -0xe;
      }
      plVar11 = (longlong *)FUN_00609e10(param_1[0x93]);
      (**(code **)(*plVar11 + 0xa8))(plVar11,&local_38);
      lVar7 = FUN_00609e10(param_1[0x93]);
      lVar7 = *(longlong *)(lVar7 + 0x78);
      lVar12 = FUN_00609e10(param_1[0x93]);
      FUN_00423b10(&local_38,-*(int *)(*(longlong *)(lVar7 + 0x18) + 0x2c),
                   -*(int *)(*(longlong *)(*(longlong *)(lVar12 + 0x78) + 0x18) + 0x2c));
      lVar7 = FUN_00609e10(param_1[0x93]);
      FUN_005fdab0(*(undefined8 *)(lVar7 + 0x80),uVar4);
      plVar11 = (longlong *)FUN_00609e10(param_1[0x93]);
      (**(code **)(*plVar11 + 0xa8))(plVar11,&local_38);
      lVar7 = FUN_00609e10(param_1[0x93]);
      lVar7 = *(longlong *)(lVar7 + 0x78);
      lVar12 = FUN_00609e10(param_1[0x93]);
      FUN_00423b10(&local_38,*(undefined4 *)(*(longlong *)(lVar7 + 0x18) + 0x2c),
                   *(undefined4 *)(*(longlong *)(*(longlong *)(lVar12 + 0x78) + 0x18) + 0x2c));
      if (*(char *)((longlong)param_2 + 0x33a) == '\x02') {
        local_38 = local_30;
        lVar7 = FUN_00609e10(param_1[0x93]);
        local_30 = (local_30 -
                   *(int *)(*(longlong *)(*(longlong *)(lVar7 + 0x78) + 0x18) + 0x2c) / 2) + 0xe;
        lVar7 = FUN_00609e10(param_1[0x93]);
        FUN_005fdab0(*(undefined8 *)(lVar7 + 0x80),uVar5);
        plVar11 = (longlong *)FUN_00609e10(param_1[0x93]);
        (**(code **)(*plVar11 + 0xa8))(plVar11,&local_38);
        lVar7 = FUN_00609e10(param_1[0x93]);
        lVar7 = *(longlong *)(lVar7 + 0x78);
        lVar12 = FUN_00609e10(param_1[0x93]);
        FUN_00423b10(&local_38,-*(int *)(*(longlong *)(lVar7 + 0x18) + 0x2c),
                     -*(int *)(*(longlong *)(*(longlong *)(lVar12 + 0x78) + 0x18) + 0x2c));
        lVar7 = FUN_00609e10(param_1[0x93]);
        FUN_005fdab0(*(undefined8 *)(lVar7 + 0x80),uVar4);
        plVar11 = (longlong *)FUN_00609e10(param_1[0x93]);
        (**(code **)(*plVar11 + 0xa8))(plVar11,&local_38);
      }
    }
  }
  if ((plVar14 == (longlong *)0x0) || (*(int *)((longlong)param_2 + 0x31c) < 0)) {
LAB_0070114a:
    if ((plVar14 != (longlong *)0x0) && (*(char *)((longlong)param_2 + 0x33a) == '\x05'))
    goto LAB_00701164;
  }
  else {
    iVar6 = (**(code **)(*plVar14 + 0x90))(plVar14);
    if (iVar6 <= *(int *)((longlong)param_2 + 0x31c)) goto LAB_0070114a;
LAB_00701164:
    if (((*(char *)((longlong)param_1 + 0x4dc) == '\0') ||
        (*(char *)((longlong)param_1 + 0x4dd) == '\0')) &&
       (((char)param_1[0x94] == '\0' || (*(char *)((longlong)param_2 + 0x33a) != '\x05')))) {
      uVar1 = (longlong)((int)param_2[0x13] - *(int *)((longlong)plVar14 + 0x94)) / 2;
      uVar13 = uVar1 & 0xffffffff;
      if (*(char *)((longlong)param_2 + 0x33a) == '\x02') {
        uVar13 = (ulonglong)((int)uVar1 - 7);
      }
    }
    else {
      uVar13 = 4;
    }
    if (((*(char *)((longlong)param_1 + 0x4dd) == '\0') || ((char)param_1[0x94] != '\0')) &&
       (((char)param_1[0x94] == '\0' || (*(char *)((longlong)param_2 + 0x33a) != '\x05')))) {
      iVar6 = 4;
    }
    else {
      iVar6 = (*(int *)((longlong)param_2 + 0x9c) - (int)plVar14[0x12]) / 2;
    }
    uVar8 = FUN_00609e10(param_1[0x93]);
    cVar2 = (**(code **)(*param_2 + 0xf0))(param_2);
    if ((cVar2 == '\0') && ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0)) {
      cVar2 = (**(code **)(*param_2 + 0xf0))(param_2);
      if ((cVar2 == '\0') && (plVar14 == (longlong *)param_1[0x9f])) goto LAB_0070127c;
      uVar3 = 0;
    }
    else {
LAB_0070127c:
      uVar3 = 1;
    }
    FUN_007d6cc0(plVar14,uVar8,uVar13,iVar6,*(undefined4 *)((longlong)param_2 + 0x31c),3,0,uVar3);
  }
  if (*(char *)((longlong)param_2 + 0x33a) == '\x02') {
    lVar7 = param_2[0x13];
    iVar6 = *(int *)((longlong)param_2 + 0x9c);
    lVar12 = FUN_00609e10(param_1[0x93],(longlong)iVar6 % 2 & 0xffffffff);
    FUN_005fd4e0(*(undefined8 *)(lVar12 + 0x78),*(undefined4 *)(param_2[0x17] + 0x28));
    cVar2 = (**(code **)(*param_2 + 0xf0))(param_2);
    if (cVar2 == '\0') {
      lVar12 = FUN_00609e10(param_1[0x93]);
      FUN_005fd4e0(*(undefined8 *)(lVar12 + 0x78),0xff000011);
    }
    lVar12 = FUN_00609e10(param_1[0x93]);
    FUN_005fdcb0(*(undefined8 *)(lVar12 + 0x80),0);
    uVar8 = FUN_00609e10(param_1[0x93]);
    local_48 = (int)lVar7 + -10;
    local_44 = iVar6 / 2;
    FUN_00635a10(uVar8,3,&local_48,3);
  }
  if (((*(char *)((longlong)param_1 + 0x4dc) != '\0') && ((char)param_1[0x94] == '\0')) ||
     (((char)param_1[0x94] != '\0' && (*(char *)((longlong)param_2 + 0x33a) == '\x05')))) {
    lVar7 = FUN_00609e10(param_1[0x93]);
    FUN_005fdcb0(*(undefined8 *)(lVar7 + 0x80),1);
    if (((plVar14 == (longlong *)0x0) || (*(char *)((longlong)param_1 + 0x4dd) == '\0')) ||
       ((*(char *)((longlong)param_2 + 0x33a) == '\x05' &&
        ((*(char *)((longlong)param_2 + 0x33a) != '\x05' ||
         (*(int *)((longlong)param_2 + 0x31c) == -1)))))) {
      local_38 = 0;
    }
    else {
      local_38 = *(int *)((longlong)plVar14 + 0x94);
    }
    local_30 = (int)param_2[0x13];
    FUN_0064dd90(param_2,&local_40);
    if (*(char *)((longlong)param_2 + 0x33a) == '\x02') {
      lVar7 = FUN_00609e10(param_1[0x93]);
      local_30 = local_30 + *(int *)(*(longlong *)(*(longlong *)(lVar7 + 0x78) + 0x18) + 0x2c) / 2 +
                 -0xe;
    }
    if ((*(char *)((longlong)param_1 + 0x4dd) == '\0') && (plVar14 != (longlong *)0x0)) {
      local_34 = (int)plVar14[0x12] + 4;
    }
    else {
      uVar8 = FUN_00609e10(param_1[0x93]);
      iVar6 = FUN_005fdfd0(uVar8,local_40);
      local_34 = *(int *)((longlong)param_2 + 0x9c) / 2 - iVar6 / 2;
    }
    uVar8 = FUN_00609e10(param_1[0x93]);
    local_2c = FUN_005fdfd0(uVar8,local_40);
    local_2c = local_34 + local_2c;
    lVar7 = FUN_00609e10(param_1[0x93]);
    FUN_005fc860(*(undefined8 *)(lVar7 + 0x70),*(undefined4 *)(param_2[0x17] + 0x28));
    cVar2 = (**(code **)(*param_2 + 0xf0))(param_2);
    if (cVar2 == '\0') {
      lVar7 = FUN_00609e10(param_1[0x93]);
      FUN_005fc860(*(undefined8 *)(lVar7 + 0x70),0xff000011);
    }
    uVar8 = FUN_00609e10(param_1[0x93]);
    uVar8 = FUN_005ffa40(uVar8);
    uVar4 = 0;
    if (local_40 != 0) {
      uVar4 = *(undefined4 *)(local_40 + -4);
    }
    uVar9 = FUN_00416740(local_40);
    thunk_FUN_041a24be(uVar8,uVar9,uVar4,&local_38,0x8105);
  }
LAB_007015e3:
  (**(code **)(*(longlong *)param_1[0x98] + 0x88))
            ((longlong *)param_1[0x98],(int)param_2[0x12],*(undefined4 *)((longlong)param_2 + 0x94),
             param_1[0x93]);
  FUN_00414480(&local_40);
  return 0;
}

