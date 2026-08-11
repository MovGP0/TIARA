/* Ghidra address: 0077de20 */
/* Ghidra symbol: FUN_0077de20 */


void FUN_0077de20(undefined8 param_1,undefined1 *param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  *param_2 = 0x11;
  uVar2 = param_3 & 0xff;
  if (uVar2 < 0x28) {
    if (uVar2 < 0x1a) {
      if (uVar2 - 2 < 0x14) {
        *(undefined4 *)(param_2 + 4) = 1;
        iVar1 = 2;
        goto LAB_0077df74;
      }
      if (uVar2 - 0x16 < 4) {
        *(undefined4 *)(param_2 + 4) = 2;
        iVar1 = 0x16;
        goto LAB_0077df74;
      }
    }
    else {
      if (uVar2 - 0x1a < 4) {
        *(undefined4 *)(param_2 + 4) = 3;
        iVar1 = 0x1a;
        goto LAB_0077df74;
      }
      if (uVar2 - 0x1e < 5) {
        *(undefined4 *)(param_2 + 4) = 4;
        iVar1 = 0x1e;
        goto LAB_0077df74;
      }
      if (uVar2 - 0x23 < 5) {
        *(undefined4 *)(param_2 + 4) = 5;
        iVar1 = 0x23;
        goto LAB_0077df74;
      }
    }
  }
  else if (uVar2 < 0x32) {
    if (uVar2 - 0x28 < 5) {
      *(undefined4 *)(param_2 + 4) = 6;
      iVar1 = 0x28;
      goto LAB_0077df74;
    }
    if (uVar2 - 0x2d < 5) {
      *(undefined4 *)(param_2 + 4) = 7;
      iVar1 = 0x2d;
      goto LAB_0077df74;
    }
  }
  else {
    if (uVar2 - 0x32 < 5) {
      *(undefined4 *)(param_2 + 4) = 8;
      iVar1 = 0x32;
      goto LAB_0077df74;
    }
    if (uVar2 - 0x37 < 5) {
      *(undefined4 *)(param_2 + 4) = 9;
      iVar1 = 0x37;
      goto LAB_0077df74;
    }
    if (uVar2 - 0x3c < 8) {
      *(undefined4 *)(param_2 + 4) = 10;
      iVar1 = 0x3c;
      goto LAB_0077df74;
    }
  }
  *(undefined4 *)(param_2 + 4) = 0;
  iVar1 = 0;
LAB_0077df74:
  *(uint *)(param_2 + 8) = (((uint)param_3 & 0xff) - iVar1) + 1;
  return;
}

