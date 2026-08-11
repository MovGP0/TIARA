/* Ghidra address: 0077cfb0 */
/* Ghidra symbol: FUN_0077cfb0 */


void FUN_0077cfb0(undefined8 param_1,undefined1 *param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  *param_2 = 0x1c;
  uVar2 = param_3 & 0xff;
  if (uVar2 < 0x13) {
    if (uVar2 < 4) {
      if (uVar2 == 2) {
        *(undefined4 *)(param_2 + 4) = 1;
        iVar1 = 2;
        goto LAB_0077d100;
      }
      if (uVar2 == 3) {
        *(undefined4 *)(param_2 + 4) = 2;
        iVar1 = 3;
        goto LAB_0077d100;
      }
    }
    else {
      if (uVar2 - 4 < 5) {
        *(undefined4 *)(param_2 + 4) = 3;
        iVar1 = 4;
        goto LAB_0077d100;
      }
      if (uVar2 - 9 < 5) {
        *(undefined4 *)(param_2 + 4) = 4;
        iVar1 = 9;
        goto LAB_0077d100;
      }
      if (uVar2 - 0xe < 5) {
        *(undefined4 *)(param_2 + 4) = 5;
        iVar1 = 0xe;
        goto LAB_0077d100;
      }
    }
  }
  else if (uVar2 < 0x1d) {
    if (uVar2 - 0x13 < 5) {
      *(undefined4 *)(param_2 + 4) = 6;
      iVar1 = 0x13;
      goto LAB_0077d100;
    }
    if (uVar2 - 0x18 < 5) {
      *(undefined4 *)(param_2 + 4) = 7;
      iVar1 = 0x18;
      goto LAB_0077d100;
    }
  }
  else {
    if (uVar2 - 0x1d < 5) {
      *(undefined4 *)(param_2 + 4) = 8;
      iVar1 = 0x1d;
      goto LAB_0077d100;
    }
    if (uVar2 == 0x22) {
      *(undefined4 *)(param_2 + 4) = 9;
      iVar1 = 0x22;
      goto LAB_0077d100;
    }
    if (uVar2 == 0x23) {
      *(undefined4 *)(param_2 + 4) = 10;
      iVar1 = 0x23;
      goto LAB_0077d100;
    }
  }
  *(undefined4 *)(param_2 + 4) = 0;
  iVar1 = 0;
LAB_0077d100:
  *(uint *)(param_2 + 8) = (((uint)param_3 & 0xff) - iVar1) + 1;
  return;
}

