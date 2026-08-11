/* Ghidra address: 0077c850 */
/* Ghidra symbol: FUN_0077c850 */


void FUN_0077c850(undefined8 param_1,undefined1 *param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  *param_2 = 0;
  uVar2 = param_3 & 0xff;
  if (uVar2 < 0x24) {
    if (uVar2 - 2 < 6) {
      *(undefined4 *)(param_2 + 4) = 1;
      iVar1 = 2;
      goto LAB_0077c918;
    }
    if (uVar2 - 8 < 8) {
      *(undefined4 *)(param_2 + 4) = 2;
      iVar1 = 8;
      goto LAB_0077c918;
    }
    if (uVar2 - 0x10 < 0x14) {
      *(undefined4 *)(param_2 + 4) = 3;
      iVar1 = 0x10;
      goto LAB_0077c918;
    }
  }
  else {
    if (uVar2 - 0x24 < 2) {
      *(undefined4 *)(param_2 + 4) = 4;
      iVar1 = 0x24;
      goto LAB_0077c918;
    }
    if (uVar2 == 0x26) {
      *(undefined4 *)(param_2 + 4) = 5;
      iVar1 = 0x26;
      goto LAB_0077c918;
    }
    if (uVar2 - 0x27 < 6) {
      *(undefined4 *)(param_2 + 4) = 6;
      iVar1 = 0x27;
      goto LAB_0077c918;
    }
    if (uVar2 - 0x2d < 5) {
      *(undefined4 *)(param_2 + 4) = 7;
      iVar1 = 0x2d;
      goto LAB_0077c918;
    }
  }
  *(undefined4 *)(param_2 + 4) = 0;
  iVar1 = 0;
LAB_0077c918:
  *(uint *)(param_2 + 8) = (((uint)param_3 & 0xff) - iVar1) + 1;
  return;
}

