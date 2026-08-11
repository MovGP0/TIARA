/* Ghidra address: 01874e60 */
/* Ghidra symbol: FUN_01874e60 */


void FUN_01874e60(undefined8 param_1,uint *param_2,byte *param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_4 != 0) {
    do {
      *param_2 = (uint)*param_3;
      *param_2 = *param_2 | (uint)param_3[1] << 8;
      *param_2 = *param_2 | (uint)param_3[2] << 0x10;
      *param_2 = *param_2 | (uint)param_3[3] << 0x18;
      param_3 = param_3 + 4;
      param_2 = param_2 + 1;
      uVar1 = uVar1 + 4;
    } while (uVar1 < param_4);
  }
  return;
}

