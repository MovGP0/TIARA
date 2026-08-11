/* Ghidra address: 007a70c0 */
/* Ghidra symbol: FUN_007a70c0 */


undefined8 FUN_007a70c0(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + (longlong)*(int *)(param_1 + 0x10) * 8);
}

