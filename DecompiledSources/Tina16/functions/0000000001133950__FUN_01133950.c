/* Ghidra address: 01133950 */
/* Ghidra symbol: FUN_01133950 */


undefined8 FUN_01133950(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + (longlong)*(int *)(param_1 + 0x10) * 8);
}

