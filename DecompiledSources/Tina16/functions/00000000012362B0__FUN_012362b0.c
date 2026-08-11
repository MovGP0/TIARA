/* Ghidra address: 012362b0 */
/* Ghidra symbol: FUN_012362b0 */


void FUN_012362b0(longlong *param_1)

{
  *(undefined4 *)PTR_DAT_02004700 = 0x2274;
  FUN_0064de00(param_1[0x131],L"Parameters setting");
  (**(code **)(*param_1 + 0x188))(param_1);
  return;
}

