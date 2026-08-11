/* Ghidra address: 005a7ed0 */
/* Ghidra symbol: FUN_005a7ed0 */


undefined8 FUN_005a7ed0(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + (longlong)*(int *)(param_1 + 0x10) * 8);
}

