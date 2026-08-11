/* Ghidra address: 005a4da0 */
/* Ghidra symbol: FUN_005a4da0 */


undefined8 FUN_005a4da0(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 8 +
          (longlong)*(int *)(param_1 + 0x10) * 0x18);
}

