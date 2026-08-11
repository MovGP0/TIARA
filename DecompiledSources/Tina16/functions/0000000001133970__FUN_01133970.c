/* Ghidra address: 01133970 */
/* Ghidra symbol: FUN_01133970 */


undefined8 FUN_01133970(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + (longlong)*(int *)(param_1 + 0x10) * 8);
}

