/* Ghidra address: 004eb200 */
/* Ghidra symbol: FUN_004eb200 */


undefined8 FUN_004eb200(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + (longlong)*(int *)(param_1 + 0x10) * 8);
}

