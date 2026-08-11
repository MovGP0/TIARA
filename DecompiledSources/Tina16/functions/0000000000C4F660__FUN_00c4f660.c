/* Ghidra address: 00c4f660 */
/* Ghidra symbol: FUN_00c4f660 */


undefined8 FUN_00c4f660(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + (longlong)*(int *)(param_1 + 0x10) * 8);
}

