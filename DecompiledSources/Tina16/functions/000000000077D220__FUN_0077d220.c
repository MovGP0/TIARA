/* Ghidra address: 0077d220 */
/* Ghidra symbol: FUN_0077d220 */


void FUN_0077d220(undefined8 param_1,undefined1 *param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  *param_2 = 0x1a;
  uVar2 = param_3 & 0xff;
  if (uVar2 < 0x1a) {
    if (uVar2 - 2 < 8) {
      *(undefined4 *)(param_2 + 4) = 1;
      iVar1 = 2;
      goto LAB_0077d2e9;
    }
    if (uVar2 - 10 < 8) {
      *(undefined4 *)(param_2 + 4) = 2;
      iVar1 = 10;
      goto LAB_0077d2e9;
    }
    if (uVar2 - 0x12 < 8) {
      *(undefined4 *)(param_2 + 4) = 3;
      iVar1 = 0x12;
      goto LAB_0077d2e9;
    }
  }
  else {
    if (uVar2 - 0x1a < 8) {
      *(undefined4 *)(param_2 + 4) = 4;
      iVar1 = 0x1a;
      goto LAB_0077d2e9;
    }
    if (uVar2 - 0x22 < 8) {
      *(undefined4 *)(param_2 + 4) = 5;
      iVar1 = 0x22;
      goto LAB_0077d2e9;
    }
    if (uVar2 - 0x2a < 8) {
      *(undefined4 *)(param_2 + 4) = 6;
      iVar1 = 0x2a;
      goto LAB_0077d2e9;
    }
    if (uVar2 - 0x32 < 8) {
      *(undefined4 *)(param_2 + 4) = 7;
      iVar1 = 0x32;
      goto LAB_0077d2e9;
    }
  }
  *(undefined4 *)(param_2 + 4) = 0;
  iVar1 = 0;
LAB_0077d2e9:
  *(uint *)(param_2 + 8) = (((uint)param_3 & 0xff) - iVar1) + 1;
  return;
}

