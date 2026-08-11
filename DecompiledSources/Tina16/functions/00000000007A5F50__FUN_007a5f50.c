/* Ghidra address: 007a5f50 */
/* Ghidra symbol: FUN_007a5f50 */


undefined8 FUN_007a5f50(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + (longlong)*(int *)(param_1 + 0x10) * 8);
}

