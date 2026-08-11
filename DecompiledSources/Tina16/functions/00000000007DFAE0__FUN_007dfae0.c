/* Ghidra address: 007dfae0 */
/* Ghidra symbol: FUN_007dfae0 */


void FUN_007dfae0(longlong param_1)

{
  int iVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  uint local_60;
  undefined8 local_58;
  undefined1 *local_50;
  longlong local_40;
  longlong local_38;
  uint local_2c;
  
  local_50 = auStack_88;
  local_58 = 0;
  if ((*(char *)(param_1 + 0x4b) == '\0') ||
     (puVar2 = auStack_88, *(char *)(param_1 + 0x4a) == '\0')) {
    puVar2 = auStack_88;
    if (*(char *)(param_1 + 0x4b) != '\0') {
      plVar8 = (longlong *)FUN_007810f0();
      cVar3 = (**(code **)(*plVar8 + 0x98))(plVar8);
      puVar2 = local_50;
      if (cVar3 != '\0') goto LAB_007dfb43;
    }
  }
  else {
LAB_007dfb43:
    local_50 = puVar2;
    if (((*(ushort *)(param_1 + 0xd8) & 1) == 0) && ((*(ushort *)(param_1 + 0xd8) & 0x40) == 0)) {
      puVar2 = local_50;
      if (*(char *)(param_1 + 0xe0) != '\0') {
        FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 200) + 0x80),0xff00001e);
        puVar2 = local_50;
      }
    }
    else {
      plVar8 = (longlong *)FUN_007810f0();
      cVar3 = (**(code **)(*plVar8 + 0x98))(plVar8);
      if (cVar3 == '\0') {
        FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 200) + 0x80),0xff00000d);
      }
      else {
        FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 200) + 0x80),0xff00001d);
      }
      FUN_005fc860(*(undefined8 *)(*(longlong *)(param_1 + 200) + 0x70),0xff00000e);
      puVar2 = local_50;
    }
  }
  local_50 = puVar2;
  if ((*(char *)(param_1 + 0x5e) == '\0') || (*(char *)(param_1 + 0x4b) != '\0')) {
    (**(code **)(**(longlong **)(param_1 + 200) + 0xa8))
              (*(longlong **)(param_1 + 200),param_1 + 0x80);
  }
  if (*(longlong *)(param_1 + 0x60) == 0) {
    cVar3 = FUN_004113d0(*(undefined8 *)(param_1 + 0x60),&PTR_FUN_007dba80);
    if (cVar3 == '\0') {
      *(undefined1 *)(param_1 + 0x5f) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x5f) = *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0xd0);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x5f) = 0;
  }
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x80) + 1;
  *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x84) + 1;
  iVar5 = FUN_00416db0(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x78),&DAT_007e0b94);
  if (iVar5 == 0) {
    (**(code **)(**(longlong **)(param_1 + 200) + 0xa8))
              (*(longlong **)(param_1 + 200),param_1 + 0x80);
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0xfffffffc;
    *(undefined1 *)(param_1 + 0x49) = 0;
    goto LAB_007e0591;
  }
  if ((*(longlong *)(param_1 + 0x68) == 0) || (*(int *)(*(longlong *)(param_1 + 0xc0) + 0x88) < 0))
  {
LAB_007dfdaf:
    if (*(char *)(*(longlong *)(param_1 + 0xc0) + 0x80) != '\0') {
      plVar8 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 0xa0);
      if (plVar8 != (longlong *)0x0) {
        cVar3 = (**(code **)(*plVar8 + 0x40))(plVar8);
        if (cVar3 == '\0') goto LAB_007dfded;
      }
      goto LAB_007dfdf1;
    }
LAB_007dfded:
    uVar4 = 0;
  }
  else {
    iVar5 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x90))(*(longlong **)(param_1 + 0x68));
    if (iVar5 <= *(int *)(*(longlong *)(param_1 + 0xc0) + 0x88)) goto LAB_007dfdaf;
