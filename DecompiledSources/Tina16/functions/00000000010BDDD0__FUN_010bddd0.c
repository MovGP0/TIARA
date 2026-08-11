/* Ghidra address: 010bddd0 */
/* Ghidra symbol: FUN_010bddd0 */


undefined8 FUN_010bddd0(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0;
  local_38 = 0;
  iVar7 = 0;
  bVar1 = false;
  FUN_00414ad0(param_1,&DAT_010be068);
  FUN_00414b50(&local_38,*(undefined8 *)(param_2 + 0xc68));
LAB_010be003:
  if ((bVar1) || (*(int *)(param_2 + 0x10) <= iVar7)) {
    FUN_00414560(&local_38,2);
    return param_1;
  }
  plVar5 = (longlong *)FUN_00b94e60(param_2,iVar7);
  cVar2 = FUN_0198a580(plVar5);
  if (cVar2 == '\x04') goto code_r0x010bde43;
  goto LAB_010be000;
code_r0x010bde43:
  lVar6 = FUN_017ff620(plVar5);
  if ((lVar6 != 0) || (*(char *)((longlong)plVar5 + 0x531) != '\0')) goto LAB_010be003;
  sVar3 = (**(code **)(*plVar5 + 0xf8))(plVar5);
  if (sVar3 == 9) {
LAB_010bdee2:
    (**(code **)(*plVar5 + 0x288))(plVar5,&local_30);
    iVar4 = FUN_00416db0(local_38,local_30);
    if (iVar4 == 0) {
      bVar1 = true;
      FUN_00414ad0(param_1,L"[ohms]");
    }
  }
  else {
    sVar3 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if (sVar3 == 0x6b) goto LAB_010bdee2;
    sVar3 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if (sVar3 == 200) goto LAB_010bdee2;
    sVar3 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if (sVar3 == 0xd2) goto LAB_010bdee2;
    sVar3 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if (sVar3 == 0xdc) goto LAB_010bdee2;
    sVar3 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if (sVar3 == 0x24) goto LAB_010bdee2;
    sVar3 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if (sVar3 == 0x6c) goto LAB_010bdee2;
  }
  sVar3 = (**(code **)(*plVar5 + 0xf8))(plVar5);
  if (sVar3 == 0xf) {
LAB_010bdf3b:
    (**(code **)(*plVar5 + 0x288))(plVar5,&local_30);
    iVar4 = FUN_00416db0(local_38,local_30);
    if (iVar4 == 0) {
      bVar1 = true;
      FUN_00414ad0(param_1,&DAT_010be098);
    }
  }
  else {
    sVar3 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if (sVar3 == 0xd) goto LAB_010bdf3b;
  }
  sVar3 = (**(code **)(*plVar5 + 0xf8))(plVar5);
  if (sVar3 != 0x10) {
    sVar3 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if (sVar3 != 0xd9) {
      sVar3 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if (sVar3 != 0xda) {
        sVar3 = (**(code **)(*plVar5 + 0xf8))(plVar5);
        if (sVar3 != 0xe) {
          sVar3 = (**(code **)(*plVar5 + 0xf8))(plVar5);
          if (sVar3 != 0x43) goto LAB_010be000;
        }
      }
    }
  }
  (**(code **)(*plVar5 + 0x288))(plVar5,&local_30);
  iVar4 = FUN_00416db0(local_38,local_30);
  if (iVar4 == 0) {
    bVar1 = true;
    FUN_00414ad0(param_1,&LAB_010be0ac);
  }
LAB_010be000:
  iVar7 = iVar7 + 1;
  goto LAB_010be003;
}

