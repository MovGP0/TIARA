/* Ghidra address: 0077c410 */
/* Ghidra symbol: FUN_0077c410 */


void FUN_0077c410(undefined8 param_1,undefined1 *param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  *param_2 = 0xc;
  uVar2 = param_3 & 0xff;
  if (uVar2 < 0xb) {
    if (uVar2 < 5) {
      if (uVar2 == 4) {
        *(undefined4 *)(param_2 + 4) = 3;
        iVar1 = 4;
        goto LAB_0077c57c;
      }
      if (uVar2 == 2) {
        *(undefined4 *)(param_2 + 4) = 1;
        iVar1 = 2;
        goto LAB_0077c57c;
      }
      if (uVar2 == 3) {
        *(undefined4 *)(param_2 + 4) = 2;
        iVar1 = 3;
        goto LAB_0077c57c;
      }
    }
    else {
      if (uVar2 == 5) {
        *(undefined4 *)(param_2 + 4) = 4;
        iVar1 = 5;
        goto LAB_0077c57c;
      }
      if (uVar2 - 6 < 5) {
        *(undefined4 *)(param_2 + 4) = 5;
        iVar1 = 6;
        goto LAB_0077c57c;
      }
    }
  }
  else if (uVar2 < 0x16) {
    if (uVar2 - 0xb < 4) {
      *(undefined4 *)(param_2 + 4) = 6;
      iVar1 = 0xb;
      goto LAB_0077c57c;
    }
    if (uVar2 - 0xf < 3) {
      *(undefined4 *)(param_2 + 4) = 7;
      iVar1 = 0xf;
      goto LAB_0077c57c;
    }
    if (uVar2 - 0x12 < 4) {
      *(undefined4 *)(param_2 + 4) = 8;
      iVar1 = 0x12;
      goto LAB_0077c57c;
    }
  }
  else {
    if (uVar2 - 0x16 < 3) {
      *(undefined4 *)(param_2 + 4) = 9;
      iVar1 = 0x16;
      goto LAB_0077c57c;
    }
    if (uVar2 - 0x19 < 4) {
      *(undefined4 *)(param_2 + 4) = 10;
      iVar1 = 0x19;
      goto LAB_0077c57c;
    }
    if (uVar2 - 0x1d < 4) {
      *(undefined4 *)(param_2 + 4) = 0xb;
      iVar1 = 0x1d;
      goto LAB_0077c57c;
    }
  }
  *(undefined4 *)(param_2 + 4) = 0;
  iVar1 = 0;
LAB_0077c57c:
  *(uint *)(param_2 + 8) = (((uint)param_3 & 0xff) - iVar1) + 1;
  return;
}

