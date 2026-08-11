/* Ghidra address: 00c74230 */
/* Ghidra symbol: FUN_00c74230 */


/* WARNING: Removing unreachable block (ram,0x00c7423c) */

void FUN_00c74230(longlong *param_1,byte param_2)

{
  if (4 < param_2) {
    param_2 = 4;
  }
  if (param_2 != *(byte *)(param_1[0xa5] + 0x2c)) {
    FUN_00c72430(param_1[0xa5]);
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

