/* Ghidra address: 01463690 */
/* Ghidra symbol: FUN_01463690 */


void FUN_01463690(longlong *param_1)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 0xd7) = 0x6e;
  FUN_0064cf60(param_1,0x210);
  *(undefined4 *)(param_1[0xd9] + 0xac) = 0x211;
  *(undefined4 *)(param_1[0xf0] + 0xac) = 0x212;
  *(undefined4 *)(param_1[0xe5] + 0xac) = 0x213;
  *(undefined4 *)(param_1[0xfb] + 0xac) = 0x214;
  *(undefined4 *)(param_1[0xfc] + 0xac) = 0x215;
  *(undefined4 *)(param_1[0xe9] + 0x7c) = 0x211;
  *(undefined4 *)(param_1[0xe3] + 0x7c) = 0x211;
  (**(code **)(*param_1 + 0x2e8))(param_1,L"bmEquEd");
  FUN_00806b40(param_1,DAT_01f4c0d8);
  FUN_00806af0(param_1,DAT_01f4c0dc);
  FUN_0064cc50(param_1,DAT_01f4c0e0);
  FUN_0064cbf0(param_1,DAT_01f4c0e4);
  DAT_0210ea30 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  (**(code **)(*DAT_0210ea30 + 0x88))(DAT_0210ea30,0);
  (**(code **)(*DAT_0210ea30 + 0x70))(DAT_0210ea30,0);
  DAT_0210ea48 = (longlong *)FUN_00605cc0(&PTR_FUN_005f86c8,1);
  (**(code **)(*DAT_0210ea48 + 0x88))(DAT_0210ea48,0);
  (**(code **)(*DAT_0210ea48 + 0x70))(DAT_0210ea48,0);
  DAT_0210ea40 = FUN_00a09e20(&PTR_FUN_00a09250,1);
  FUN_00603cf0(*(undefined8 *)(param_1[0xec] + 0x318),DAT_0210ea30);
  lVar1 = FUN_01d11b00(&DAT_01d10980,1);
  param_1[0x10c] = lVar1;
  FUN_01463d20(param_1,*(undefined8 *)PTR_DAT_02004030);
  *(undefined1 *)((longlong)param_1 + 0x859) = 1;
  FUN_00724420(param_1[0xe9],*(undefined8 *)PTR_DAT_020049a0);
  FUN_00724420(param_1[0xe3],*(undefined8 *)PTR_DAT_020049a0);
  FUN_0064dbe0(param_1[0x104],1);
  FUN_007e2f80(param_1[0xff],1);
  (**(code **)(*(longlong *)param_1[0xeb] + 0x148))((longlong *)param_1[0xeb],0);
  return;
}

