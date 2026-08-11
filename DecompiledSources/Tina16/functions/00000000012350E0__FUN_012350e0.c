/* Ghidra address: 012350e0 */
/* Ghidra symbol: FUN_012350e0 */


void FUN_012350e0(longlong *param_1)

{
  *(undefined4 *)PTR_DAT_02004700 = 0x2238;
  FUN_0064de00(param_1[0x131],L"Control buttons");
  (**(code **)(*param_1 + 0x188))(param_1);
  return;
}

