/* Ghidra address: 00bcf010 */
/* Ghidra symbol: FUN_00bcf010 */


void FUN_00bcf010(longlong *param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  FUN_004b29c0(param_1,param_2 & 0xfffffffc);
  if ((int)param_1[8] != 0) {
    FUN_00417840(param_1[7],&DAT_00bcca10,(longlong)(int)param_1[8]);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  (**(code **)(*param_1 + 0x50))(param_1,0);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

