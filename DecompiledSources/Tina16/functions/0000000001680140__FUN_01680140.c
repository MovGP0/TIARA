/* Ghidra address: 01680140 */
/* Ghidra symbol: FUN_01680140 */


undefined8 FUN_01680140(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + (longlong)*(int *)(param_1 + 0x10) * 8);
}

