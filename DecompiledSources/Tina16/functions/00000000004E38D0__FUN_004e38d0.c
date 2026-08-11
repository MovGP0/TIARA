/* Ghidra address: 004e38d0 */
/* Ghidra symbol: FUN_004e38d0 */


undefined4 FUN_004e38d0(longlong param_1)

{
  return *(undefined4 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 4 +
          (longlong)*(int *)(param_1 + 0x10) * 0x10);
}

