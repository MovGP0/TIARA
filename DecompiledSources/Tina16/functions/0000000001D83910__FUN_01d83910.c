/* Ghidra address: 01d83910 */
/* Ghidra symbol: FUN_01d83910 */


void FUN_01d83910(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0xa88) + 0x100))
            (*(longlong **)(param_1 + 0xa88),*(undefined1 *)(param_1 + 0xa63));
  FUN_01d80d40(param_1,6,0);
  if (*(char *)(param_1 + 0xaa0) == '\0') {
    FUN_01d80d00(param_1,0,0);
  }
  return;
}

