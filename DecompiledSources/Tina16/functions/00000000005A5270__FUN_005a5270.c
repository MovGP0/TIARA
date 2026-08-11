/* Ghidra address: 005a5270 */
/* Ghidra symbol: FUN_005a5270 */


undefined8 FUN_005a5270(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x10 +
          (longlong)*(int *)(param_1 + 0x10) * 0x18);
}

