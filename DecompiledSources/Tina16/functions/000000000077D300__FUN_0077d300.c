/* Ghidra address: 0077d300 */
/* Ghidra symbol: FUN_0077d300 */


void FUN_0077d300(undefined8 param_1,undefined1 *param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  *param_2 = 0x1f;
  uVar2 = param_3 & 0xff;
  if (uVar2 < 0x3c) {
    if (uVar2 < 0x1a) {
      if (uVar2 < 0xe) {
        if (uVar2 - 2 < 3) {
          *(undefined4 *)(param_2 + 4) = 1;
          iVar1 = 2;
          goto LAB_0077d80c;
        }
        if (uVar2 - 5 < 3) {
          *(undefined4 *)(param_2 + 4) = 2;
          iVar1 = 5;
          goto LAB_0077d80c;
        }
        if (uVar2 - 8 < 3) {
          *(undefined4 *)(param_2 + 4) = 3;
          iVar1 = 8;
          goto LAB_0077d80c;
        }
        if (uVar2 - 0xb < 3) {
          *(undefined4 *)(param_2 + 4) = 4;
          iVar1 = 0xb;
          goto LAB_0077d80c;
        }
      }
      else if (uVar2 < 0x14) {
        if (uVar2 - 0xe < 3) {
          *(undefined4 *)(param_2 + 4) = 5;
          iVar1 = 0xe;
          goto LAB_0077d80c;
        }
        if (uVar2 - 0x11 < 3) {
          *(undefined4 *)(param_2 + 4) = 6;
          iVar1 = 0x11;
          goto LAB_0077d80c;
        }
      }
      else {
        if (uVar2 - 0x14 < 2) {
          *(undefined4 *)(param_2 + 4) = 7;
          iVar1 = 0x14;
          goto LAB_0077d80c;
        }
        if (uVar2 - 0x16 < 2) {
          *(undefined4 *)(param_2 + 4) = 8;
          iVar1 = 0x16;
          goto LAB_0077d80c;
        }
        if (uVar2 - 0x18 < 2) {
          *(undefined4 *)(param_2 + 4) = 9;
          iVar1 = 0x18;
          goto LAB_0077d80c;
        }
      }
    }
    else if (uVar2 < 0x28) {
      if (uVar2 < 0x1e) {
        if (uVar2 - 0x1a < 2) {
          *(undefined4 *)(param_2 + 4) = 10;
          iVar1 = 0x1a;
          goto LAB_0077d80c;
        }
        if (uVar2 - 0x1c < 2) {
          *(undefined4 *)(param_2 + 4) = 0xb;
          iVar1 = 0x1c;
          goto LAB_0077d80c;
        }
      }
      else {
        if (uVar2 - 0x1e < 2) {
          *(undefined4 *)(param_2 + 4) = 0xc;
          iVar1 = 0x1e;
          goto LAB_0077d80c;
        }
        if (uVar2 - 0x20 < 4) {
          *(undefined4 *)(param_2 + 4) = 0xd;
          iVar1 = 0x20;
          goto LAB_0077d80c;
        }
        if (uVar2 - 0x24 < 4) {
          *(undefined4 *)(param_2 + 4) = 0xe;
          iVar1 = 0x24;
          goto LAB_0077d80c;
        }
      }
    }
    else if (uVar2 < 0x30) {
      if (uVar2 - 0x28 < 4) {
        *(undefined4 *)(param_2 + 4) = 0xf;
        iVar1 = 0x28;
        goto LAB_0077d80c;
      }
      if (uVar2 - 0x2c < 4) {
        *(undefined4 *)(param_2 + 4) = 0x10;
        iVar1 = 0x2c;
        goto LAB_0077d80c;
      }
    }
    else {
      if (uVar2 - 0x30 < 4) {
        *(undefined4 *)(param_2 + 4) = 0x11;
        iVar1 = 0x30;
        goto LAB_0077d80c;
      }
      if (uVar2 - 0x34 < 4) {
        *(undefined4 *)(param_2 + 4) = 0x12;
        iVar1 = 0x34;
        goto LAB_0077d80c;
      }
      if (uVar2 - 0x38 < 4) {
        *(undefined4 *)(param_2 + 4) = 0x13;
        iVar1 = 0x38;
        goto LAB_0077d80c;
      }
    }
  }
  else if (uVar2 < 0x61) {
    if (uVar2 == 0x60) {
      *(undefined4 *)(param_2 + 4) = 0x1d;
      iVar1 = 0x60;
      goto LAB_0077d80c;
    }
    if (uVar2 < 0x4c) {
      if (uVar2 - 0x3c < 4) {
        *(undefined4 *)(param_2 + 4) = 0x14;
        iVar1 = 0x3c;
        goto LAB_0077d80c;
      }
      if (uVar2 - 0x40 < 4) {
        *(undefined4 *)(param_2 + 4) = 0x15;
        iVar1 = 0x40;
        goto LAB_0077d80c;
      }
      if (uVar2 - 0x44 < 4) {
        *(undefined4 *)(param_2 + 4) = 0x16;
        iVar1 = 0x44;
        goto LAB_0077d80c;
      }
      if (uVar2 - 0x48 < 4) {
        *(undefined4 *)(param_2 + 4) = 0x17;
        iVar1 = 0x48;
        goto LAB_0077d80c;
      }
    }
    else if (uVar2 < 0x54) {
      if (uVar2 - 0x4c < 4) {
        *(undefined4 *)(param_2 + 4) = 0x18;
        iVar1 = 0x4c;
        goto LAB_0077d80c;
      }
      if (uVar2 - 0x50 < 4) {
        *(undefined4 *)(param_2 + 4) = 0x19;
        iVar1 = 0x50;
        goto LAB_0077d80c;
      }
    }
    else {
      if (uVar2 - 0x54 < 4) {
        *(undefined4 *)(param_2 + 4) = 0x1a;
        iVar1 = 0x54;
        goto LAB_0077d80c;
      }
      if (uVar2 - 0x58 < 4) {
        *(undefined4 *)(param_2 + 4) = 0x1b;
        iVar1 = 0x58;
        goto LAB_0077d80c;
      }
      if (uVar2 - 0x5c < 4) {
        *(undefined4 *)(param_2 + 4) = 0x1c;
        iVar1 = 0x5c;
        goto LAB_0077d80c;
      }
    }
  }
  else if (uVar2 < 0x66) {
    if (uVar2 == 0x65) {
      *(undefined4 *)(param_2 + 4) = 0x22;
      iVar1 = 0x65;
      goto LAB_0077d80c;
    }
    if (uVar2 == 0x61) {
      *(undefined4 *)(param_2 + 4) = 0x1e;
      iVar1 = 0x61;
      goto LAB_0077d80c;
    }
    if (uVar2 == 0x62) {
      *(undefined4 *)(param_2 + 4) = 0x1f;
      iVar1 = 0x62;
      goto LAB_0077d80c;
    }
    if (uVar2 == 99) {
      *(undefined4 *)(param_2 + 4) = 0x20;
      iVar1 = 99;
      goto LAB_0077d80c;
    }
    if (uVar2 == 100) {
      *(undefined4 *)(param_2 + 4) = 0x21;
      iVar1 = 100;
      goto LAB_0077d80c;
    }
  }
  else {
    if (uVar2 == 0x66) {
      *(undefined4 *)(param_2 + 4) = 0x23;
      iVar1 = 0x66;
      goto LAB_0077d80c;
    }
    if (uVar2 == 0x67) {
      *(undefined4 *)(param_2 + 4) = 0x24;
      iVar1 = 0x67;
      goto LAB_0077d80c;
    }
    if (uVar2 == 0x68) {
      *(undefined4 *)(param_2 + 4) = 0x25;
      iVar1 = 0x68;
      goto LAB_0077d80c;
    }
    if (uVar2 == 0x69) {
      *(undefined4 *)(param_2 + 4) = 0x26;
      iVar1 = 0x69;
      goto LAB_0077d80c;
    }
  }
  *(undefined4 *)(param_2 + 4) = 0;
  iVar1 = 0;
LAB_0077d80c:
  *(uint *)(param_2 + 8) = (((uint)param_3 & 0xff) - iVar1) + 1;
  return;
}

