/* Ghidra address: 0077e430 */
/* Ghidra symbol: FUN_0077e430 */


void FUN_0077e430(undefined8 param_1,undefined1 *param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  *param_2 = 0x19;
  uVar2 = param_3 & 0xff;
  if (uVar2 < 7) {
    if (uVar2 == 6) {
      *(undefined4 *)(param_2 + 4) = 5;
      iVar1 = 6;
      goto LAB_0077e527;
    }
    if (uVar2 == 2) {
      *(undefined4 *)(param_2 + 4) = 1;
      iVar1 = 2;
      goto LAB_0077e527;
    }
    if (uVar2 == 3) {
      *(undefined4 *)(param_2 + 4) = 2;
      iVar1 = 3;
      goto LAB_0077e527;
    }
    if (uVar2 == 4) {
      *(undefined4 *)(param_2 + 4) = 3;
      iVar1 = 4;
      goto LAB_0077e527;
    }
    if (uVar2 == 5) {
      *(undefined4 *)(param_2 + 4) = 4;
      iVar1 = 5;
      goto LAB_0077e527;
    }
  }
  else {
    if (uVar2 - 7 < 4) {
      *(undefined4 *)(param_2 + 4) = 6;
      iVar1 = 7;
      goto LAB_0077e527;
    }
    if (uVar2 == 0xb) {
      *(undefined4 *)(param_2 + 4) = 7;
      iVar1 = 0xb;
      goto LAB_0077e527;
    }
    if (uVar2 == 0xc) {
      *(undefined4 *)(param_2 + 4) = 8;
      iVar1 = 0xc;
      goto LAB_0077e527;
    }
    if (uVar2 - 0xd < 2) {
      *(undefined4 *)(param_2 + 4) = 9;
      iVar1 = 0xd;
      goto LAB_0077e527;
    }
  }
  *(undefined4 *)(param_2 + 4) = 0;
  iVar1 = 0;
LAB_0077e527:
  *(uint *)(param_2 + 8) = (((uint)param_3 & 0xff) - iVar1) + 1;
  return;
}

