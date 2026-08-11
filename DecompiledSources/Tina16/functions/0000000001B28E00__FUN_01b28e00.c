/* Ghidra address: 01b28e00 */
/* Ghidra symbol: FUN_01b28e00 */


undefined8 FUN_01b28e00(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + (longlong)*(int *)(param_1 + 0x10) * 8);
}

