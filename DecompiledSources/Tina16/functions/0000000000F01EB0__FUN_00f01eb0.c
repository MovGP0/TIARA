/* Ghidra address: 00f01eb0 */
/* Ghidra symbol: FUN_00f01eb0 */


void FUN_00f01eb0(longlong param_1)

{
  if (*(char *)(param_1 + 0x532) != '\0') {
    FUN_00f01ef0(param_1,0xffffffff,0xffffffff);
    *(undefined1 *)(param_1 + 0x532) = 0;
    FUN_0064e190(param_1,0);
  }
  return;
}

