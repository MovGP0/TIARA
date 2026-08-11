/* Ghidra address: 0077c110 */
/* Ghidra symbol: FUN_0077c110 */


void FUN_0077c110(undefined8 param_1,undefined1 *param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  *param_2 = 10;
  uVar2 = param_3 & 0xff;
  if (uVar2 < 0x14) {
    if (uVar2 < 10) {
      if (uVar2 == 9) {
        *(undefined4 *)(param_2 + 4) = 6;
        iVar1 = 9;
        goto LAB_0077c3ad;
      }
      if (uVar2 < 7) {
        if (uVar2 == 6) {
          *(undefined4 *)(param_2 + 4) = 3;
          iVar1 = 6;
          goto LAB_0077c3ad;
        }
        if (uVar2 - 2 < 3) {
          *(undefined4 *)(param_2 + 4) = 1;
          iVar1 = 2;
          goto LAB_0077c3ad;
        }
        if (uVar2 == 5) {
          *(undefined4 *)(param_2 + 4) = 2;
          iVar1 = 5;
          goto LAB_0077c3ad;
        }
      }
      else {
        if (uVar2 == 7) {
          *(undefined4 *)(param_2 + 4) = 4;
          iVar1 = 7;
          goto LAB_0077c3ad;
        }
        if (uVar2 == 8) {
          *(undefined4 *)(param_2 + 4) = 5;
          iVar1 = 8;
          goto LAB_0077c3ad;
        }
      }
    }
    else {
      if (uVar2 - 10 < 2) {
        *(undefined4 *)(param_2 + 4) = 7;
        iVar1 = 10;
        goto LAB_0077c3ad;
      }
      if (uVar2 - 0xc < 6) {
        *(undefined4 *)(param_2 + 4) = 8;
        iVar1 = 0xc;
        goto LAB_0077c3ad;
      }
      if (uVar2 == 0x12) {
        *(undefined4 *)(param_2 + 4) = 9;
        iVar1 = 0x12;
        goto LAB_0077c3ad;
      }
      if (uVar2 == 0x13) {
        *(undefined4 *)(param_2 + 4) = 10;
        iVar1 = 0x13;
        goto LAB_0077c3ad;
      }
    }
  }
  else if (uVar2 < 0x21) {
    if (uVar2 < 0x1c) {
      if (uVar2 == 0x1b) {
        *(undefined4 *)(param_2 + 4) = 0xd;
        iVar1 = 0x1b;
        goto LAB_0077c3ad;
      }
      if (uVar2 - 0x14 < 4) {
        *(undefined4 *)(param_2 + 4) = 0xb;
        iVar1 = 0x14;
        goto LAB_0077c3ad;
      }
      if (uVar2 - 0x18 < 3) {
        *(undefined4 *)(param_2 + 4) = 0xc;
        iVar1 = 0x18;
        goto LAB_0077c3ad;
      }
    }
    else {
      if (uVar2 - 0x1c < 4) {
        *(undefined4 *)(param_2 + 4) = 0xe;
        iVar1 = 0x1c;
        goto LAB_0077c3ad;
      }
      if (uVar2 == 0x20) {
        *(undefined4 *)(param_2 + 4) = 0xf;
        iVar1 = 0x20;
        goto LAB_0077c3ad;
      }
    }
  }
  else if (uVar2 < 0x25) {
    if (uVar2 - 0x21 < 2) {
      *(undefined4 *)(param_2 + 4) = 0x10;
      iVar1 = 0x21;
      goto LAB_0077c3ad;
    }
    if (uVar2 - 0x23 < 2) {
      *(undefined4 *)(param_2 + 4) = 0x11;
      iVar1 = 0x23;
      goto LAB_0077c3ad;
    }
  }
  else {
    if (uVar2 - 0x25 < 2) {
      *(undefined4 *)(param_2 + 4) = 0x12;
      iVar1 = 0x25;
      goto LAB_0077c3ad;
    }
    if (uVar2 - 0x27 < 2) {
      *(undefined4 *)(param_2 + 4) = 0x13;
      iVar1 = 0x27;
      goto LAB_0077c3ad;
    }
    if (uVar2 - 0x29 < 2) {
      *(undefined4 *)(param_2 + 4) = 0x14;
      iVar1 = 0x29;
      goto LAB_0077c3ad;
    }
  }
  *(undefined4 *)(param_2 + 4) = 0;
  iVar1 = 0;
LAB_0077c3ad:
  *(uint *)(param_2 + 8) = (((uint)param_3 & 0xff) - iVar1) + 1;
  return;
}

