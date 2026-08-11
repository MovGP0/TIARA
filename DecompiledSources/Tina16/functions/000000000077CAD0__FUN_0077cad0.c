/* Ghidra address: 0077cad0 */
/* Ghidra symbol: FUN_0077cad0 */


void FUN_0077cad0(undefined8 param_1,undefined1 *param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  *param_2 = 5;
  uVar2 = param_3 & 0xff;
  if (uVar2 < 0x15) {
    if (uVar2 < 0xe) {
      if (uVar2 - 2 < 3) {
        *(undefined4 *)(param_2 + 4) = 1;
        iVar1 = 2;
        goto LAB_0077cc5e;
      }
      if (uVar2 - 5 < 3) {
        *(undefined4 *)(param_2 + 4) = 2;
        iVar1 = 5;
        goto LAB_0077cc5e;
      }
      if (uVar2 - 8 < 6) {
        *(undefined4 *)(param_2 + 4) = 3;
        iVar1 = 0xb;
        goto LAB_0077cc5e;
      }
    }
    else {
      if (uVar2 - 0xe < 3) {
        *(undefined4 *)(param_2 + 4) = 4;
        iVar1 = 0xe;
        goto LAB_0077cc5e;
      }
      if (uVar2 == 0x11) {
        *(undefined4 *)(param_2 + 4) = 5;
        iVar1 = 0x11;
        goto LAB_0077cc5e;
      }
      if (uVar2 - 0x12 < 3) {
        *(undefined4 *)(param_2 + 4) = 6;
        iVar1 = 0x12;
        goto LAB_0077cc5e;
      }
    }
  }
  else if (uVar2 < 0x1a) {
    if (uVar2 - 0x15 < 3) {
      *(undefined4 *)(param_2 + 4) = 7;
      iVar1 = 0x15;
      goto LAB_0077cc5e;
    }
    if (uVar2 == 0x18) {
      *(undefined4 *)(param_2 + 4) = 8;
      iVar1 = 0x18;
      goto LAB_0077cc5e;
    }
    if (uVar2 == 0x19) {
      *(undefined4 *)(param_2 + 4) = 9;
      iVar1 = 0x19;
      goto LAB_0077cc5e;
    }
  }
  else {
    if (uVar2 - 0x1a < 3) {
      *(undefined4 *)(param_2 + 4) = 10;
      iVar1 = 0x1a;
      goto LAB_0077cc5e;
    }
    if (uVar2 - 0x1d < 3) {
      *(undefined4 *)(param_2 + 4) = 0xb;
      iVar1 = 0x1d;
      goto LAB_0077cc5e;
    }
    if (uVar2 == 0x20) {
      *(undefined4 *)(param_2 + 4) = 0xc;
      iVar1 = 0x20;
      goto LAB_0077cc5e;
    }
  }
  *(undefined4 *)(param_2 + 4) = 0;
  iVar1 = 0;
LAB_0077cc5e:
  *(uint *)(param_2 + 8) = (((uint)param_3 & 0xff) - iVar1) + 1;
  return;
}

