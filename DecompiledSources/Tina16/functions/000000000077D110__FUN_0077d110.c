/* Ghidra address: 0077d110 */
/* Ghidra symbol: FUN_0077d110 */


void FUN_0077d110(undefined8 param_1,undefined1 *param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  *param_2 = 0x1b;
  uVar2 = param_3 & 0xff;
  if (uVar2 < 0xb) {
    if (uVar2 == 10) {
      *(undefined4 *)(param_2 + 4) = 6;
      iVar1 = 1;
      goto LAB_0077d20c;
    }
    if (uVar2 - 2 < 2) {
      *(undefined4 *)(param_2 + 4) = 1;
      iVar1 = 2;
      goto LAB_0077d20c;
    }
    if (uVar2 - 4 < 2) {
      *(undefined4 *)(param_2 + 4) = 2;
      iVar1 = 4;
      goto LAB_0077d20c;
    }
    if (uVar2 - 6 < 2) {
      *(undefined4 *)(param_2 + 4) = 3;
      iVar1 = 6;
      goto LAB_0077d20c;
    }
    if (uVar2 - 8 < 2) {
      *(undefined4 *)(param_2 + 4) = 4;
      iVar1 = 8;
      goto LAB_0077d20c;
    }
  }
  else {
    if (uVar2 == 0xb) {
      *(undefined4 *)(param_2 + 4) = 6;
      iVar1 = 6;
      goto LAB_0077d20c;
    }
    if (uVar2 - 0xc < 3) {
      *(undefined4 *)(param_2 + 4) = 5;
      iVar1 = 0xc;
      goto LAB_0077d20c;
    }
    if (uVar2 - 0xf < 6) {
      *(undefined4 *)(param_2 + 4) = 6;
      iVar1 = 0xf;
      goto LAB_0077d20c;
    }
    if (uVar2 - 0x15 < 3) {
      *(undefined4 *)(param_2 + 4) = 7;
      iVar1 = 0x15;
      goto LAB_0077d20c;
    }
  }
  *(undefined4 *)(param_2 + 4) = 0;
  iVar1 = 0;
LAB_0077d20c:
  *(uint *)(param_2 + 8) = (((uint)param_3 & 0xff) - iVar1) + 1;
  return;
}

