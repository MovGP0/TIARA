/* Ghidra address: 019b42d0 */
/* Ghidra symbol: FUN_019b42d0 */


undefined4 FUN_019b42d0(longlong param_1)

{
  return *(undefined4 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 8 +
          (longlong)*(int *)(param_1 + 0x10) * 0xc);
}

