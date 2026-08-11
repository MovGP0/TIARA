/* Ghidra address: 00f36640 */
/* Ghidra symbol: FUN_00f36640 */


undefined4 FUN_00f36640(longlong param_1)

{
  return *(undefined4 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 4 +
          (longlong)*(int *)(param_1 + 0x10) * 0x10);
}

