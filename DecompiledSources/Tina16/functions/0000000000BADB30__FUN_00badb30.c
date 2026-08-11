/* Ghidra address: 00badb30 */
/* Ghidra symbol: FUN_00badb30 */


void FUN_00badb30(longlong param_1)

{
  longlong lVar1;
  
  if (((0 < *(int *)(param_1 + 0x10)) && (lVar1 = *(longlong *)(param_1 + 0x50), lVar1 != 0)) &&
     (*(char *)(lVar1 + 0x20) != '\0')) {
    FUN_00badc90(lVar1,0);
  }
  return;
}

