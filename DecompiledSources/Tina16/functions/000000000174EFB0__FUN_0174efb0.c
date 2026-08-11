/* Ghidra address: 0174efb0 */
/* Ghidra symbol: FUN_0174efb0 */


void FUN_0174efb0(longlong param_1,undefined8 param_2)

{
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
  if (*(int *)(param_1 + 0x4c) == 0) {
    if (*(int *)(param_1 + 0x40) < -0xf) {
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x44);
      if (*(int *)(param_1 + 0x38) < 0) {
        *(undefined4 *)(param_1 + 0x38) = 0xf;
      }
      *(undefined1 *)(param_1 + 10) = 1;
      FUN_0173d100(param_1,param_2,*PTR_DAT_02002480,*PTR_DAT_02001560);
      *(undefined1 *)(param_1 + 10) = 0;
    }
    else if (0xf < *(int *)(param_1 + 0x40)) {
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x44);
      if (0xf < *(int *)(param_1 + 0x38)) {
        *(undefined4 *)(param_1 + 0x38) = 0;
      }
      *(undefined1 *)(param_1 + 10) = 1;
      FUN_0173d100(param_1,param_2,*PTR_DAT_02002480,*PTR_DAT_02001560);
      *(undefined1 *)(param_1 + 10) = 0;
    }
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x48);
  }
  return;
}

