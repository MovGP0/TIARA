/* Ghidra address: 004ee080 */
/* Ghidra symbol: FUN_004ee080 */


undefined4 FUN_004ee080(longlong param_1)

{
  return *(undefined4 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x10 +
          (longlong)*(int *)(param_1 + 0x10) * 0x18);
}

