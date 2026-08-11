/* Ghidra address: 00b13920 */
/* Ghidra symbol: FUN_00b13920 */


void FUN_00b13920(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (((lVar1 != 0) && (*(char *)(lVar1 + 0x525) != '\0')) &&
     (*(int *)(*(longlong *)(lVar1 + 0x600) + 0x28) == 0)) {
    FUN_0083f820(lVar1);
  }
  return;
}

