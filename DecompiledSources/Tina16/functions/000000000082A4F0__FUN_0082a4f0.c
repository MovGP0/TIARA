/* Ghidra address: 0082a4f0 */
/* Ghidra symbol: FUN_0082a4f0 */


/* WARNING: Removing unreachable block (ram,0x0082a4fc) */

void FUN_0082a4f0(longlong *param_1,byte param_2)

{
  if (4 < param_2) {
    param_2 = 4;
  }
  if (param_2 != *(byte *)(param_1[100] + 0x2c)) {
    FUN_008279d0(param_1[100]);
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

