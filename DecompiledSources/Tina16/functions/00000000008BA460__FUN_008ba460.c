/* Ghidra address: 008ba460 */
/* Ghidra symbol: FUN_008ba460 */


undefined8 FUN_008ba460(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + (longlong)*(int *)(param_1 + 0x10) * 8);
}

