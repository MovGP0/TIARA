/* Ghidra address: 0040d3d0 */
/* Ghidra symbol: FUN_0040d3d0 */


ulonglong FUN_0040d3d0(undefined *param_1)

{
  short sVar1;
  
  if (param_1 == &DAT_020060b8) {
    uRam00000000020060c2 = (ushort)DAT_01db9055;
    FUN_0040c9e0(&DAT_020060b8);
  }
  sVar1 = *(short *)(param_1 + 8);
  if (sVar1 != -0x284f) {
    FUN_00409930(0x68);
  }
  return CONCAT71((int7)((ulonglong)param_1 >> 8),sVar1 == -0x284f) & 0xffffffff;
}

