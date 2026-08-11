/* Ghidra address: 01bfdb30 */
/* Ghidra symbol: FUN_01bfdb30 */


undefined8 FUN_01bfdb30(longlong param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  plVar6 = (longlong *)0x0;
  if ((*(char *)(param_1 + 0xa9) == '\0') || (lVar4 = FUN_01bfab50(param_1), lVar4 == 0)) {
    lVar4 = FUN_01bfd980(param_1);
    if (lVar4 != 0) {
      lVar4 = FUN_01bfd980(param_1);
      cVar2 = FUN_004113d0(*(undefined8 *)(lVar4 + 0xc0),&PTR_FUN_0061b768);
      if (cVar2 != '\0') {
        lVar4 = FUN_01bfd980(param_1);
        plVar6 = *(longlong **)(*(longlong *)(lVar4 + 0xc0) + 0xd0);
      }
    }
  }
  else {
    lVar4 = FUN_01bfd960(param_1);
    if (*(char *)(lVar4 + 0x49) == '\0') {
      uVar5 = FUN_01bfab50(param_1);
      lVar4 = FUN_01bf9620(uVar5);
      plVar6 = *(longlong **)(lVar4 + 0x148);
      if (plVar6 == (longlong *)0x0) {
        uVar5 = FUN_01bfab50(param_1);
        lVar4 = FUN_01bf9620(uVar5);
        plVar6 = *(longlong **)(lVar4 + 0xd0);
      }
    }
    else {
      uVar5 = FUN_01bfab50(param_1);
      lVar4 = FUN_01bf9620(uVar5);
      plVar6 = *(longlong **)(lVar4 + 0xd0);
    }
  }
  if (((plVar6 != (longlong *)0x0) && (iVar1 = *(int *)(param_1 + 0xa0), -1 < iVar1)) &&
     (iVar3 = (**(code **)(*plVar6 + 0x90))(plVar6), iVar1 < iVar3)) {
    return 1;
  }
  return 0;
}

