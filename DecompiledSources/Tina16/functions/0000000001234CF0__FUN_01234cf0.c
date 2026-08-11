/* Ghidra address: 01234cf0 */
/* Ghidra symbol: FUN_01234cf0 */


void FUN_01234cf0(longlong *param_1)

{
  *(undefined4 *)PTR_DAT_02004700 = 0x21de;
  FUN_0064de00(param_1[0x131],L"Standard OPAMP");
  (**(code **)(*param_1 + 0x188))(param_1);
  return;
}

