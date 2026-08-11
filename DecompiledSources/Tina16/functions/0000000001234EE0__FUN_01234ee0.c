/* Ghidra address: 01234ee0 */
/* Ghidra symbol: FUN_01234ee0 */


void FUN_01234ee0(longlong *param_1)

{
  *(undefined4 *)PTR_DAT_02004700 = 0x21fc;
  FUN_0064de00(param_1[0x131],L"Build target Spice Netlist File");
  (**(code **)(*param_1 + 0x188))(param_1);
  return;
}

