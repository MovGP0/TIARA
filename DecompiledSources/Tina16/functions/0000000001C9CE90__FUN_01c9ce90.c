/* Ghidra address: 01c9ce90 */
/* Ghidra symbol: FUN_01c9ce90 */


void FUN_01c9ce90(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *(longlong *)(param_1 + 7000);
  if (lVar1 != 0) {
    cVar2 = FUN_004113d0(lVar1,&PTR_FUN_0135f8e0);
    if ((cVar2 != '\0') && (*(char *)(lVar1 + 0x24) != '\0')) {
      *(undefined1 *)(lVar1 + 0x21) = 1;
    }
  }
  return;
}

