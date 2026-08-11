/* Ghidra address: 00562510 */
/* Ghidra symbol: FUN_00562510 */


undefined8 FUN_00562510(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 8 +
          (longlong)*(int *)(param_1 + 0x10) * 0x18);
}

