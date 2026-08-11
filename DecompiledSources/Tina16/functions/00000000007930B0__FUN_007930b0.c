/* Ghidra address: 007930b0 */
/* Ghidra symbol: FUN_007930b0 */


undefined8 FUN_007930b0(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x10 +
          (longlong)*(int *)(param_1 + 0x10) * 0x18);
}

