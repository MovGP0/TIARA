/* Ghidra address: 0082bf80 */
/* Ghidra symbol: FUN_0082bf80 */


/* WARNING: Removing unreachable block (ram,0x0082bf8c) */

void FUN_0082bf80(longlong *param_1,byte param_2)

{
  if (4 < param_2) {
    param_2 = 4;
  }
  if (param_2 != *(byte *)(param_1[0xa4] + 0x2c)) {
    FUN_008279d0(param_1[0xa4]);
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

