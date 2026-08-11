/* Ghidra address: 01be5d10 */
/* Ghidra symbol: FUN_01be5d10 */


void FUN_01be5d10(longlong param_1)

{
  longlong lVar1;
  
  FUN_01bd59b0(param_1);
  if ((*(char *)(param_1 + 0x591) == '\0') && (*(char *)(param_1 + 0x590) != '\0')) {
    lVar1 = FUN_01c01290(param_1);
    if (lVar1 != 0) {
      FUN_01be6660(param_1);
    }
  }
  return;
}