LAB_007dfdf1:
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 0x5d) = uVar4;
  if (*(char *)(param_1 + 0x5d) == '\0') {
    plVar8 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 0xa0);
    if (plVar8 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar8 + 0x40))(plVar8);
      if (cVar3 == '\0') goto LAB_007dfe39;
    }
    if ((*(longlong *)(param_1 + 0x68) == 0) || (*(char *)(param_1 + 0xe0) != '\0')) {
      *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x70);
      *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x74);
    }
    else {
      *(int *)(param_1 + 0x78) =
           *(int *)(param_1 + 0x70) + *(int *)(*(longlong *)(param_1 + 0x68) + 0x94);
      *(int *)(param_1 + 0x7c) =
           *(int *)(param_1 + 0x74) + *(int *)(*(longlong *)(param_1 + 0x68) + 0x90);
    }
    *(undefined1 *)(param_1 + 0x49) = 0;
    goto LAB_007e0591;
  }
LAB_007dfe39:
  *(undefined1 *)(param_1 + 0x49) = 1;
  if ((*(char *)(param_1 + 0x5d) == '\0') || (*(longlong *)(param_1 + 0x68) == 0)) {
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x70) + 0x10;
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x74) + 0x10;
  }
  else {
    *(int *)(param_1 + 0x78) =
         *(int *)(param_1 + 0x70) + *(int *)(*(longlong *)(param_1 + 0x68) + 0x94);
    *(int *)(param_1 + 0x7c) =
         *(int *)(param_1 + 0x74) + *(int *)(*(longlong *)(param_1 + 0x68) + 0x90);
  }
  if ((*(char *)(*(longlong *)(param_1 + 0xc0) + 0x80) != '\0') &&
     (*(char *)(param_1 + 0x4b) == '\0')) {
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
    local_38 = *(longlong *)(*(longlong *)(param_1 + 200) + 0x80);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(*(longlong *)(local_38 + 0x18) + 0x28);
    if ((*(ushort *)(param_1 + 0xd8) & 1) == 0) {
      local_40 = *(longlong *)(*(longlong *)(param_1 + 200) + 0x80);
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(*(longlong *)(local_40 + 0x18) + 0x28);
      uVar9 = FUN_0060f4c0(0xff00000f,0xff000014);
      FUN_005fda60(*(undefined8 *)(*(longlong *)(param_1 + 200) + 0x80),uVar9);
      (**(code **)(**(longlong **)(param_1 + 200) + 0xa8))
                (*(longlong **)(param_1 + 200),param_1 + 0x70);
    }
    else {
      FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 200) + 0x80),0xff00000f);
      (**(code **)(**(longlong **)(param_1 + 200) + 0xa8))
                (*(longlong **)(param_1 + 200),param_1 + 0x70);
    }
    FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 200) + 0x80),
                 *(undefined4 *)(param_1 + 0x44));
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
  }
  if (*(char *)(param_1 + 0x5d) == '\0') {
    *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)(param_1 + 0x78);
    plVar8 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 0xa0);
    iVar5 = (**(code **)(*plVar8 + 0x60))(plVar8);
    if (iVar5 < *(int *)(param_1 + 0x78) - *(int *)(param_1 + 0x70)) {
      plVar8 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 0xa0);
      iVar5 = (**(code **)(*plVar8 + 0x60))(plVar8);
      *(int *)(param_1 + 0x70) =
           *(int *)(param_1 + 0x70) +
           ((*(int *)(param_1 + 0x78) - *(int *)(param_1 + 0x70)) - iVar5) / 2 + 1;
      plVar8 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 0xa0);
      iVar5 = (**(code **)(*plVar8 + 0x60))(plVar8);
      *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x70) + iVar5;
    }
    plVar8 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 0xa0);
    iVar5 = (**(code **)(*plVar8 + 0x48))(plVar8);
    if (iVar5 < *(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x74)) {
      plVar8 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 0xa0);
      iVar5 = (**(code **)(*plVar8 + 0x48))(plVar8);
      *(int *)(param_1 + 0x74) =
           *(int *)(param_1 + 0x74) +
           ((*(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x74)) - iVar5) / 2 + 1;
      plVar8 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 0xa0);
      iVar5 = (**(code **)(*plVar8 + 0x48))(plVar8);
      *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x74) + iVar5;
    }
    (**(code **)(**(longlong **)(param_1 + 200) + 0x110))
              (*(longlong **)(param_1 + 200),param_1 + 0x70,
               *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0xa0));
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x4c);
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x54);
  }
  else {
    if ((*(longlong *)(param_1 + 0x68) != 0) &&
       (-1 < *(int *)(*(longlong *)(param_1 + 0xc0) + 0x88))) {
      iVar5 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x90))(*(longlong **)(param_1 + 0x68));
      if (*(int *)(*(longlong *)(param_1 + 0xc0) + 0x88) < iVar5) {
        local_68 = *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x88);
        local_60 = CONCAT31(local_60._1_3_,*(undefined1 *)(*(longlong *)(param_1 + 0xc0) + 0x81));
        FUN_007d6c70(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 200),
                     *(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74));
        goto LAB_007e04b8;
      }
    }
    uVar9 = FUN_00608c80(&PTR_FUN_005f92e8,1);
    *(undefined8 *)(param_1 + 0x38) = uVar9;
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x80))(*(longlong **)(param_1 + 0x38),1);
    uVar9 = thunk_FUN_041628f5(0,0x7ff8);
    FUN_0060b650(*(undefined8 *)(param_1 + 0x38),uVar9);
    *(undefined4 *)(param_1 + 0x44) =
         *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 200) + 0x70) + 0x28);
    FUN_005fc860(*(undefined8 *)(*(longlong *)(param_1 + 200) + 0x70),0xff000012);
    iVar5 = *(int *)(param_1 + 0x70);
    iVar6 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x60))(*(longlong **)(param_1 + 0x38));
    iVar1 = *(int *)(param_1 + 0x74);
    iVar7 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x48))(*(longlong **)(param_1 + 0x38));
    (**(code **)(**(longlong **)(param_1 + 200) + 0x88))
              (*(longlong **)(param_1 + 200),
               iVar5 + ((*(int *)(param_1 + 0x78) - iVar5) - iVar6) / 2 + 1,
               iVar1 + ((*(int *)(param_1 + 0x7c) - iVar1) - iVar7) / 2 + 1,
               *(undefined8 *)(param_1 + 0x38));
    FUN_005fc860(*(undefined8 *)(*(longlong *)(param_1 + 200) + 0x70),
                 *(undefined4 *)(param_1 + 0x44));
    FUN_00410f20(*(undefined8 *)(param_1 + 0x38));
  }
