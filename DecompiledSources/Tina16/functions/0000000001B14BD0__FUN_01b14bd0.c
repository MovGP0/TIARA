/* Ghidra address: 01b14bd0 */
/* Ghidra symbol: FUN_01b14bd0 */


undefined8 FUN_01b14bd0(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + (longlong)*(int *)(param_1 + 0x10) * 8);
}

