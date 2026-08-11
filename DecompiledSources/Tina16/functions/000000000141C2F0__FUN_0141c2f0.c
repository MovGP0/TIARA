/* Ghidra address: 0141c2f0 */
/* Ghidra symbol: FUN_0141c2f0 */


undefined1 FUN_0141c2f0(longlong param_1)

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
  undefined1 local_b9;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined **local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_34 [4];
  undefined **local_30 [2];
  
  local_b8 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_40 = 0;
  local_30[0] = (undefined **)0x0;
  local_b9 = 1;
  plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_004b67b0(plVar3,1);
  iVar7 = *(int *)(*(longlong *)(param_1 + 0x6f0) + 0x4e0);
  iVar6 = 0;
  if (-1 < iVar7 + -1) {
    do {
      FUN_0084e320(*(undefined8 *)(param_1 + 0x6f0),&local_40,0,iVar6);
      FUN_0043ea00(local_30,local_40);
      if (local_30[0] != (undefined **)0x0) {
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
        else if (local_30[0] == &PTR_DAT_0141cabc) {
          bVar9 = true;
        }
        else if (local_30[0] == (undefined **)0x0) {
          bVar9 = false;
        }
        else {
          iVar8 = FUN_0043e420(local_30[0],&PTR_DAT_0141cabc);
          bVar9 = iVar8 == 0;
        }
        if (bVar9) {
          bVar9 = true;
        }
        else if (local_30[0] == &PTR_DAT_0141cad0) {
          bVar9 = true;
        }
        else if (local_30[0] == (undefined **)0x0) {
          bVar9 = false;
        }
        else {
          iVar8 = FUN_0043e420(local_30[0],&PTR_DAT_0141cad0);
          bVar9 = iVar8 == 0;
        }
        if (bVar9) {
          bVar9 = true;
        }
        else if (local_30[0] == (undefined **)&DAT_0141cae4) {
          bVar9 = true;
        }
        else if (local_30[0] == (undefined **)0x0) {
          bVar9 = false;
        }
        else {
          iVar8 = FUN_0043e420(local_30[0],&DAT_0141cae4);
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
        else if (local_30[0] == (undefined **)&DAT_0141cb0c) {
          bVar9 = true;
        }
        else if (local_30[0] == (undefined **)0x0) {
          bVar9 = false;
        }
        else {
          iVar8 = FUN_0043e420(local_30[0],&DAT_0141cb0c);
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
          FUN_0041ddd0(&local_58,&PTR_PTR_0141bdf8);
          FUN_00b8e650(uVar4,&local_50,L"frmSchMacroParamEditor.sReservedName",local_58);
          local_68 = local_30[0];
          local_60 = 0x11;
          FUN_00442f70(&local_48,local_50,&local_68,0);
          FUN_0072d440(local_48,1,4,0);
          local_b9 = 0;
          goto LAB_0141ca01;
        }
        cVar1 = (**(code **)(*plVar3 + 0x140))(plVar3,local_30[0],local_34);
        if (cVar1 != '\0') {
          uVar4 = FUN_00b89270();
          FUN_0041ddd0(&local_80,&LAB_0141be08);
          FUN_00b8e650(uVar4,&local_78,L"frmSchMacroParamEditor.sDuplicateName",local_80);
          local_68 = local_30[0];
          local_60 = 0x11;
          FUN_00442f70(&local_70,local_78,&local_68,0);
          FUN_0072d440(local_70,1,4,0);
          local_b9 = 0;
          goto LAB_0141ca01;
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
          FUN_0041ddd0(&local_98,&PTR_PTR_0141bdd8);
          FUN_00b8e650(uVar4,&local_90,L"frmSchMacroParamEditor.sNameError",local_98);
          local_68 = local_30[0];
          local_60 = 0x11;
          FUN_00442f70(&local_88,local_90,&local_68,0);
          FUN_0072d440(local_88,1,4,0);
          local_b9 = 0;
          goto LAB_0141ca01;
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
              FUN_0041ddd0(&local_b0,&PTR_PTR_0141bde8);
              FUN_00b8e650(uVar4,&local_a8,L"frmSchMacroParamEditor.sNameError1",local_b0);
              local_68 = local_30[0];
              local_60 = 0x11;
              FUN_00442f70(&local_a0,local_a8,&local_68,0);
              FUN_0072d440(local_a0,1,4,0);
              local_b9 = 0;
              goto LAB_0141ca01;
            }
            iVar2 = iVar2 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        FUN_0043e130(&local_b8,local_30[0]);
        (**(code **)(*plVar3 + 0x78))(plVar3,local_b8);
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_00410f20(plVar3);
LAB_0141ca01:
  FUN_00414560(&local_b8,10);
  FUN_00414560(&local_58,4);
  FUN_00414480(local_30);
  return local_b9;
}

