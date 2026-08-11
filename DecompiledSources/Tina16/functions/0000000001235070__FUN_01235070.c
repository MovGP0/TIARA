/* Ghidra address: 01235070 */
/* Ghidra symbol: FUN_01235070 */


void FUN_01235070(longlong *param_1)

{
  *(undefined4 *)PTR_DAT_02004700 = 0x2238;
  FUN_0064de00(param_1[0x131],L"Control buttons");
  (**(code **)(*param_1 + 0x188))(param_1);
  return;
}

