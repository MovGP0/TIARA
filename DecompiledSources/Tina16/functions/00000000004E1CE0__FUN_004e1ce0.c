/* Ghidra address: 004e1ce0 */
/* Ghidra symbol: FUN_004e1ce0 */


undefined8 FUN_004e1ce0(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + (longlong)*(int *)(param_1 + 0x10) * 8);
}

