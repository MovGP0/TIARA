/* Ghidra address: 0077ce80 */
/* Ghidra symbol: FUN_0077ce80 */


void FUN_0077ce80(undefined8 param_1,undefined1 *param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  *param_2 = 0x10;
  uVar2 = param_3 & 0xff;
  if (uVar2 < 8) {
    if (uVar2 == 2) {
      *(undefined4 *)(param_2 + 4) = 1;
      iVar1 = 2;
      goto LAB_0077cf5d;
    }
    if (uVar2 == 3) {
      *(undefined4 *)(param_2 + 4) = 2;
      iVar1 = 3;
      goto LAB_0077cf5d;
    }
    if (uVar2 == 4) {
      *(undefined4 *)(param_2 + 4) = 3;
      iVar1 = 4;
      goto LAB_0077cf5d;
    }
    if (uVar2 - 5 < 3) {
      *(undefined4 *)(param_2 + 4) = 4;
      iVar1 = 5;
      goto LAB_0077cf5d;
    }
  }
  else {
    if (uVar2 - 8 < 3) {
      *(undefined4 *)(param_2 + 4) = 5;
      iVar1 = 8;
      goto LAB_0077cf5d;
    }
    if (uVar2 == 0xb) {
      *(undefined4 *)(param_2 + 4) = 6;
      iVar1 = 0xb;
      goto LAB_0077cf5d;
    }
    if (uVar2 - 0xc < 3) {
      *(undefined4 *)(param_2 + 4) = 7;
      iVar1 = 0xc;
      goto LAB_0077cf5d;
    }
    if (uVar2 - 0xf < 3) {
      *(undefined4 *)(param_2 + 4) = 8;
      iVar1 = 0xf;
      goto LAB_0077cf5d;
    }
  }
  *(undefined4 *)(param_2 + 4) = 0;
  iVar1 = 0;
LAB_0077cf5d:
  *(uint *)(param_2 + 8) = (((uint)param_3 & 0xff) - iVar1) + 1;
  return;
}

