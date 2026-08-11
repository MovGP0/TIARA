/* Ghidra address: 01488070 */
/* Ghidra symbol: FUN_01488070 */


undefined1 FUN_01488070(longlong param_1)

{
  return *(undefined1 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x10 +
          (longlong)*(int *)(param_1 + 0x10) * 0x18);
}

