/* Ghidra address: 01c6d5f0 */
/* Ghidra symbol: FUN_01c6d5f0 */


void FUN_01c6d5f0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  FUN_00801e40(param_1,*(undefined8 *)(param_1 + 0xa10));
  if (*(longlong *)(param_1 + 7000) != 0) {
    lVar1 = *(longlong *)(param_1 + 7000);
    cVar2 = FUN_004113d0(lVar1,&PTR_FUN_013611b8);
    if ((cVar2 != '\0') && (*(char *)(lVar1 + 0x29) != '\0')) {
      *(undefined1 *)(lVar1 + 0x2a) = 1;
    }
    lVar1 = *(longlong *)(param_1 + 7000);
    cVar2 = FUN_004113d0(lVar1,&PTR_FUN_013606d0);
    if ((cVar2 != '\0') && (*(char *)(lVar1 + 0x1a) != '\0')) {
      *(undefined1 *)(lVar1 + 0x1b) = 1;
    }
  }
  return;
}

