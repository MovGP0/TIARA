/* Ghidra address: 00607e10 */
/* Ghidra symbol: FUN_00607e10 */


void FUN_00607e10(longlong param_1)

{
  if (((*(uint *)(param_1 + 0x30) & 3) != 0) && (*(int *)(param_1 + 0x48) == 0)) {
    if (*(short *)(param_1 + 0x2e) == 0x10) {
      *(undefined4 *)(param_1 + 0x48) = 0xf800;
      *(undefined4 *)(param_1 + 0x4c) = 0x7e0;
      *(undefined4 *)(param_1 + 0x50) = 0x1f;
    }
    else if (*(short *)(param_1 + 0x2e) == 0x20) {
      *(undefined4 *)(param_1 + 0x48) = 0xff0000;
      *(undefined4 *)(param_1 + 0x4c) = 0xff00;
      *(undefined4 *)(param_1 + 0x50) = 0xff;
    }
  }
  return;
}

