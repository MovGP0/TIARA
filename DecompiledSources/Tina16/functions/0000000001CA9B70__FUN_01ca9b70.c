/* Ghidra address: 01ca9b70 */
/* Ghidra symbol: FUN_01ca9b70 */


undefined8 FUN_01ca9b70(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + (longlong)*(int *)(param_1 + 0x10) * 8);
}

