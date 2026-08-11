/* Ghidra address: 01234ff0 */
/* Ghidra symbol: FUN_01234ff0 */


void FUN_01234ff0(longlong *param_1)

{
  *(undefined4 *)PTR_DAT_02004700 = 0x2224;
  FUN_0064de00(param_1[0x131],L"Load/Save filter parameters");
  (**(code **)(*param_1 + 0x188))(param_1);
  return;
}

