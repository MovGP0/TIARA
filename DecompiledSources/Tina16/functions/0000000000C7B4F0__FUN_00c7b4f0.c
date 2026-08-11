/* Ghidra address: 00c7b4f0 */
/* Ghidra symbol: FUN_00c7b4f0 */


int FUN_00c7b4f0(byte *param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_3 + 2;
  for (; 2 < param_3; param_3 = param_3 + -3) {
    *param_2 = (&DAT_02019d54)[*param_1 >> 2];
    param_2[1] = (&DAT_02019d54)[(uint)(*param_1 & 3) << 4 | (uint)(param_1[1] >> 4)];
    param_2[2] = (&DAT_02019d54)[(uint)(param_1[1] & 0xf) * 4 | (uint)(param_1[2] >> 6)];
    param_2[3] = (&DAT_02019d54)[param_1[2] & 0x3f];
    param_1 = param_1 + 3;
    param_2 = param_2 + 4;
  }
  if (param_3 == 1) {
    *param_2 = (&DAT_02019d54)[*param_1 >> 2];
    param_2[1] = (&DAT_02019d54)[(ulonglong)(*param_1 & 3) * 0x10];
    param_2[2] = 0x3d;
    param_2[3] = 0x3d;
  }
  else if (param_3 == 2) {
    *param_2 = (&DAT_02019d54)[*param_1 >> 2];
    param_2[1] = (&DAT_02019d54)[(uint)(*param_1 & 3) << 4 | (uint)(param_1[1] >> 4)];
    param_2[2] = (&DAT_02019d54)[(uint)(param_1[1] & 0xf) * 4];
    param_2[3] = 0x3d;
  }
  return (iVar1 / 3) * 4;
}

