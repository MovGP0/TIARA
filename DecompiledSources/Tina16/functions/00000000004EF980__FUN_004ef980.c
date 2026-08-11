/* Ghidra address: 004ef980 */
/* Ghidra symbol: FUN_004ef980 */


undefined8 FUN_004ef980(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 8 +
          (longlong)*(int *)(param_1 + 0x10) * 0x18);
}

