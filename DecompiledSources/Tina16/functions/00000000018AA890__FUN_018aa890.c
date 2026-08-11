/* Ghidra address: 018aa890 */
/* Ghidra symbol: FUN_018aa890 */


void FUN_018aa890(longlong *param_1)

{
  DAT_02110688 = 0xffffffff;
  *(undefined4 *)(param_1[0xaa] + 0x50c) = 0;
  DAT_02110670 = 0;
  (**(code **)(*param_1 + 0x180))(param_1);
  return;
}

