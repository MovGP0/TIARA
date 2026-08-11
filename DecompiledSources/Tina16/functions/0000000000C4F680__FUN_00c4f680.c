/* Ghidra address: 00c4f680 */
/* Ghidra symbol: FUN_00c4f680 */


undefined8 FUN_00c4f680(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + (longlong)*(int *)(param_1 + 0x10) * 8);
}

