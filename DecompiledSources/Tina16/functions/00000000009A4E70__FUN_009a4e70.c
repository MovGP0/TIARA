/* Ghidra address: 009a4e70 */
/* Ghidra symbol: FUN_009a4e70 */


undefined8 FUN_009a4e70(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + (longlong)*(int *)(param_1 + 0x10) * 8);
}

