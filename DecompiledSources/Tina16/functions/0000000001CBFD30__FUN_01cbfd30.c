/* Ghidra address: 01cbfd30 */
/* Ghidra symbol: FUN_01cbfd30 */


undefined4 FUN_01cbfd30(longlong param_1,ulonglong param_2)

{
  return *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (param_2 & 0xff) * 4);
}

