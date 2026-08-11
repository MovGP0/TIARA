/* Ghidra address: 0077e2b0 */
/* Ghidra symbol: FUN_0077e2b0 */


void FUN_0077e2b0(undefined8 param_1,undefined1 *param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  *param_2 = 0x15;
  uVar2 = param_3 & 0xff;
  if (uVar2 < 0x1b) {
    if (uVar2 < 0xc) {
      if (uVar2 - 2 < 5) {
        *(undefined4 *)(param_2 + 4) = 1;
        iVar1 = 2;
        goto LAB_0077e41d;
      }
      if (uVar2 - 7 < 5) {
        *(undefined4 *)(param_2 + 4) = 2;
        iVar1 = 7;
        goto LAB_0077e41d;
      }
    }
    else {
      if (uVar2 - 0xc < 5) {
        *(undefined4 *)(param_2 + 4) = 3;
        iVar1 = 0xc;
        goto LAB_0077e41d;
      }
      if (uVar2 - 0x11 < 5) {
        *(undefined4 *)(param_2 + 4) = 4;
        iVar1 = 0x11;
        goto LAB_0077e41d;
      }
      if (uVar2 - 0x16 < 5) {
        *(undefined4 *)(param_2 + 4) = 5;
        iVar1 = 0x16;
        goto LAB_0077e41d;
      }
    }
  }
  else if (uVar2 < 0x2b) {
    if (uVar2 == 0x2a) {
      *(undefined4 *)(param_2 + 4) = 9;
      iVar1 = 0x2a;
      goto LAB_0077e41d;
    }
    if (uVar2 - 0x1b < 5) {
      *(undefined4 *)(param_2 + 4) = 6;
      iVar1 = 0x1b;
      goto LAB_0077e41d;
    }
    if (uVar2 - 0x20 < 5) {
      *(undefined4 *)(param_2 + 4) = 7;
      iVar1 = 0x20;
      goto LAB_0077e41d;
    }
    if (uVar2 - 0x25 < 5) {
      *(undefined4 *)(param_2 + 4) = 8;
      iVar1 = 0x25;
      goto LAB_0077e41d;
    }
  }
  else {
    if (uVar2 == 0x2b) {
      *(undefined4 *)(param_2 + 4) = 10;
      iVar1 = 0x2b;
      goto LAB_0077e41d;
    }
    if (uVar2 == 0x2c) {
      *(undefined4 *)(param_2 + 4) = 0xb;
      iVar1 = 0x2c;
      goto LAB_0077e41d;
    }
  }
  *(undefined4 *)(param_2 + 4) = 0;
  iVar1 = 0;
LAB_0077e41d:
  *(uint *)(param_2 + 8) = (((uint)param_3 & 0xff) - iVar1) + 1;
  return;
}

