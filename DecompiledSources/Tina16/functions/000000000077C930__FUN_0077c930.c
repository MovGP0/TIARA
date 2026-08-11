/* Ghidra address: 0077c930 */
/* Ghidra symbol: FUN_0077c930 */


void FUN_0077c930(undefined8 param_1,undefined1 *param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  *param_2 = 2;
  uVar2 = param_3 & 0xff;
  if (uVar2 < 0xf) {
    if (uVar2 - 2 < 4) {
      *(undefined4 *)(param_2 + 4) = 1;
      iVar1 = 2;
      goto LAB_0077ca10;
    }
    if (uVar2 == 6) {
      *(undefined4 *)(param_2 + 4) = 2;
      iVar1 = 6;
      goto LAB_0077ca10;
    }
    if (uVar2 - 7 < 4) {
      *(undefined4 *)(param_2 + 4) = 3;
      iVar1 = 7;
      goto LAB_0077ca10;
    }
    if (uVar2 - 0xb < 4) {
      *(undefined4 *)(param_2 + 4) = 4;
      iVar1 = 0xb;
      goto LAB_0077ca10;
    }
  }
  else {
    if (uVar2 - 0xf < 4) {
      *(undefined4 *)(param_2 + 4) = 5;
      iVar1 = 0xf;
      goto LAB_0077ca10;
    }
    if (uVar2 - 0x13 < 4) {
      *(undefined4 *)(param_2 + 4) = 6;
      iVar1 = 0x13;
      goto LAB_0077ca10;
    }
    if (uVar2 - 0x17 < 4) {
      *(undefined4 *)(param_2 + 4) = 7;
      iVar1 = 0x17;
      goto LAB_0077ca10;
    }
    if (uVar2 - 0x1b < 4) {
      *(undefined4 *)(param_2 + 4) = 8;
      iVar1 = 0x1b;
      goto LAB_0077ca10;
    }
  }
  *(undefined4 *)(param_2 + 4) = 0;
  iVar1 = 0;
LAB_0077ca10:
  *(uint *)(param_2 + 8) = (((uint)param_3 & 0xff) - iVar1) + 1;
  return;
}

