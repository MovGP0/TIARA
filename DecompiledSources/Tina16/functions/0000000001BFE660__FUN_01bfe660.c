/* Ghidra address: 01bfe660 */
/* Ghidra symbol: FUN_01bfe660 */


void FUN_01bfe660(longlong param_1,undefined1 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  FUN_01bfb0b0(param_1,param_2);
  uVar2 = FUN_01bfaa40(param_1);
  cVar1 = FUN_004113d0(uVar2,&PTR_FUN_01bf1690);
  if (cVar1 != '\0') {
    lVar3 = FUN_01bfd960(param_1);
    if (*(byte *)(param_1 + 0x59) < *(byte *)(*(longlong *)(lVar3 + 0x38) + 0x59)) {
      lVar3 = FUN_01bfaa40(param_1);
      *(undefined1 *)(lVar3 + 0x59) = *(undefined1 *)(param_1 + 0x59);
    }
  }
  return;
}

