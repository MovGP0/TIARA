/* Ghidra address: 01235fc0 */
/* Ghidra symbol: FUN_01235fc0 */


void FUN_01235fc0(longlong *param_1)

{
  *(undefined4 *)PTR_DAT_02004700 = 0x23f0;
  FUN_0064de00(param_1[0x131],L"Active filter");
  (**(code **)(*param_1 + 0x188))(param_1);
  return;
}

