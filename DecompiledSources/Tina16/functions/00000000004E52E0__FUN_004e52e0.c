/* Ghidra address: 004e52e0 */
/* Ghidra symbol: FUN_004e52e0 */


undefined8 FUN_004e52e0(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + (longlong)*(int *)(param_1 + 0x10) * 8);
}

