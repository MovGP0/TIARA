/* Ghidra address: 00bcf2f0 */
/* Ghidra symbol: FUN_00bcf2f0 */


void FUN_00bcf2f0(longlong *param_1)

{
  if ((int)param_1[8] != 0) {
    FUN_004b3260(param_1);
    FUN_00417840(param_1[7],&DAT_00bcca10,(longlong)(int)param_1[8]);
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(*param_1 + 0x50))(param_1,0);
    if (param_1[0x13] != 0) {
      (*(code *)param_1[0x13])(param_1[0x14],param_1);
    }
    FUN_004b3390(param_1);
  }
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  return;
}

