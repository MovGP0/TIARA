/* Ghidra address: 00570a40 */
/* Ghidra symbol: FUN_00570a40 */


undefined8 FUN_00570a40(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + (longlong)*(int *)(param_1 + 0x10) * 8);
}