LAB_007e04b8:
  if (*(char *)(*(longlong *)(param_1 + 0xc0) + 0x80) != '\0') {
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + -1;
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + -1;
  }
LAB_007e0591:
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + -1;
  *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 2;
  *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 2;
  if (((*(char *)(*(longlong *)(param_1 + 0xc0) + 0x80) != '\0') ||
      ((*(char *)(param_1 + 0x5e) != '\0' && (*(char *)(param_1 + 0x49) != '\0')))) &&
     (*(char *)(param_1 + 0x4b) == '\0')) {
    uVar9 = FUN_005ffa40(*(undefined8 *)(param_1 + 200));
    thunk_FUN_03998bad(uVar9,param_1 + 0x70,
                       *(undefined4 *)
                        (&DAT_01e131d0 +
                        (ulonglong)*(byte *)(*(longlong *)(param_1 + 0xc0) + 0x80) * 4),0xf);
  }
  if (*(char *)(param_1 + 0x5e) != '\0') {
    if (*(char *)(param_1 + 0x49) != '\0') {
      *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x78) + 1;
    }
    if ((*(char *)(param_1 + 0x37) == '\0') || (*(char *)(param_1 + 0xe0) == '\0')) {
      FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 200) + 0x80),0xff00000d);
    }
    (**(code **)(**(longlong **)(param_1 + 200) + 0xa8))
              (*(longlong **)(param_1 + 200),param_1 + 0x80);
  }
  if (((*(char *)(param_1 + 0xe0) != '\0') && (*(char *)(param_1 + 0x37) != '\0')) &&
     ((*(char *)(param_1 + 0x4b) == '\0' || (*(char *)(param_1 + 0x4a) == '\0')))) {
    if (*(char *)(param_1 + 0x5e) == '\0') {
      if ((*(ushort *)(param_1 + 0xd8) & 0x40) != 0) {
        uVar9 = FUN_005ffa40(*(undefined8 *)(param_1 + 200));
        thunk_FUN_03998bad(uVar9,param_1 + 0x80,4,0xf);
      }
    }
    else {
      uVar9 = FUN_005ffa40(*(undefined8 *)(param_1 + 200));
      thunk_FUN_03998bad(uVar9,param_1 + 0x80,2,0xf);
    }
    if (*(char *)(param_1 + 0x5e) == '\0') {
      FUN_00423b50(param_1 + 0x80,0,0xffffffff);
    }
  }
  if ((*(char *)(param_1 + 0x5e) == '\0') || (*(char *)(param_1 + 0x49) == '\0')) {
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x78) + 1;
  }
  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 2;
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + -1;
  local_2c = (uint)(*(ushort *)(&DAT_01e131ee + (ulonglong)*(byte *)(param_1 + 0x5f) * 2) | 0x60);
  if ((*(char *)(param_1 + 0x36) != '\0') && ((*(ushort *)(param_1 + 0xd8) & 0x100) != 0)) {
    local_2c = local_2c | 0x100000;
  }
  *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)(param_1 + 0x88);
  if ((*(ushort *)(param_1 + 0xd8) & 0x20) != 0) {
    FUN_005fce70(*(undefined8 *)(*(longlong *)(param_1 + 200) + 0x70),1);
  }
  local_68 = CONCAT31(local_68._1_3_,*(undefined1 *)(param_1 + 0x5e));
  local_60 = local_2c | 0x500;
  FUN_007de160(*(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 200),
               *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x78),param_1 + 0x80);
  FUN_00423b50(param_1 + 0x80,0,
               (longlong)
               ((*(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x50)) -
               (*(int *)(param_1 + 0x8c) - *(int *)(param_1 + 0x84))) / 2 & 0xffffffff);
  if ((((*(char *)(param_1 + 0xe0) != '\0') && (*(char *)(param_1 + 0x5e) != '\0')) &&
      (*(char *)(param_1 + 0x37) != '\0')) && (*(char *)(param_1 + 0x4b) == '\0')) {
    FUN_00423b50(param_1 + 0x80,1,0);
  }
  local_60 = local_2c;
  local_68._0_1_ = *(undefined1 *)(param_1 + 0x5e);
  FUN_007de160(*(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 200),
               *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x78),param_1 + 0x80);
  if (((*(short *)(*(longlong *)(param_1 + 0xc0) + 0xc0) != 0) &&
      (*(char *)(param_1 + 0xe0) == '\0')) &&
     ((*(char *)(param_1 + 0x35) == '\0' ||
      (*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0xb8) == 0)))) {
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x88);
    *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x54) + -10;
    FUN_007dc700(&local_58,*(undefined2 *)(*(longlong *)(param_1 + 0xc0) + 0xc0));
    local_68._0_1_ = *(undefined1 *)(param_1 + 0x5e);
    local_60 = 2;
    FUN_007de160(*(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 200),local_58,
                 param_1 + 0x80);
  }
  FUN_00414480(&local_58);
  return;
}

