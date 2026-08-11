/* Ghidra address: 01196e30 */
/* Ghidra symbol: FUN_01196e30 */


void FUN_01196e30(longlong *param_1)

{
  FUN_0064de00(param_1,L"Steps:");
  (**(code **)(*param_1 + 0x118))(param_1,0);
  FUN_0064cb30(param_1[0xd8],4);
  FUN_0064cb90(param_1[0xd8],0x19);
  FUN_0064cbf0(param_1[0xd8],0x140);
  FUN_0064cc50(param_1[0xd8],0x140);
  FUN_0064e030(param_1[0xd8],0xffff00);
  (**(code **)(*(longlong *)param_1[0xd8] + 0x128))((longlong *)param_1[0xd8],0);
  FUN_0064cb30(param_1[0xd6],0xe);
  FUN_0064cb90(param_1[0xd6],4);
  FUN_0064cbf0(param_1[0xd6],100);
  FUN_0064cc50(param_1[0xd6],0x12);
  FUN_0064cb30(param_1[0xd7],0xd1);
  FUN_0064cb90(param_1[0xd7],4);
  FUN_0064cbf0(param_1[0xd7],100);
  FUN_0064cc50(param_1[0xd7],0x12);
  return;
}

