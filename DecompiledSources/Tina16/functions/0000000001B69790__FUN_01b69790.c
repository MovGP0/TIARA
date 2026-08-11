/* Ghidra address: 01b69790 */
/* Ghidra symbol: FUN_01b69790 */


void FUN_01b69790(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined1 local_6c [4];
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined8 local_48;
  undefined1 local_40 [8];
  undefined1 local_38 [15];
  undefined1 local_29 [9];
  
  cVar2 = FUN_010e1a60(param_1);
  if (cVar2 != '\0') {
    uVar5 = FUN_010e1b10(param_1);
    plVar6 = (longlong *)FUN_004113f0(uVar5,&PTR_FUN_01133e90);
    plVar1 = *(longlong **)(param_1 + 0xcb0);
    uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
    lVar7 = (**(code **)(*(longlong *)plVar1[0x9e] + 0x30))((longlong *)plVar1[0x9e],uVar3);
    FUN_0113d630(plVar6,*(undefined1 *)(lVar7 + 0x2e));
    if (*(char *)((longlong)plVar6 + 0xa09) == '\0') {
      FUN_01138af0(plVar6,local_29,local_38,local_40,&local_48,local_50);
      local_48 = 0;
      FUN_01138b30(plVar6,0,local_38,local_40,&local_48,local_50);
      FUN_01138d40(plVar6,local_58,local_60,local_68,local_6c,&local_6d,&local_6e,&local_6f);
      local_6e = 0;
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0xd10) + 0x260))
                        (*(longlong **)(param_1 + 0xd10));
      local_6e = cVar2 == '\x01';
      FUN_01138e40(plVar6,local_58,local_60,local_68,local_6c,local_6d,local_6e,local_6f);
    }
    if (*(char *)((longlong)plVar6 + 0xa9) == '\0') {
      FUN_008059a0(plVar6);
      iVar4 = FUN_007fd7d0(param_1);
      FUN_00806af0(plVar6,iVar4 + -0x50);
      (**(code **)(*plVar6 + 600))(plVar6);
    }
    FUN_0113d290(plVar6,*(undefined1 *)(param_1 + 0x7fa));
    plVar1 = *(longlong **)(param_1 + 0xcb0);
    uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
    lVar7 = (**(code **)(*(longlong *)plVar1[0x9e] + 0x30))((longlong *)plVar1[0x9e],uVar3);
    FUN_0113d630(plVar6,*(undefined1 *)(lVar7 + 0x2e));
  }
  return;
}

