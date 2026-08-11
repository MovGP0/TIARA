/* Ghidra address: 0077be90 */
/* Ghidra symbol: FUN_0077be90 */


void FUN_0077be90(undefined8 param_1,undefined1 *param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  *param_2 = 9;
  uVar2 = param_3 & 0xff;
  if (uVar2 < 0xc) {
    if (uVar2 < 10) {
      if (uVar2 == 9) {
        *(undefined4 *)(param_2 + 4) = 3;
        iVar1 = 9;
        goto LAB_0077bfdc;
      }
      if (uVar2 - 2 < 6) {
        *(undefined4 *)(param_2 + 4) = 1;
        iVar1 = 2;
        goto LAB_0077bfdc;
      }
      if (uVar2 == 8) {
        *(undefined4 *)(param_2 + 4) = 2;
        iVar1 = 8;
        goto LAB_0077bfdc;
      }
    }
    else {
      if (uVar2 == 10) {
        *(undefined4 *)(param_2 + 4) = 4;
        iVar1 = 10;
        goto LAB_0077bfdc;
      }
      if (uVar2 == 0xb) {
        *(undefined4 *)(param_2 + 4) = 5;
        iVar1 = 0xb;
        goto LAB_0077bfdc;
      }
    }
  }
  else if (uVar2 < 0x2c) {
    if (uVar2 - 0xc < 0x10) {
      *(undefined4 *)(param_2 + 4) = 6;
      iVar1 = 0xc;
      goto LAB_0077bfdc;
    }
    if (uVar2 - 0x1c < 0x10) {
      *(undefined4 *)(param_2 + 4) = 7;
      iVar1 = 0x1c;
      goto LAB_0077bfdc;
    }
  }
  else {
    if (uVar2 - 0x2c < 3) {
      *(undefined4 *)(param_2 + 4) = 8;
      iVar1 = 0x2c;
      goto LAB_0077bfdc;
    }
    if (uVar2 - 0x2f < 3) {
      *(undefined4 *)(param_2 + 4) = 9;
      iVar1 = 0x2f;
      goto LAB_0077bfdc;
    }
    if (uVar2 == 0x32) {
      *(undefined4 *)(param_2 + 4) = 10;
      iVar1 = 0x32;
      goto LAB_0077bfdc;
    }
  }
  *(undefined4 *)(param_2 + 4) = 0;
  iVar1 = 0;
LAB_0077bfdc:
  *(uint *)(param_2 + 8) = (((uint)param_3 & 0xff) - iVar1) + 1;
  return;
}

