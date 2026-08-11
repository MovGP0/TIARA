/* Ghidra address: 009aeb80 */
/* Ghidra symbol: FUN_009aeb80 */


undefined8 FUN_009aeb80(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + (longlong)*(int *)(param_1 + 0x10) * 8);
}

