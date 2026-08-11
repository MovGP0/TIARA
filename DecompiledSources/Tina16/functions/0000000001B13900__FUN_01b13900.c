/* Ghidra address: 01b13900 */
/* Ghidra symbol: FUN_01b13900 */


undefined8 FUN_01b13900(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + (longlong)*(int *)(param_1 + 0x10) * 8);
}

