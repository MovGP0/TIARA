/* Ghidra address: 01234d60 */
/* Ghidra symbol: FUN_01234d60 */


void FUN_01234d60(longlong *param_1)

{
  *(undefined4 *)PTR_DAT_02004700 = 0x21e8;
  FUN_0064de00(param_1[0x131],L"Spice OPAMP");
  (**(code **)(*param_1 + 0x188))(param_1);
  return;
}

