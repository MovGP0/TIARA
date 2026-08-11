/* Ghidra address: 01a93ba0 */
/* Ghidra symbol: FUN_01a93ba0 */


undefined8 FUN_01a93ba0(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + (longlong)*(int *)(param_1 + 0x10) * 8);
}

