/* Ghidra address: 01086350 */
/* Ghidra symbol: FUN_01086350 */


void FUN_01086350(longlong param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  wchar_t *pwVar14;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  int local_30 [2];
  
  local_b0 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_90 = 0;
  local_80 = 0;
  local_88 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  if (*(int *)(param_1 + 0xad8) == 2) {
    local_68 = FUN_010b2ee0(*(undefined8 *)(param_1 + 0xac8),0);
    iVar4 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xac8) + 0x20) + 0x28))();
    iVar13 = 0;
    if (-1 < iVar4 + -2) {
      iVar4 = iVar4 + -1;
      do {
        plVar10 = *(longlong **)(*(longlong *)(param_1 + 0xac8) + 0x20);
        (**(code **)(*plVar10 + 0x18))(plVar10,&local_b0,iVar13);
        FUN_0043e1a0(&local_40,local_b0);
        iVar5 = FUN_004170c0(&LAB_01086a24,local_40,1);
        FUN_00416dc0(&local_48,local_40,1,iVar5 + -1);
        uVar6 = FUN_0043fc00(local_48);
        FUN_00416dc0(&local_48,local_40,iVar5 + 1,0xff);
        uVar7 = FUN_0043fc00(local_48);
        FUN_010af920(local_68,uVar7,uVar6);
        FUN_010af930(local_68,uVar7,uVar6);
        iVar13 = iVar13 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  else {
    puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0xac8) + 0x30);
    lVar8 = (**(code **)*puVar2)(puVar2);
    if (lVar8 == 0) {
      uVar9 = FUN_00b89270();
      FUN_0041ddd0(&local_88,PTR_PTR_020016c8);
      FUN_00b8e650(uVar9,&local_80,L"HDLStrings.Msg_CompileBeforeDebug",local_88);
      uVar9 = FUN_0044d490(&PTR_FUN_015ef458,1,local_80);
      FUN_004134c0(uVar9);
    }
    *(undefined8 *)(param_1 + 0xb30) = 0;
    pwVar14 = L".elf";
    FUN_00416cd0(&local_50,4,*(undefined8 *)(param_1 + 0xb40),&DAT_01086990,
                 *(undefined8 *)(*(longlong *)(param_1 + 0xac8) + 0x10),L".elf");
    cVar3 = FUN_00f81d60(*(undefined4 *)(param_1 + 0xad8));
    if (cVar3 != '\0') {
      pwVar14 = L".cof";
      FUN_00416cd0(&local_50,4,*(undefined8 *)(param_1 + 0xb40),&DAT_01086990,
                   *(undefined8 *)(*(longlong *)(param_1 + 0xac8) + 0x10),L".cof");
    }
    FUN_004b9df0(*(undefined8 *)(*(longlong *)(param_1 + 0xac8) + 0x30),local_50);
    FUN_010b2670(*(undefined8 *)(param_1 + 0xac8),&local_90,local_30,&local_68);
    FUN_00416cd0(&local_58,3,*(undefined8 *)(param_1 + 0xb40),&DAT_01086990,local_90,pwVar14);
    uVar6 = (undefined4)((ulonglong)pwVar14 >> 0x20);
    if (local_30[0] < 1) {
      uVar9 = 0;
    }
    else {
      uVar9 = FUN_00442620(param_1 + 0x1c0c,local_58);
      plVar10 = (longlong *)FUN_010af3b0(local_68);
      (**(code **)(*plVar10 + 0x100))(plVar10,local_58);
    }
    uVar11 = FUN_00442620(param_1 + 0xc08,local_50);
    uVar12 = FUN_00442620(param_1 + 0x140a,*(undefined8 *)(param_1 + 0xb40));
    FUN_0107c0e0(param_1,uVar11,uVar9,uVar12,*(undefined8 *)(param_1 + 0xb20),
                 CONCAT44(uVar6,*(undefined4 *)(param_1 + 0xad8)),param_1 + 0xb28,param_1 + 0xb30);
    if (*(longlong *)(param_1 + 0xb28) == 0) {
      uVar9 = FUN_00b89270();
      FUN_0041ddd0(&local_a0,PTR_PTR_02002908);
      FUN_00b8e650(uVar9,&local_98,L"HDLStrings.Msg_ErrorParsingElfFile",local_a0);
      uVar9 = FUN_0044d490(&PTR_FUN_015ef458,1,local_98);
      FUN_004134c0(uVar9);
    }
    _Debug_CheckAllCU(*(undefined8 *)(param_1 + 0xb28),local_70,local_78,local_34,local_38);
    _Debug_Unwind_GetInfo(*(undefined8 *)(param_1 + 0xb28),param_1 + 0x4ca8);
    *(bool *)(param_1 + 0x4c37) = (*(uint *)(param_1 + 0x4ca8) & 1) != 0;
    FUN_01086cb0();
    uVar1 = *(undefined1 *)(param_1 + 0xbd3);
    *(undefined1 *)(param_1 + 0xbd3) = 0;
    plVar10 = (longlong *)FUN_010862a0(param_1,*(undefined8 *)(param_1 + 0xb30));
    *(longlong **)(param_1 + 0xbc0) = plVar10;
    iVar4 = (**(code **)(*plVar10 + 0x28))();
    iVar13 = 0;
    if (-1 < iVar4 + -1) {
      do {
        *(undefined1 *)(param_1 + 0xb50) = 1;
        (**(code **)(**(longlong **)(param_1 + 0xbc0) + 0x18))
                  (*(longlong **)(param_1 + 0xbc0),&local_a8,iVar13);
        FUN_0107a440(param_1,local_a8,0,1);
        *(undefined1 *)(param_1 + 0xb50) = 0;
        iVar13 = iVar13 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_00410f20(*(undefined8 *)(param_1 + 0xbc0));
    *(undefined1 *)(param_1 + 0xbd3) = uVar1;
  }
  FUN_00414560(&local_b0,7);
  FUN_00414560(&local_60,5);
  return;
}

