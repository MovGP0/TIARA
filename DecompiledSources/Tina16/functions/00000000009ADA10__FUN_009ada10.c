/* Ghidra address: 009ada10 */
/* Ghidra symbol: FUN_009ada10 */


undefined8 FUN_009ada10(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + (longlong)*(int *)(param_1 + 0x10) * 8);
}

