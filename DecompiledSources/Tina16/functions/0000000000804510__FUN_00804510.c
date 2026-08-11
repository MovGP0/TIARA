/* Ghidra address: 00804510 */
/* Ghidra symbol: FUN_00804510 */


void FUN_00804510(longlong *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined *puVar11;
  undefined6 uVar12;
  bool bVar13;
  undefined1 auStack_e8 [32];
  ulonglong local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 *local_90;
  undefined4 local_7c [7];
  undefined8 local_60;
  undefined8 uStack_58;
  longlong *local_50;
  longlong local_48;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  
  local_90 = auStack_e8;
  local_98 = 0;
  puVar2 = auStack_e8;
  if (((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0) &&
     (puVar2 = auStack_e8, (*(byte *)(param_1 + 0xd5) & 4) != 0)) {
    puVar11 = PTR_PTR_02005a90;
    FUN_0041ddd0(&local_98,PTR_PTR_02005a90);
    param_2 = CONCAT71((int7)((ulonglong)puVar11 >> 8),1);
    uVar7 = FUN_0044d490(&PTR_FUN_00472870,param_2,local_98);
    FUN_004134c0(uVar7);
    puVar2 = local_90;
  }
  local_90 = puVar2;
  FUN_0080e3f0(DAT_02012668);
  *(byte *)(param_1 + 0xd5) = *(byte *)(param_1 + 0xd5) | 4;
  if ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) != 0) {
    if ((((*(ushort *)((longlong)param_1 + 0x34) & 0x10) != 0) && (param_1[0xf] != 0)) &&
       (*(char *)((longlong)param_1 + 0x391) != '\0')) {
      uVar7 = FUN_0065b870(param_1);
      thunk_FUN_03ab0e43(uVar7,1);
    }
    goto code_r0x00804fe8;
  }
  uVar12 = (undefined6)((ulonglong)param_2 >> 0x10);
  if (*(char *)((longlong)param_1 + 0x391) == '\0') {
    pcVar8 = (code *)FUN_00411550(param_1,CONCAT62(uVar12,0xffa8));
    (*pcVar8)(param_1);
    if (*(longlong **)(DAT_02012670 + 0xd8) == param_1) {
      FUN_008027e0(param_1,0);
    }
    if (*(char *)((longlong)param_1 + 0x4d6) == '\x01') {
      (**(code **)(*param_1 + 0x1e8))(param_1);
    }
    else if ((*(byte *)(param_1 + 0xd5) & 8) == 0) {
      local_48 = 0;
      lVar9 = thunk_FUN_04128719();
      lVar10 = FUN_0065b870(param_1);
      if (lVar9 == lVar10) {
        uVar7 = FUN_0065b870(param_1);
        iVar4 = FUN_007f9220(uVar7);
        if (iVar4 == 0) {
          uVar7 = FUN_0065b870(param_1);
          local_48 = FUN_007f9690(uVar7);
        }
      }
      if (local_48 == 0) {
        uVar7 = FUN_0065b870(param_1);
        thunk_FUN_03ab0e43(uVar7,0);
      }
      else {
        uVar7 = FUN_0065b870(param_1);
        local_c8 = local_c8 & 0xffffffff00000000;
        local_c0 = 0;
        local_b8 = 0x97;
        thunk_FUN_041cc6e2(uVar7,0,0,0);
        thunk_FUN_04161dbd(local_48);
      }
    }
    else {
      uVar7 = FUN_0065b870(param_1);
      local_c8 = local_c8 & 0xffffffff00000000;
      local_c0 = 0;
      local_b8 = 0x97;
      thunk_FUN_041cc6e2(uVar7,0,0,0);
    }
    goto code_r0x00804fe8;
  }
  uVar7 = CONCAT62(uVar12,0xffa7);
  pcVar8 = (code *)FUN_00411550(param_1,uVar7);
  (*pcVar8)(param_1);
  if (*(char *)((longlong)param_1 + 0x4d7) == '\x04') {
LAB_00804662:
    if (*(char *)((longlong)param_1 + 0x4d6) == '\x01') {
      iVar4 = FUN_0064d0b0(*(undefined8 *)(DAT_02012668 + 0xa8));
      iVar4 = iVar4 - (int)param_1[0x13];
      local_3c = iVar4 / 2;
      iVar4 = FUN_0064d120(*(undefined8 *)(DAT_02012668 + 0xa8),(longlong)iVar4 % 2 & 0xffffffff);
      local_40 = (iVar4 - *(int *)((longlong)param_1 + 0x9c)) / 2;
      (**(code **)(**(longlong **)(DAT_02012668 + 0xa8) + 0xe0))
                (*(longlong **)(DAT_02012668 + 0xa8),&local_38);
    }
    else {
      uVar7 = FUN_007ffaf0(param_1);
      FUN_00807850(uVar7,&local_38);
      iVar4 = FUN_004230a0(&local_38);
      iVar4 = iVar4 - (int)param_1[0x13];
      local_3c = local_38 + iVar4 / 2;
      iVar4 = FUN_004230c0(&local_38,(longlong)iVar4 % 2 & 0xffffffff);
      local_40 = local_34 + (iVar4 - *(int *)((longlong)param_1 + 0x9c)) / 2;
    }
    if (local_3c < local_38) {
      local_3c = local_38;
    }
    if (local_40 < local_34) {
      local_40 = local_34;
    }
    local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)((longlong)param_1 + 0x9c));
    (**(code **)(*param_1 + 400))(param_1,local_3c,local_40,(int)param_1[0x13]);
    if (*(char *)((longlong)param_1 + 0xa9) != '\0') {
      FUN_008007b0(param_1);
    }
  }
  else {
    if (*(byte *)((longlong)param_1 + 0x4d7) < 8) {
      bVar13 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) <<
                (*(byte *)((longlong)param_1 + 0x4d7) & 0x1f) & 0xd0U) != 0;
    }
    else {
      bVar13 = false;
    }
    if ((bVar13) && (*(char *)((longlong)param_1 + 0x4d6) == '\x01')) goto LAB_00804662;
    bVar1 = *(byte *)((longlong)param_1 + 0x4d7);
    if (bVar1 < 8) {
      bVar13 = ((int)CONCAT71((int7)((ulonglong)uVar7 >> 8),1) << (bVar1 & 0x1f) & 0xc0U) != 0;
    }
    else {
      bVar13 = false;
    }
    if (bVar13) {
      local_50 = *(longlong **)(DAT_02012668 + 0xa8);
      if (*(char *)((longlong)param_1 + 0x4d7) == '\a') {
        cVar3 = FUN_004113d0(param_1[1],&PTR_FUN_007ee548);
        if (cVar3 != '\0') {
          local_50 = (longlong *)param_1[1];
        }
      }
      if (*(char *)((longlong)param_1 + 0x4d2) == '\x02') {
        FUN_007fded0(param_1,(int)param_1[0xa7]);
        FUN_007fdf10(param_1,*(undefined4 *)((longlong)param_1 + 0x53c));
      }
      if ((local_50 == (longlong *)0x0) || (local_50 == param_1)) {
        iVar4 = FUN_00807f90(DAT_02012670);
        iVar4 = iVar4 - (int)param_1[0x13];
        local_3c = iVar4 / 2;
        iVar4 = FUN_00807f70(DAT_02012670,(longlong)iVar4 % 2 & 0xffffffff);
        local_40 = (iVar4 - *(int *)((longlong)param_1 + 0x9c)) / 2;
        FUN_00809a10(DAT_02012670,&local_38);
      }
      else {
        local_3c = FUN_007fd7d0(local_50);
        iVar4 = (int)local_50[0x13] - (int)param_1[0x13];
        local_3c = iVar4 / 2 + local_3c;
        local_40 = FUN_007fd800(local_50,(longlong)iVar4 % 2 & 0xffffffff);
        iVar4 = *(int *)((longlong)local_50 + 0x9c) - *(int *)((longlong)param_1 + 0x9c);
        local_40 = iVar4 / 2 + local_40;
        uVar7 = FUN_007ffaf0(local_50,(longlong)iVar4 % 2 & 0xffffffff);
        FUN_00807850(uVar7,&local_38);
      }
      if (local_3c < local_38) {
        local_3c = local_38;
      }
      if (local_40 < local_34) {
        local_40 = local_34;
      }
      if (*(char *)((longlong)param_1 + 0x4d2) == '\x02') {
        cVar3 = FUN_0065be20(param_1);
        if (cVar3 == '\0') goto LAB_00804a9b;
        FUN_00806af0(param_1,local_3c);
        FUN_00806b40(param_1,local_40);
        local_7c[0] = 0x2c;
        thunk_FUN_03f78330(param_1[0x8d],local_7c);
        FUN_0064d000(param_1,&local_a8);
        local_60 = local_a8;
        uStack_58 = uStack_a0;
        thunk_FUN_03c9467d(param_1[0x8d],local_7c);
      }
      else {
LAB_00804a9b:
        local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)((longlong)param_1 + 0x9c));
        (**(code **)(*param_1 + 400))(param_1,local_3c,local_40,(int)param_1[0x13]);
      }
      if (*(char *)((longlong)param_1 + 0xa9) != '\0') {
        FUN_008007b0(param_1);
      }
    }
    else if (bVar1 == 5) {
      if (*(char *)((longlong)param_1 + 0x4d6) == '\x01') {
        iVar4 = FUN_0064d0b0(*(undefined8 *)(DAT_02012668 + 0xa8));
        iVar4 = iVar4 - (int)param_1[0x13];
        local_3c = iVar4 / 2;
        iVar4 = FUN_0064d120(*(undefined8 *)(DAT_02012668 + 0xa8),(longlong)iVar4 % 2 & 0xffffffff);
        iVar4 = iVar4 - *(int *)((longlong)param_1 + 0x9c);
        local_40 = iVar4 / 2;
      }
      else {
        iVar4 = FUN_00808000(DAT_02012670);
        iVar5 = FUN_00807fc0(DAT_02012670);
        local_3c = (iVar4 / 2 + iVar5) - (int)param_1[0x13] / 2;
        iVar5 = FUN_00807fe0(DAT_02012670,(longlong)(int)param_1[0x13] % 2 & 0xffffffff);
        iVar6 = FUN_00807fa0(DAT_02012670);
        iVar4 = *(int *)((longlong)param_1 + 0x9c);
        local_40 = (iVar5 / 2 + iVar6) - iVar4 / 2;
      }
      iVar4 = FUN_00807fc0(DAT_02012670,(longlong)iVar4 % 2 & 0xffffffff);
      if (local_3c < iVar4) {
        local_3c = FUN_00807fc0(DAT_02012670);
      }
      iVar4 = FUN_00807fa0(DAT_02012670);
      if (local_40 < iVar4) {
        local_40 = FUN_00807fa0(DAT_02012670);
      }
      local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)((longlong)param_1 + 0x9c));
      (**(code **)(*param_1 + 400))(param_1,local_3c,local_40,(int)param_1[0x13]);
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x4d7) = 0;
  if (*(char *)((longlong)param_1 + 0x4d6) == '\x01') {
    if (*(char *)((longlong)param_1 + 0x4d2) == '\x02') {
      uVar7 = FUN_0065b870(param_1);
      thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(DAT_02012668 + 0xa8) + 0x698),0x223,uVar7,0);
      uVar7 = FUN_0065b870(param_1);
      thunk_FUN_03ab0e43(uVar7,3);
    }
    else {
      uVar7 = FUN_0065b870(param_1);
      thunk_FUN_03ab0e43(uVar7,*(undefined4 *)
                                (&DAT_01e14f04 + (ulonglong)*(byte *)((longlong)param_1 + 0x4d2) * 4
                                ));
      uVar7 = FUN_0065b870(param_1);
      local_c8 = (ulonglong)
                 (int)(*(uint *)(param_1 + 0x13) | *(int *)((longlong)param_1 + 0x9c) << 0x10);
      thunk_FUN_03a65bf1(&DAT_004292f0,uVar7,5,0);
      FUN_0064e1d0(param_1);
    }
    thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(DAT_02012668 + 0xa8) + 0x698),0x234,0,0);
  }
  else {
    uVar7 = FUN_0065b870(param_1);
    thunk_FUN_03ab0e43(uVar7,*(undefined4 *)
                              (&DAT_01e14f04 + (ulonglong)*(byte *)((longlong)param_1 + 0x4d2) * 4))
    ;
  }
code_r0x00804fe8:
  *(byte *)(param_1 + 0xd5) = *(byte *)(param_1 + 0xd5) & 0xfb;
  FUN_00414480(&local_98);
  return;
}

