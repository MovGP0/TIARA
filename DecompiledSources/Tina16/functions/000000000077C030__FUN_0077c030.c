/* Ghidra address: 0077c030 */
/* Ghidra symbol: FUN_0077c030 */


void FUN_0077c030(undefined8 param_1,undefined1 *param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  *param_2 = 7;
  uVar2 = param_3 & 0xff;
  if (uVar2 < 0xb) {
    if (uVar2 - 2 < 3) {
      *(undefined4 *)(param_2 + 4) = 1;
      iVar1 = 2;
      goto LAB_0077c0f9;
    }
    if (uVar2 - 5 < 3) {
      *(undefined4 *)(param_2 + 4) = 2;
      iVar1 = 5;
      goto LAB_0077c0f9;
    }
    if (uVar2 - 8 < 3) {
      *(undefined4 *)(param_2 + 4) = 3;
      iVar1 = 8;
      goto LAB_0077c0f9;
    }
  }
  else {
    if (uVar2 - 0xb < 2) {
      *(undefined4 *)(param_2 + 4) = 4;
      iVar1 = 0xb;
      goto LAB_0077c0f9;
    }
    if (uVar2 - 0xd < 3) {
      *(undefined4 *)(param_2 + 4) = 5;
      iVar1 = 0xd;
      goto LAB_0077c0f9;
    }
    if (uVar2 - 0x10 < 3) {
      *(undefined4 *)(param_2 + 4) = 6;
      iVar1 = 0x10;
      goto LAB_0077c0f9;
    }
    if (uVar2 - 0x13 < 2) {
      *(undefined4 *)(param_2 + 4) = 7;
      iVar1 = 0x13;
      goto LAB_0077c0f9;
    }
  }
  *(undefined4 *)(param_2 + 4) = 0;
  iVar1 = 0;
LAB_0077c0f9:
  *(uint *)(param_2 + 8) = (((uint)param_3 & 0xff) - iVar1) + 1;
  return;
}

