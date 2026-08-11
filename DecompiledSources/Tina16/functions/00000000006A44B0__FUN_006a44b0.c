/* Ghidra address: 006a44b0 */
/* Ghidra symbol: FUN_006a44b0 */


void FUN_006a44b0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  FUN_004d4a80(param_1);
  cVar2 = FUN_004113d0(*(undefined8 *)(param_1 + 0x28),&PTR_FUN_00645ff0);
  if (cVar2 != '\0') {
    lVar1 = *(longlong *)(param_1 + 0x18);
    cVar2 = FUN_004113d0(lVar1,&PTR_FUN_006a1278);
    if ((cVar2 != '\0') && (*(char *)(lVar1 + 0x138) != '\0')) {
      FUN_006a45a0(param_1);
    }
  }
  return;
}

