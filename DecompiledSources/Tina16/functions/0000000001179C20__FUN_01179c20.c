/* Ghidra address: 01179c20 */
/* Ghidra symbol: FUN_01179c20 */


void FUN_01179c20(longlong *param_1)

{
  *(undefined4 *)PTR_DAT_02004700 = 0x2274;
  FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x988),L"Parameters setting");
  (**(code **)(*param_1 + 0x188))(param_1);
  return;
}

