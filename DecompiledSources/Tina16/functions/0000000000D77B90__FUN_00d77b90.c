/* Ghidra address: 00d77b90 */
/* Ghidra symbol: FUN_00d77b90 */


void FUN_00d77b90(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_2;
  iVar2 = *(int *)(param_1 + 0x7c);
  if ((((iVar1 != iVar2) || (param_2[1] != *(int *)(param_1 + 0x80))) ||
      (param_2[2] != iVar2 + *(int *)(param_1 + 0x84))) ||
     (param_2[3] != *(int *)(param_1 + 0x80) + *(int *)(param_1 + 0x88))) {
    *(int *)(param_1 + 0xb0) = iVar2;
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x80);
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0x84);
    *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0x88);
    *(int *)(param_1 + 0x7c) = iVar1;
    iVar2 = param_2[1];
    *(int *)(param_1 + 0x80) = iVar2;
    *(int *)(param_1 + 0x84) = param_2[2] - iVar1;
    *(int *)(param_1 + 0x88) = param_2[3] - iVar2;
    if (*(int *)(param_1 + 0x84) < 0) {
      *(undefined4 *)(param_1 + 0x84) = 0;
    }
    if (*(int *)(param_1 + 0x88) < 0) {
      *(undefined4 *)(param_1 + 0x88) = 0;
    }
    FUN_00d75ef0(param_1);
    *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_1 + 0x7c);
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x80);
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0x84);
    *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0x88);
  }
  return;
}

