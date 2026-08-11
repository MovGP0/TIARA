/* Ghidra address: 01bfc690 */
/* Ghidra symbol: FUN_01bfc690 */


void FUN_01bfc690(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  FUN_01bfc590(param_1,param_2);
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_01bf0090);
  if (cVar1 != '\0') {
    FUN_01bfc7c0(param_1,*(undefined1 *)(param_2 + 0x28));
    FUN_01bfc800(param_1,*(undefined1 *)(param_2 + 0x29));
    FUN_01bfc840(param_1,*(undefined1 *)(param_2 + 0x2a));
    FUN_01bfc880(param_1,*(undefined1 *)(param_2 + 0x2b));
  }
  return;
}

