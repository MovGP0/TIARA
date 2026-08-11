/* Ghidra address: 0040ea40 */
/* Ghidra symbol: FUN_0040ea40 */


ulonglong FUN_0040ea40(undefined *param_1)

{
  short sVar1;
  
  if ((param_1 == &DAT_020063b0) || (param_1 == &DAT_020066a8)) {
    *(ushort *)(param_1 + 10) = (ushort)DAT_01db9055;
    FUN_0040ca00(param_1);
  }
  sVar1 = *(short *)(param_1 + 8);
  if (sVar1 != -0x284e) {
    FUN_00409930(0x69);
  }
  return CONCAT71((int7)((ulonglong)param_1 >> 8),sVar1 == -0x284e) & 0xffffffff;
}

