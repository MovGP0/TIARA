/* Ghidra address: 009a5670 */
/* Ghidra symbol: FUN_009a5670 */


undefined8 FUN_009a5670(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + (longlong)*(int *)(param_1 + 0x10) * 8);
}

