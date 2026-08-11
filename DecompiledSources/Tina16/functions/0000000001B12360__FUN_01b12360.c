/* Ghidra address: 01b12360 */
/* Ghidra symbol: FUN_01b12360 */


undefined8 FUN_01b12360(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + (longlong)*(int *)(param_1 + 0x10) * 8);
}

