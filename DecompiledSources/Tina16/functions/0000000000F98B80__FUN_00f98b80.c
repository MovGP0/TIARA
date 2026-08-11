/* Ghidra address: 00f98b80 */
/* Ghidra symbol: FUN_00f98b80 */


void FUN_00f98b80(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x6f0) = 0;
  FUN_0064cf60(param_1,0x49e);
  (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x268))
            (*(longlong **)(param_1 + 0x6b8),*(undefined1 *)(param_1 + 0x7ac));
  (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x268))
            (*(longlong **)(param_1 + 0x6c0),*(char *)(param_1 + 0x7ac) == '\0');
  return;
}

