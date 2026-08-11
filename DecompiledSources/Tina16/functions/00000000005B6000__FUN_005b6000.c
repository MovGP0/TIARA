/* Ghidra address: 005b6000 */
/* Ghidra symbol: FUN_005b6000 */


undefined8 FUN_005b6000(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + (longlong)*(int *)(param_1 + 0x10) * 8);
}

