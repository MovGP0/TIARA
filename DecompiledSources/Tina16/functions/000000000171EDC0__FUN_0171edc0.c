/* Ghidra address: 0171edc0 */
/* Ghidra symbol: FUN_0171edc0 */


undefined1 FUN_0171edc0(longlong param_1,uint param_2)

{
  if (*(uint *)(param_1 + 0x10) <= param_2) {
    FUN_00594f90();
  }
  return *(undefined1 *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_2);
}

