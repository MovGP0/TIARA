/* Ghidra address: 006a3990 */
/* Ghidra symbol: FUN_006a3990 */


void FUN_006a3990(longlong param_1)

{
  FUN_004d3040(param_1);
  if (*(char *)(param_1 + 0x139) != '\0') {
    FUN_006a39e0(param_1,*(char *)(param_1 + 0x139));
  }
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_006a3b30(param_1,*(longlong *)(param_1 + 0x150));
  }
  return;
}

