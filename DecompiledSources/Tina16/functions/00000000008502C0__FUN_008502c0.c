/* Ghidra address: 008502c0 */
/* Ghidra symbol: FUN_008502c0 */


void FUN_008502c0(longlong param_1)

{
  if (*(char *)(param_1 + 0x539) != '\0') {
    FUN_00850300(param_1,0xffffffff,0xffffffff);
    *(undefined1 *)(param_1 + 0x539) = 0;
    FUN_0064e190(param_1,0);
  }
  return;
}

