/* Ghidra address: 0077cc70 */
/* Ghidra symbol: FUN_0077cc70 */


void FUN_0077cc70(undefined8 param_1,undefined1 *param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  *param_2 = 4;
  uVar2 = param_3 & 0xff;
  if (uVar2 < 0x11) {
    if (uVar2 - 2 < 7) {
      *(undefined4 *)(param_2 + 4) = 1;
      iVar1 = 2;
      goto LAB_0077cd77;
    }
    if (uVar2 == 9) {
      *(undefined4 *)(param_2 + 4) = 2;
      iVar1 = 9;
      goto LAB_0077cd77;
    }
    if (uVar2 - 10 < 6) {
      *(undefined4 *)(param_2 + 4) = 3;
      iVar1 = 10;
      goto LAB_0077cd77;
    }
    if (uVar2 == 0x10) {
      *(undefined4 *)(param_2 + 4) = 4;
      iVar1 = 0x10;
      goto LAB_0077cd77;
    }
  }
  else if (uVar2 < 0x19) {
    if (uVar2 - 0x11 < 4) {
      *(undefined4 *)(param_2 + 4) = 5;
      iVar1 = 0x11;
      goto LAB_0077cd77;
    }
    if (uVar2 - 0x15 < 4) {
      *(undefined4 *)(param_2 + 4) = 6;
      iVar1 = 0x15;
      goto LAB_0077cd77;
    }
  }
  else {
    if (uVar2 - 0x19 < 4) {
      *(undefined4 *)(param_2 + 4) = 7;
      iVar1 = 0x19;
      goto LAB_0077cd77;
    }
    if (uVar2 - 0x1d < 4) {
      *(undefined4 *)(param_2 + 4) = 8;
      iVar1 = 0x1d;
      goto LAB_0077cd77;
    }
    if (uVar2 - 0x21 < 4) {
      *(undefined4 *)(param_2 + 4) = 9;
      iVar1 = 0x21;
      goto LAB_0077cd77;
    }
  }
  *(undefined4 *)(param_2 + 4) = 0;
  iVar1 = 0;
LAB_0077cd77:
  *(uint *)(param_2 + 8) = (((uint)param_3 & 0xff) - iVar1) + 1;
  return;
}

