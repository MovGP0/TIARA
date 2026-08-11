/* Ghidra address: 00da14d0 */
/* Ghidra symbol: FUN_00da14d0 */


undefined8 FUN_00da14d0(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x10 +
          (longlong)*(int *)(param_1 + 0x10) * 0x18);
}

