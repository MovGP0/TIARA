/* Ghidra address: 019b4060 */
/* Ghidra symbol: FUN_019b4060 */


undefined4 FUN_019b4060(longlong param_1)

{
  return *(undefined4 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 4 +
          (longlong)*(int *)(param_1 + 0x10) * 0xc);
}

