/* Ghidra address: 0077cd90 */
/* Ghidra symbol: FUN_0077cd90 */


void FUN_0077cd90(undefined8 param_1,undefined1 *param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  *param_2 = 6;
  uVar2 = param_3 & 0xff;
  if (uVar2 < 0xc) {
    if (uVar2 == 0xb) {
      *(undefined4 *)(param_2 + 4) = 5;
      iVar1 = 0xb;
      goto LAB_0077ce6e;
    }
    if (uVar2 == 2) {
      *(undefined4 *)(param_2 + 4) = 1;
      iVar1 = 2;
      goto LAB_0077ce6e;
    }
    if (uVar2 - 3 < 2) {
      *(undefined4 *)(param_2 + 4) = 2;
      iVar1 = 3;
      goto LAB_0077ce6e;
    }
    if (uVar2 - 5 < 4) {
      *(undefined4 *)(param_2 + 4) = 3;
      iVar1 = 5;
      goto LAB_0077ce6e;
    }
    if (uVar2 - 9 < 2) {
      *(undefined4 *)(param_2 + 4) = 4;
      iVar1 = 9;
      goto LAB_0077ce6e;
    }
  }
  else {
    if (uVar2 == 0xc) {
      *(undefined4 *)(param_2 + 4) = 6;
      iVar1 = 0xc;
      goto LAB_0077ce6e;
    }
    if (uVar2 == 0xd) {
      *(undefined4 *)(param_2 + 4) = 7;
      iVar1 = 0xd;
      goto LAB_0077ce6e;
    }
    if (uVar2 - 0xe < 2) {
      *(undefined4 *)(param_2 + 4) = 8;
      iVar1 = 0xe;
      goto LAB_0077ce6e;
    }
  }
  *(undefined4 *)(param_2 + 4) = 0;
  iVar1 = 0;
LAB_0077ce6e:
  *(uint *)(param_2 + 8) = (((uint)param_3 & 0xff) - iVar1) + 1;
  return;
}

