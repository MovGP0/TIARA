/* Ghidra address: 01179ca0 */
/* Ghidra symbol: FUN_01179ca0 */


void FUN_01179ca0(longlong *param_1)

{
  *(undefined4 *)PTR_DAT_02004700 = 0x2274;
  FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x988),L"Parameters setting");
  (**(code **)(*param_1 + 0x188))(param_1);
  return;
}

