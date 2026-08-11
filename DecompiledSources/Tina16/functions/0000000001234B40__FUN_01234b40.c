/* Ghidra address: 01234b40 */
/* Ghidra symbol: FUN_01234b40 */


void FUN_01234b40(longlong *param_1)

{
  *(undefined4 *)PTR_DAT_02004700 = 0x1fa4;
  FUN_0064de00(param_1[0x131],L"Filter selectivity");
  (**(code **)(*param_1 + 0x188))(param_1);
  return;
}

