/* Ghidra address: 007a1440 */
/* Ghidra symbol: FUN_007a1440 */


undefined8 FUN_007a1440(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + (longlong)*(int *)(param_1 + 0x10) * 8);
}

