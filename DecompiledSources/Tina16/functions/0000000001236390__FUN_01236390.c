/* Ghidra address: 01236390 */
/* Ghidra symbol: FUN_01236390 */


void FUN_01236390(longlong *param_1)

{
  *(undefined4 *)PTR_DAT_02004700 = 0x24b8;
  FUN_0064de00(param_1[0x131],L"Configuration select");
  (**(code **)(*param_1 + 0x188))(param_1);
  return;
}

