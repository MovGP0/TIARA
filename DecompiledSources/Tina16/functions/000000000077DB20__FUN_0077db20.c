/* Ghidra address: 0077db20 */
/* Ghidra symbol: FUN_0077db20 */


void FUN_0077db20(undefined8 param_1,undefined1 *param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  *param_2 = 0x13;
  uVar2 = param_3 & 0xff;
  if (uVar2 < 0x10) {
    if (uVar2 == 0xf) {
      *(undefined4 *)(param_2 + 4) = 10;
      iVar1 = 0xf;
      goto LAB_0077dd87;
    }
    if (uVar2 < 9) {
      if (uVar2 == 8) {
        *(undefined4 *)(param_2 + 4) = 5;
        iVar1 = 8;
        goto LAB_0077dd87;
      }
      if (uVar2 == 2) {
        *(undefined4 *)(param_2 + 4) = 1;
        iVar1 = 2;
        goto LAB_0077dd87;
      }
      if (uVar2 == 3) {
        *(undefined4 *)(param_2 + 4) = 2;
        iVar1 = 3;
        goto LAB_0077dd87;
      }
      if (uVar2 - 4 < 3) {
        *(undefined4 *)(param_2 + 4) = 3;
        iVar1 = 4;
        goto LAB_0077dd87;
      }
      if (uVar2 == 7) {
        *(undefined4 *)(param_2 + 4) = 4;
        iVar1 = 7;
        goto LAB_0077dd87;
      }
    }
    else {
      if (uVar2 == 9) {
        *(undefined4 *)(param_2 + 4) = 6;
        iVar1 = 9;
        goto LAB_0077dd87;
      }
      if (uVar2 == 10) {
        *(undefined4 *)(param_2 + 4) = 7;
        iVar1 = 10;
        goto LAB_0077dd87;
      }
      if (uVar2 == 0xb) {
        *(undefined4 *)(param_2 + 4) = 8;
        iVar1 = 0xb;
        goto LAB_0077dd87;
      }
      if (uVar2 - 0xc < 3) {
        *(undefined4 *)(param_2 + 4) = 9;
        iVar1 = 0xc;
        goto LAB_0077dd87;
      }
    }
  }
  else if (uVar2 < 0x1c) {
    if (uVar2 == 0x10) {
      *(undefined4 *)(param_2 + 4) = 0xb;
      iVar1 = 0x10;
      goto LAB_0077dd87;
    }
    if (uVar2 - 0x11 < 5) {
      *(undefined4 *)(param_2 + 4) = 0xc;
      iVar1 = 0x11;
      goto LAB_0077dd87;
    }
    if (uVar2 == 0x16) {
      *(undefined4 *)(param_2 + 4) = 0xd;
      iVar1 = 0x16;
      goto LAB_0077dd87;
    }
    if (uVar2 - 0x17 < 5) {
      *(undefined4 *)(param_2 + 4) = 0xe;
      iVar1 = 0x17;
      goto LAB_0077dd87;
    }
  }
  else if (uVar2 < 0x22) {
    if (uVar2 - 0x1c < 5) {
      *(undefined4 *)(param_2 + 4) = 0xf;
      iVar1 = 0x1c;
      goto LAB_0077dd87;
    }
    if (uVar2 == 0x21) {
      *(undefined4 *)(param_2 + 4) = 0x10;
      iVar1 = 0x21;
      goto LAB_0077dd87;
    }
  }
  else {
    if (uVar2 - 0x22 < 3) {
      *(undefined4 *)(param_2 + 4) = 0x11;
      iVar1 = 0x22;
      goto LAB_0077dd87;
    }
    if (uVar2 == 0x25) {
      *(undefined4 *)(param_2 + 4) = 0x12;
      iVar1 = 0x25;
      goto LAB_0077dd87;
    }
    if (uVar2 == 0x26) {
      *(undefined4 *)(param_2 + 4) = 0x13;
      iVar1 = 0x26;
      goto LAB_0077dd87;
    }
  }
  *(undefined4 *)(param_2 + 4) = 0;
  iVar1 = 0;
LAB_0077dd87:
  *(uint *)(param_2 + 8) = (((uint)param_3 & 0xff) - iVar1) + 1;
  return;
}

