/* Ghidra address: 01125570 */
/* Ghidra symbol: FUN_01125570 */


void FUN_01125570(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0xb4e) != '\0') {
    iVar2 = FUN_01125510(param_1);
    if (iVar2 != *(int *)(param_1 + 0x8f8)) {
      cVar1 = FUN_01126820(param_1,iVar2);
      if (cVar1 != '\0') {
        *(int *)(param_1 + 0x8f8) = iVar2;
      }
    }
    if (*(int *)(param_1 + 0xb48) == 8) {
      FUN_01126b30(param_1);
    }
    else {
      FUN_01127350(param_1);
    }
    FUN_01125620(param_1);
    uVar3 = FUN_005ffa40(*(undefined8 *)(*(longlong *)(param_1 + 0x780) + 0x310));
    thunk_FUN_04015890(uVar3,0);
  }
  return;
}

