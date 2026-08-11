/* Ghidra address: 0078b810 */
/* Ghidra symbol: FUN_0078b810 */


undefined4 FUN_0078b810(longlong param_1)

{
  return *(undefined4 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 4 +
          (longlong)*(int *)(param_1 + 0x10) * 0x10);
}

