/* Ghidra address: 011650d0 */
/* Ghidra symbol: FUN_011650d0 */


void FUN_011650d0(ushort *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,undefined8 param_6)

{
  ushort uVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  short sVar8;
  undefined8 uVar9;
  ushort *local_res8;
  undefined8 local_res10;
  ulonglong in_stack_fffffffffffffe78;
  short local_15a;
  undefined1 local_158 [256];
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  
  local_58 = 0;
  local_50[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414610(param_1);
  FUN_00414610(local_res10);
  uVar1 = *local_res8;
  iVar4 = FUN_00416db0(*(undefined8 *)PTR_DAT_02005bf0,L"BANDPASSFILTER");
  if (iVar4 == 0) {
    local_15a = 0x50;
  }
  iVar4 = FUN_00416db0(*(undefined8 *)PTR_DAT_02005bf0,L"BANDSTOPFILTER");
  if (iVar4 == 0) {
    local_15a = 0x53;
  }
  iVar4 = FUN_00416db0(*(undefined8 *)PTR_DAT_02005bf0,L"HIGHPASSFILTER1");
  if (iVar4 == 0) {
LAB_011651be:
    local_15a = 0x48;
  }
  else {
    iVar4 = FUN_00416db0(*(undefined8 *)PTR_DAT_02005bf0,L"HIGHPASSFILTER");
    if (iVar4 == 0) goto LAB_011651be;
  }
  iVar4 = FUN_00416db0(*(undefined8 *)PTR_DAT_02005bf0,L"LOWPASSFILTER1");
  if (iVar4 == 0) {
LAB_011651fa:
    local_15a = 0x4c;
  }
  else {
    iVar4 = FUN_00416db0(*(undefined8 *)PTR_DAT_02005bf0,L"LOWPASSFILTER");
    if (iVar4 == 0) goto LAB_011651fa;
  }
  if (uVar1 < 0x4d) {
    if (uVar1 == 0x4c) {
      uVar5 = 0xb;
      goto LAB_011652b8;
    }
    if (uVar1 == 0x43) {
      uVar5 = 10;
      goto LAB_011652b8;
    }
    if (uVar1 == 0x47) {
      uVar5 = 2;
      goto LAB_011652b8;
    }
  }
  else {
    if (uVar1 == 0x4f) {
      cVar2 = (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x8f0) + 0x260))
                        (*(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x8f0));
      if (cVar2 == '\0') {
        cVar2 = (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x8e0) + 0x260))
                          (*(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x8e0));
        if (cVar2 == '\0') {
          uVar5 = 0x55;
        }
        else {
          uVar5 = 0x56;
        }
      }
      else {
        uVar5 = 0x39;
      }
      goto LAB_011652b8;
    }
    if (uVar1 == 0x52) {
      uVar5 = 9;
      goto LAB_011652b8;
    }
  }
  uVar5 = FUN_0043fc00(local_res8);
