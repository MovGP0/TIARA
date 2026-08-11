/* Ghidra address: 01b58c00 */
/* Ghidra symbol: FUN_01b58c00 */


void FUN_01b58c00(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  *(undefined1 *)(param_1 + 0x7ed) = 0;
  FUN_0082a6c0(*(undefined8 *)(param_1 + 0x7c0),1);
  (**(code **)(**(longlong **)(param_1 + 0xd58) + 0xd0))(*(longlong **)(param_1 + 0xd58));
  FUN_010e4410(param_1,param_1);
  if (PTR_DAT_02004010[0x7c6] != '\0') {
    lVar1 = FUN_010e1b10(param_1);
    if (lVar1 != 0) {
      uVar2 = FUN_010e1b10(param_1);
      plVar3 = (longlong *)FUN_004113f0(uVar2,&PTR_FUN_01133e90);
      (**(code **)(*plVar3 + 0x480))(plVar3);
    }
  }
  *(undefined1 *)(param_1 + 0x7ec) = 1;
  if (*(char *)(param_1 + 0x8d1) == '\0') {
    lVar1 = *(longlong *)(param_1 + 0x998);
    if ((lVar1 == 0) || (*(char *)(param_1 + 0x7ec) == '\0')) {
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
    FUN_01b580b0(param_1,1);
  }
  (**(code **)(**(longlong **)(param_1 + 0x988) + 0x128))(*(longlong **)(param_1 + 0x988),1);
  (**(code **)(**(longlong **)(param_1 + 0x980) + 0x128))(*(longlong **)(param_1 + 0x980),1);
  return;
}

