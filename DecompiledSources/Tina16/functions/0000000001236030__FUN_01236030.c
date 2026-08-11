/* Ghidra address: 01236030 */
/* Ghidra symbol: FUN_01236030 */


void FUN_01236030(longlong *param_1)

{
  *(undefined4 *)PTR_DAT_02004700 = 0x2454;
  FUN_0064de00(param_1[0x131],L"Passive filter");
  (**(code **)(*param_1 + 0x188))(param_1);
  return;
}

