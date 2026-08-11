/* Ghidra address: 00564510 */
/* Ghidra symbol: FUN_00564510 */


undefined8 FUN_00564510(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x10 +
          (longlong)*(int *)(param_1 + 0x10) * 0x18);
}

