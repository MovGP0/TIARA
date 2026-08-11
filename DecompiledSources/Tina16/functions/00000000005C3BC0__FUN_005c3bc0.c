/* Ghidra address: 005c3bc0 */
/* Ghidra symbol: FUN_005c3bc0 */


undefined2 FUN_005c3bc0(longlong param_1)

{
  return *(undefined2 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 4 +
          (longlong)*(int *)(param_1 + 0x10) * 0x38);
}

