/* Ghidra address: 004df620 */
/* Ghidra symbol: FUN_004df620 */


undefined8 FUN_004df620(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + (longlong)*(int *)(param_1 + 0x10) * 8);
}

