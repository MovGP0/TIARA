/* Ghidra address: 004f1480 */
/* Ghidra symbol: FUN_004f1480 */


undefined8 FUN_004f1480(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + (longlong)*(int *)(param_1 + 0x10) * 8);
}

