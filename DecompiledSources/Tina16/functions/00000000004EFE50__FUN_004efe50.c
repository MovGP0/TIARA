/* Ghidra address: 004efe50 */
/* Ghidra symbol: FUN_004efe50 */


undefined8 FUN_004efe50(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x10 +
          (longlong)*(int *)(param_1 + 0x10) * 0x18);
}

