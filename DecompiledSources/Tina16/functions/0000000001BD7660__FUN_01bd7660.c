/* Ghidra address: 01bd7660 */
/* Ghidra symbol: FUN_01bd7660 */


void FUN_01bd7660(longlong *param_1)

{
  if ((param_1[0xb1] == 0) && (param_1[0x93] != 0)) {
    (**(code **)(*param_1 + 0x3b8))(param_1);
  }
  return;
}

