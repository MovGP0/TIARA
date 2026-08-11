/* Ghidra address: 006061d0 */
/* Ghidra symbol: FUN_006061d0 */


undefined4 FUN_006061d0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x48) == 0) {
    FUN_00606460(param_1);
  }
  return *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x18);
}

