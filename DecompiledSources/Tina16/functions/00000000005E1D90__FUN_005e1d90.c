/* Ghidra address: 005e1d90 */
/* Ghidra symbol: FUN_005e1d90 */


undefined4 FUN_005e1d90(longlong param_1)

{
  return *(undefined4 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x10 +
          (longlong)*(int *)(param_1 + 0x10) * 0x18);
}

