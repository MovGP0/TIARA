/* Ghidra address: 01b674b0 */
/* Ghidra symbol: FUN_01b674b0 */


void FUN_01b674b0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar3 = FUN_010e1b10(param_1);
  plVar4 = (longlong *)FUN_004113f0(uVar3,&PTR_FUN_01133e90);
  uVar3 = FUN_0065b870(param_1);
  FUN_011390a0(plVar4,uVar3);
  if (*(char *)(param_1 + 0x7ed) != '\0') {
    cVar2 = FUN_010e1a60(plVar4);
    if (cVar2 != '\0') {
      (**(code **)(*plVar4 + 0x480))(plVar4);
    }
  }
  *(undefined1 *)(param_1 + 0x7ed) = 0;
  FUN_0082a6c0(*(undefined8 *)(param_1 + 0x7c0),1);
  (**(code **)(**(longlong **)(param_1 + 0xda0) + 0xd0))(*(longlong **)(param_1 + 0xda0));
  FUN_01b69a50(param_1);
  *(undefined1 *)(param_1 + 0x7ec) = 1;
  if ((*(char *)(param_1 + 0x8d1) == '\0') &&
     ((lVar1 = *(longlong *)(param_1 + 0x998), lVar1 == 0 || (*(char *)(param_1 + 0x7ec) == '\0'))))
  {
    if (lVar1 != 0) {
      FUN_01cc6030(lVar1);
    }
    *(undefined8 *)(param_1 + 0x998) = 0;
    lVar1 = *(longlong *)(param_1 + 0x880);
    if (lVar1 != 0) {
      *(longlong *)(param_1 + 0x998) = lVar1;
      FUN_01cc6020(lVar1);
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x988) + 0x128))(*(longlong **)(param_1 + 0x988),1);
  (**(code **)(**(longlong **)(param_1 + 0x980) + 0x128))(*(longlong **)(param_1 + 0x980),1);
  return;
}

