/* Ghidra address: 01234c30 */
/* Ghidra symbol: FUN_01234c30 */


void FUN_01234c30(longlong *param_1)

{
  *(undefined4 *)PTR_DAT_02004700 = 0x21b6;
  FUN_0064de00(param_1[0x131],L"Description");
  (**(code **)(*param_1 + 0x188))(param_1);
  return;
}

