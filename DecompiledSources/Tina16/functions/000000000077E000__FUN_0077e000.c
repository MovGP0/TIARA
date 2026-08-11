/* Ghidra address: 0077e000 */
/* Ghidra symbol: FUN_0077e000 */


void FUN_0077e000(undefined8 param_1,undefined1 *param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  *param_2 = 0x18;
  uVar2 = param_3 & 0xff;
  if (uVar2 < 0xd) {
    if (uVar2 == 0xc) {
      *(undefined4 *)(param_2 + 4) = 0xb;
      iVar1 = 0xc;
      goto LAB_0077e2a0;
    }
    if (uVar2 < 8) {
      if (uVar2 == 7) {
        *(undefined4 *)(param_2 + 4) = 6;
        iVar1 = 7;
        goto LAB_0077e2a0;
      }
      if (uVar2 < 5) {
        if (uVar2 == 4) {
          *(undefined4 *)(param_2 + 4) = 3;
          iVar1 = 4;
          goto LAB_0077e2a0;
        }
        if (uVar2 == 2) {
          *(undefined4 *)(param_2 + 4) = 1;
          iVar1 = 2;
          goto LAB_0077e2a0;
        }
        if (uVar2 == 3) {
          *(undefined4 *)(param_2 + 4) = 2;
          iVar1 = 3;
          goto LAB_0077e2a0;
        }
      }
      else {
        if (uVar2 == 5) {
          *(undefined4 *)(param_2 + 4) = 4;
          iVar1 = 5;
          goto LAB_0077e2a0;
        }
        if (uVar2 == 6) {
          *(undefined4 *)(param_2 + 4) = 5;
          iVar1 = 6;
          goto LAB_0077e2a0;
        }
      }
    }
    else {
      if (uVar2 == 8) {
        *(undefined4 *)(param_2 + 4) = 7;
        iVar1 = 8;
        goto LAB_0077e2a0;
      }
      if (uVar2 == 9) {
        *(undefined4 *)(param_2 + 4) = 8;
        iVar1 = 9;
        goto LAB_0077e2a0;
      }
      if (uVar2 == 10) {
        *(undefined4 *)(param_2 + 4) = 9;
        iVar1 = 10;
        goto LAB_0077e2a0;
      }
      if (uVar2 == 0xb) {
        *(undefined4 *)(param_2 + 4) = 10;
        iVar1 = 0xb;
        goto LAB_0077e2a0;
      }
    }
  }
  else if (uVar2 < 0x18) {
    if (uVar2 == 0x17) {
      *(undefined4 *)(param_2 + 4) = 0x11;
      iVar1 = 0x17;
      goto LAB_0077e2a0;
    }
    if (uVar2 < 0x15) {
      if (uVar2 == 0x14) {
        *(undefined4 *)(param_2 + 4) = 0xe;
        iVar1 = 0x14;
        goto LAB_0077e2a0;
      }
      if (uVar2 == 0xd) {
        *(undefined4 *)(param_2 + 4) = 0xc;
        iVar1 = 0xd;
        goto LAB_0077e2a0;
      }
      if (uVar2 - 0xe < 6) {
        *(undefined4 *)(param_2 + 4) = 0xd;
        iVar1 = 0xe;
        goto LAB_0077e2a0;
      }
    }
    else {
      if (uVar2 == 0x15) {
        *(undefined4 *)(param_2 + 4) = 0xf;
        iVar1 = 0x15;
        goto LAB_0077e2a0;
      }
      if (uVar2 == 0x16) {
        *(undefined4 *)(param_2 + 4) = 0x10;
        iVar1 = 0x16;
        goto LAB_0077e2a0;
      }
    }
  }
  else {
    if (uVar2 == 0x18) {
      *(undefined4 *)(param_2 + 4) = 0x12;
      iVar1 = 0x18;
      goto LAB_0077e2a0;
    }
    if (uVar2 == 0x19) {
      *(undefined4 *)(param_2 + 4) = 0x13;
      iVar1 = 0x19;
      goto LAB_0077e2a0;
    }
    if (uVar2 == 0x1a) {
      *(undefined4 *)(param_2 + 4) = 0x14;
      iVar1 = 0x1a;
      goto LAB_0077e2a0;
    }
    if (uVar2 == 0x1b) {
      *(undefined4 *)(param_2 + 4) = 0x15;
      iVar1 = 0x1b;
      goto LAB_0077e2a0;
    }
  }
  *(undefined4 *)(param_2 + 4) = 0;
  iVar1 = 0;
LAB_0077e2a0:
  *(uint *)(param_2 + 8) = (((uint)param_3 & 0xff) - iVar1) + 1;
  return;
}

