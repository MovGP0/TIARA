/* Ghidra address: 0143ca80 */
/* Ghidra symbol: FUN_0143ca80 */


undefined1 FUN_0143ca80(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  wchar_t wVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined1 local_e9;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined **local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  undefined1 local_34 [4];
  undefined **local_30 [2];
  
  local_e8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_68 = 0;
  local_70 = 0;
  local_58 = 0;
  local_60 = 0;
  local_48 = 0;
  local_50 = 0;
  local_40 = 0;
  local_30[0] = (undefined **)0x0;
  local_e9 = 1;
  plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_004b67b0(plVar3,1);
  iVar6 = *(int *)(*(longlong *)(param_1 + 0x700) + 0x4c0);
  iVar7 = *(int *)(*(longlong *)(param_1 + 0x700) + 0x4e0) + -1;
  if (iVar6 <= iVar7) {
    iVar7 = (iVar7 - iVar6) + 1;
    do {
      FUN_0084e320(*(undefined8 *)(param_1 + 0x700),local_30,0,iVar6);
      FUN_0043ea00(&local_40,local_30[0]);
      if (local_40 == 0) {
        uVar4 = FUN_00b89270();
        FUN_0041ddd0(&local_50,&PTR_PTR_0143a6b0);
        FUN_00b8e650(uVar4,&local_48,L"frmGlobalParamEditor.sEmptyName",local_50);
        FUN_0072d440(local_48,1,4,0);
        local_e9 = 0;
        goto LAB_0143d2d1;
      }
      FUN_0084e320(*(undefined8 *)(param_1 + 0x700),&local_60,1,iVar6);
      FUN_0043ea00(&local_58,local_60);
      if (local_58 == 0) {
        uVar4 = FUN_00b89270();
        FUN_0041ddd0(&local_70,&PTR_PTR_0143a6c0);
        FUN_00b8e650(uVar4,&local_68,L"frmGlobalParamEditor.sEmptyValue",local_70);
        FUN_0072d440(local_68,1,4,0);
        local_e9 = 0;
        goto LAB_0143d2d1;
      }
      if (local_30[0] == (undefined **)L"TEMP") {
        bVar9 = true;
      }
      else if (local_30[0] == (undefined **)0x0) {
        bVar9 = false;
      }
      else {
        iVar8 = FUN_0043e420(local_30[0],L"TEMP");
        bVar9 = iVar8 == 0;
      }
      if (bVar9) {
        bVar9 = true;
      }
      else if (local_30[0] == (undefined **)L"TIME") {
        bVar9 = true;
      }
      else if (local_30[0] == (undefined **)0x0) {
        bVar9 = false;
      }
      else {
        iVar8 = FUN_0043e420(local_30[0],L"TIME");
        bVar9 = iVar8 == 0;
      }
      if (bVar9) {
        bVar9 = true;
      }
      else if (local_30[0] == &PTR_DAT_0143d42c) {
        bVar9 = true;
      }
      else if (local_30[0] == (undefined **)0x0) {
        bVar9 = false;
      }
      else {
        iVar8 = FUN_0043e420(local_30[0],&PTR_DAT_0143d42c);
        bVar9 = iVar8 == 0;
      }
      if (bVar9) {
        bVar9 = true;
      }
      else if (local_30[0] == &PTR_DAT_0143d440) {
        bVar9 = true;
      }
      else if (local_30[0] == (undefined **)0x0) {
        bVar9 = false;
      }
      else {
        iVar8 = FUN_0043e420(local_30[0],&PTR_DAT_0143d440);
        bVar9 = iVar8 == 0;
      }
      if (bVar9) {
        bVar9 = true;
      }
      else if (local_30[0] == (undefined **)&DAT_0143d454) {
        bVar9 = true;
      }
      else if (local_30[0] == (undefined **)0x0) {
        bVar9 = false;
      }
      else {
        iVar8 = FUN_0043e420(local_30[0],&DAT_0143d454);
        bVar9 = iVar8 == 0;
      }
      if (bVar9) {
        bVar9 = true;
      }
      else if (local_30[0] == (undefined **)L"GMIN") {
        bVar9 = true;
      }
      else if (local_30[0] == (undefined **)0x0) {
        bVar9 = false;
      }
      else {
        iVar8 = FUN_0043e420(local_30[0],L"GMIN");
        bVar9 = iVar8 == 0;
      }
      if (bVar9) {
        bVar9 = true;
      }
      else if (local_30[0] == (undefined **)&DAT_0143d47c) {
        bVar9 = true;
      }
      else if (local_30[0] == (undefined **)0x0) {
        bVar9 = false;
      }
      else {
        iVar8 = FUN_0043e420(local_30[0],&DAT_0143d47c);
        bVar9 = iVar8 == 0;
      }
      if (bVar9) {
        bVar9 = true;
      }
      else if (local_30[0] == (undefined **)L"RNDR") {
        bVar9 = true;
      }
      else if (local_30[0] == (undefined **)0x0) {
        bVar9 = false;
      }
      else {
        iVar8 = FUN_0043e420(local_30[0],L"RNDR");
        bVar9 = iVar8 == 0;
      }
      if (bVar9) {
        bVar9 = true;
      }
      else if (local_30[0] == (undefined **)L"RNDC") {
        bVar9 = true;
      }
      else if (local_30[0] == (undefined **)0x0) {
        bVar9 = false;
      }
      else {
        iVar8 = FUN_0043e420(local_30[0],L"RNDC");
        bVar9 = iVar8 == 0;
      }
      if (bVar9) {
        uVar4 = FUN_00b89270();
        FUN_0041ddd0(&local_88,&PTR_PTR_0143a690);
        FUN_00b8e650(uVar4,&local_80,L"frmGlobalParamEditor.sReservedName",local_88);
        local_98 = local_30[0];
        local_90 = 0x11;
        FUN_00442f70(&local_78,local_80,&local_98,0);
        FUN_0072d440(local_78,1,4,0);
        local_e9 = 0;
        goto LAB_0143d2d1;
      }
      cVar1 = (**(code **)(*plVar3 + 0x140))(plVar3,local_30[0],local_34);
      if (cVar1 != '\0') {
        uVar4 = FUN_00b89270();
        FUN_0041ddd0(&local_b0,&PTR_PTR_0143a6a0);
        FUN_00b8e650(uVar4,&local_a8,L"frmGlobalParamEditor.sDuplicateName",local_b0);
        local_98 = local_30[0];
        local_90 = 0x11;
        FUN_00442f70(&local_a0,local_a8,&local_98,0);
        FUN_0072d440(local_a0,1,4,0);
        local_e9 = 0;
        goto LAB_0143d2d1;
      }
      wVar5 = *(wchar_t *)local_30[0];
      if ((ushort)(wVar5 + L'ﾟ') < 0x1a) {
        wVar5 = wVar5 & 0xffdf;
      }
      if ((ushort)(wVar5 + L'￀') < 0x20) {
        bVar9 = (1 << ((byte)(wVar5 + L'￀') & 0x1f) & 0x7fffffeU) != 0;
      }
      else {
        bVar9 = false;
      }
      if (!bVar9) {
        uVar4 = FUN_00b89270();
        FUN_0041ddd0(&local_c8,&PTR_PTR_0143a670);
        FUN_00b8e650(uVar4,&local_c0,L"frmGlobalParamEditor.sNameError",local_c8);
        local_98 = local_30[0];
        local_90 = 0x11;
        FUN_00442f70(&local_b8,local_c0,&local_98,0);
        FUN_0072d440(local_b8,1,4,0);
        local_e9 = 0;
        goto LAB_0143d2d1;
      }
      iVar8 = 0;
      if (local_30[0] != (undefined **)0x0) {
        iVar8 = *(int *)((longlong)local_30[0] + -4);
      }
      iVar2 = 1;
      if (0 < iVar8) {
        do {
          wVar5 = *(wchar_t *)((longlong)local_30[0] + ((longlong)iVar2 + -1) * 2);
          if ((ushort)(wVar5 + L'ﾟ') < 0x1a) {
            wVar5 = wVar5 & 0xffdf;
          }
          if ((ushort)(wVar5 + L'￐') < 0x40) {
            bVar9 = (1L << ((byte)(wVar5 + L'￐') & 0x3f) & 0x87fffffe03ffU) != 0;
          }
          else {
            bVar9 = false;
          }
          if (!bVar9) {
            uVar4 = FUN_00b89270();
            FUN_0041ddd0(&local_e0,&PTR_PTR_0143a680);
            FUN_00b8e650(uVar4,&local_d8,L"frmGlobalParamEditor.sNameError1",local_e0);
            local_98 = local_30[0];
            local_90 = 0x11;
            FUN_00442f70(&local_d0,local_d8,&local_98,0);
            FUN_0072d440(local_d0,1,4,0);
            local_e9 = 0;
            goto LAB_0143d2d1;
          }
          iVar2 = iVar2 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      FUN_0043e130(&local_e8,local_30[0]);
      (**(code **)(*plVar3 + 0x78))(plVar3,local_e8);
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_00410f20(plVar3);
LAB_0143d2d1:
  FUN_00414560(&local_e8,10);
  FUN_00414560(&local_88,10);
  FUN_00414480(local_30);
  return local_e9;
}

