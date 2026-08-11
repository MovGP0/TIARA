/* Ghidra address: 009afd10 */
/* Ghidra symbol: FUN_009afd10 */


undefined8 FUN_009afd10(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + (longlong)*(int *)(param_1 + 0x10) * 8);
}

