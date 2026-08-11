/* Ghidra address: 007026b0 */
/* Ghidra symbol: FUN_007026b0 */


void FUN_007026b0(longlong param_1)

{
  if (*(char *)(param_1 + 0x601) != '\0') {
    FUN_00701df0();
    FUN_0064e190(param_1,0);
    FUN_0064fca0(param_1,0x449,0,0);
  }
  *(undefined1 *)(param_1 + 0x601) = 0;
  *(undefined1 *)(param_1 + 0x600) = 0;
  FUN_0064fca0(param_1,0x448,0xffffffffffffffff,0);
  return;
}

