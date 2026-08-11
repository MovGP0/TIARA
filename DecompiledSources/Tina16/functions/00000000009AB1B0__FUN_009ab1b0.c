/* Ghidra address: 009ab1b0 */
/* Ghidra symbol: FUN_009ab1b0 */


undefined8 FUN_009ab1b0(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + (longlong)*(int *)(param_1 + 0x10) * 8);
}

