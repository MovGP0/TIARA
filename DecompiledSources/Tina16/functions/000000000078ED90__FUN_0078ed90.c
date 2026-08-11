/* Ghidra address: 0078ed90 */
/* Ghidra symbol: FUN_0078ed90 */


undefined8 FUN_0078ed90(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x10 +
          (longlong)*(int *)(param_1 + 0x10) * 0x18);
}

