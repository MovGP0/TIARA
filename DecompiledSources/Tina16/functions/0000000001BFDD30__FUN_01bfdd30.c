/* Ghidra address: 01bfdd30 */
/* Ghidra symbol: FUN_01bfdd30 */


void FUN_01bfdd30(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x88) != -1) {
    *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
    *(undefined1 *)(param_1 + 0x78) = 1;
  }
  uVar2 = FUN_01bfd960(param_1);
  lVar3 = FUN_01bf9620(uVar2);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(*(longlong *)(lVar3 + 0xe0) + 0x48);
  lVar3 = FUN_01bfd960(param_1);
  lVar3 = *(longlong *)(lVar3 + 0x38);
  if (lVar3 != 0) {
    lVar4 = FUN_01bfd960(param_1);
    lVar4 = FUN_01bfab50(*(undefined8 *)(lVar4 + 0x38));
    while ((lVar4 != 0 && (cVar1 = FUN_004113d0(lVar4,&PTR_FUN_01beec68), cVar1 == '\0'))) {
      lVar4 = FUN_01bfab50(*(undefined8 *)(lVar4 + 0x38));
    }
    if (lVar4 != 0) {
      *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(lVar4 + 0x48);
    }
    for (; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x38)) {
      cVar1 = FUN_004113d0(lVar3,&PTR_FUN_01bf1690);
      if (cVar1 != '\0') {
        *(undefined1 *)(lVar3 + 0x78) = 1;
        if (*(int *)(lVar3 + 0x88) != -1) {
          *(int *)(lVar3 + 0x88) = *(int *)(lVar3 + 0x88) + 1;
        }
        FUN_01bfe240(lVar3,*(undefined4 *)(param_1 + 0xa4));
      }
      lVar3 = FUN_01bfab50(lVar3);
    }
  }
  return;
}