LAB_011652b8:
  plVar6 = (longlong *)FUN_01cf1750(0,&PTR_FUN_01cf10a8,uVar5);
  *(undefined4 *)((longlong)plVar6 + 0xc) = param_3;
  *(undefined4 *)(plVar6 + 2) = param_4;
  if (param_5 == 0) {
    *(undefined1 *)((longlong)plVar6 + 0xd1) = 0;
  }
  else if (param_5 == 1) {
    *(undefined1 *)((longlong)plVar6 + 0xd1) = 3;
  }
  else if (param_5 == 2) {
    *(undefined1 *)((longlong)plVar6 + 0xd1) = 2;
  }
  else if (param_5 == 3) {
    *(undefined1 *)((longlong)plVar6 + 0xd1) = 1;
  }
  else {
    *(undefined1 *)((longlong)plVar6 + 0xd1) = 0;
  }
  *(undefined1 *)((longlong)plVar6 + 0xd3) = 0;
  iVar4 = FUN_00416db0(local_res8,&DAT_01165c78);
  if (iVar4 == 0) {
    *(undefined1 *)((longlong)plVar6 + 0xd1) = 2;
    *(undefined1 *)((longlong)plVar6 + 0xd3) = 1;
  }
  *(undefined1 *)(plVar6 + 0x15) = 0;
  sVar8 = (short)uVar5;
  if (sVar8 == 0x55) {
    *(int *)(plVar6 + 0x14) = (int)plVar6[0x14] + -0x10;
    *(int *)((longlong)plVar6 + 0xa4) = *(int *)((longlong)plVar6 + 0xa4) + -4;
  }
  if (sVar8 == 9) {
    FUN_00416dc0(&local_38,local_res10,1,2);
    iVar4 = FUN_00416db0(local_38,&DAT_01165c88);
    if (iVar4 == 0) {
      *(int *)((longlong)plVar6 + 0xa4) = *(int *)((longlong)plVar6 + 0xa4) + 0xc;
      *(undefined1 *)(plVar6 + 0x15) = 3;
    }
    iVar4 = FUN_00416db0(local_38,&PTR_DAT_01165c9c);
    if (iVar4 == 0) {
      *(int *)((longlong)plVar6 + 0xa4) = *(int *)((longlong)plVar6 + 0xa4) + 0x18;
    }
    iVar4 = FUN_00416db0(local_38,&PTR_DAT_01165cb0);
    if (iVar4 == 0) {
      *(int *)((longlong)plVar6 + 0xa4) = *(int *)((longlong)plVar6 + 0xa4) + 0x18;
      *(int *)(plVar6 + 0x14) = (int)plVar6[0x14] + -0x10;
    }
  }
  if (sVar8 == 9) {
    if (*(char *)((longlong)plVar6 + 0xd1) == '\0') {
      *(int *)(plVar6 + 0x14) = (int)plVar6[0x14] + -10;
    }
    FUN_00416dc0(&local_38,local_res10,1,2);
    iVar4 = FUN_00416db0(local_38,&DAT_01165cc4);
    if ((iVar4 == 0) && (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x4c)) {
      *(int *)((longlong)plVar6 + 0xa4) = *(int *)((longlong)plVar6 + 0xa4) + 0x18;
    }
    iVar4 = FUN_00416db0(local_38,&DAT_01165cc4);
    if ((iVar4 == 0) &&
       (((*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x50 ||
         (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x53)) || (local_15a == 0x53)))) {
      *(int *)((longlong)plVar6 + 0xa4) = *(int *)((longlong)plVar6 + 0xa4) + 0x18;
    }
    iVar4 = FUN_00416db0(local_38,&DAT_01165cd8);
    if ((iVar4 == 0) && (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x53)) {
      *(int *)(plVar6 + 0x14) = (int)plVar6[0x14] + -8;
    }
  }
  cVar2 = (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x9c0) + 0x260))
                    (*(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x9c0));
  if (cVar2 == '\x01') {
    if ((sVar8 == 10) || (sVar8 == 0xb)) {
      if (*(char *)((longlong)plVar6 + 0xd1) == '\0') {
        *(int *)(plVar6 + 0x14) = (int)plVar6[0x14] + -10;
      }
      FUN_00416dc0(&local_38,local_res10,1,2);
      iVar4 = FUN_00416db0(local_38,&DAT_01165cec);
      if ((iVar4 == 0) && (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x48)) {
        *(int *)((longlong)plVar6 + 0xa4) = *(int *)((longlong)plVar6 + 0xa4) + 0x20;
      }
      iVar4 = FUN_00416db0(local_38,&DAT_01165cec);
      if ((iVar4 == 0) && (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x53)) {
        *(int *)((longlong)plVar6 + 0xa4) = *(int *)((longlong)plVar6 + 0xa4) + 0x1c;
      }
      iVar4 = FUN_00416db0(local_38,&DAT_01165d00);
      if ((iVar4 == 0) && (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x53)) {
        *(int *)(plVar6 + 0x14) = (int)plVar6[0x14] + -8;
      }
    }
  }
  else if (*(short *)(PTR_DAT_020021e8 + 0x1fa6) == 0x45) {
    if (sVar8 == 10) {
      *(int *)((longlong)plVar6 + 0xa4) = *(int *)((longlong)plVar6 + 0xa4) + 0x20;
      *(int *)(plVar6 + 0x14) = (int)plVar6[0x14] + -0x10;
    }
    if ((sVar8 == 0xb) && (*(char *)((longlong)plVar6 + 0xd1) == '\0')) {
      *(int *)(plVar6 + 0x14) = (int)plVar6[0x14] + -8;
    }
    if ((sVar8 == 0xb) && (*(char *)((longlong)plVar6 + 0xd1) == '\x03')) {
      *(int *)(plVar6 + 0x14) = (int)plVar6[0x14] + -0xc;
    }
  }
  else if ((sVar8 == 10) || (sVar8 == 0xb)) {
    if (*(char *)((longlong)plVar6 + 0xd1) == '\0') {
      *(int *)(plVar6 + 0x14) = (int)plVar6[0x14] + -10;
    }
    FUN_00416dc0(&local_38,local_res10,1,1);
    iVar4 = FUN_00416db0(local_38,&DAT_01165d14);
    if ((iVar4 == 0) &&
       (((*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x50 ||
         (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x53)) &&
        (*(char *)((longlong)plVar6 + 0xd1) == '\0')))) {
      *(int *)((longlong)plVar6 + 0xa4) = *(int *)((longlong)plVar6 + 0xa4) + 0x20;
    }
    iVar4 = FUN_00416db0(local_38,&DAT_01165d14);
    if (((iVar4 == 0) && (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x53)) &&
       (*(char *)((longlong)plVar6 + 0xd1) == '\x03')) {
      *(int *)((longlong)plVar6 + 0xa4) = *(int *)((longlong)plVar6 + 0xa4) + 0x20;
    }
    if ((*(char *)((longlong)plVar6 + 0xd1) == '\x03') &&
       ((*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x50 ||
        (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x53)))) {
      *(int *)(plVar6 + 0x14) = (int)plVar6[0x14] + -8;
    }
  }
  if (sVar8 == 3) {
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x918),local_50);
    iVar4 = FUN_00416db0(local_res10,local_50[0]);
    if (iVar4 == 0) {
      *(int *)((longlong)plVar6 + 0xa4) = *(int *)((longlong)plVar6 + 0xa4) + 0x14;
      *(int *)(plVar6 + 0x14) = (int)plVar6[0x14] + -0x10;
      *(undefined1 *)(plVar6 + 0x15) = 3;
    }
    else {
      FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x928),&local_58);
      iVar4 = FUN_00416db0(local_res10,local_58);
      if (iVar4 == 0) {
        *(int *)((longlong)plVar6 + 0xa4) = *(int *)((longlong)plVar6 + 0xa4) + -10;
        *(int *)(plVar6 + 0x14) = (int)plVar6[0x14] + -0x10;
        *(undefined1 *)(plVar6 + 0x15) = 3;
      }
    }
  }
  FUN_017bf050(plVar6,0,local_res10);
  if ((sVar8 != 2) && (sVar8 != 0x3a)) {
    uVar3 = (**(code **)(*plVar6 + 0x2c8))(plVar6);
    lVar7 = FUN_00409570(uVar3);
    plVar6[0x18] = lVar7;
    (**(code **)(*plVar6 + 0x2d0))(plVar6,0,&local_30);
    FUN_01d38290(plVar6,1);
    lVar7 = local_30;
    if (sVar8 == 0x55) {
      cVar2 = (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x8f0) + 0x260))
                        (*(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x8f0));
      if (cVar2 != '\0') {
        FUN_00416910(local_158,*(undefined8 *)PTR_DAT_02003158,0xff);
        FUN_00415020(lVar7,local_158,0x14);
      }
      cVar2 = (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x8e8) + 0x260))
                        (*(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x8e8));
      if (cVar2 != '\0') {
        FUN_00416910(local_158,*(undefined8 *)PTR_DAT_02002e48,0xff);
        FUN_00415020(lVar7,local_158,0x14);
      }
      lVar7 = *(longlong *)(lVar7 + 0x26);
      FUN_004095f0(*(undefined8 *)(lVar7 + 1));
      FUN_004095f0(*(undefined8 *)(lVar7 + 9));
      FUN_004095f0(*(undefined8 *)(lVar7 + 0x19));
      in_stack_fffffffffffffe78 = lVar7 + 0x19;
      FUN_0172c410(plVar6,0,lVar7 + 1,lVar7 + 9,in_stack_fffffffffffffe78,lVar7 + 0x21,lVar7 + 0x23,
                   lVar7);
    }
    if (sVar8 == 0x39) {
      cVar2 = (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x8f0) + 0x260))
                        (*(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x8f0));
      if (cVar2 != '\0') {
        FUN_00414b50(&local_40,*(undefined8 *)PTR_DAT_02003158);
      }
      cVar2 = (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x8e8) + 0x260))
                        (*(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x8e8));
      if (cVar2 != '\0') {
        FUN_00414b50(&local_40,*(undefined8 *)PTR_DAT_02002e48);
      }
      FUN_016ff310(local_40,L"<Auto>",*(undefined8 *)PTR_DAT_020041c8,plVar6,
                   in_stack_fffffffffffffe78 & 0xffffffffffffff00,0);
    }
    if ((((sVar8 == 9) || (sVar8 == 10)) || (sVar8 == 0xb)) || ((sVar8 == 0xe || (sVar8 == 0x10))))
    {
      uVar9 = FUN_01164f90(param_6);
      FUN_01d3a010(local_30,6,uVar9);
    }
    FUN_01d04aa0(plVar6,0);
  }
  FUN_01d07850(plVar6);
  (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0x27a8) + 0x20))
            (*(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),plVar6);
  FUN_01991990(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),plVar6);
  if (sVar8 == 0x55) {
    *(int *)(plVar6 + 0x14) = (int)plVar6[0x14];
    *(undefined4 *)((longlong)plVar6 + 0xa4) = *(undefined4 *)((longlong)plVar6 + 0xa4);
  }
  if (sVar8 == 0x39) {
    *(int *)(plVar6 + 0x14) = (int)plVar6[0x14] + -0x30;
    *(undefined4 *)((longlong)plVar6 + 0xa4) = *(undefined4 *)((longlong)plVar6 + 0xa4);
  }
  FUN_0199e310(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),1,1,0);
  FUN_00414560(&local_58,2);
  FUN_00414560(&local_40,2);
  FUN_00414560(&local_res8,2);
  return;
}

