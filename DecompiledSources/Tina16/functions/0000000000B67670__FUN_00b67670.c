/* Ghidra address: 00b67670 */
/* Ghidra symbol: FUN_00b67670 */


void FUN_00b67670(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = 0;
  for (iVar2 = *(int *)(param_1 + 0x20); 0 < iVar2; iVar2 = iVar2 - iVar3) {
    if (0x2020 - *(int *)(param_1 + 0x24) < 4) {
      FUN_00b67610(param_1);
      FUN_00b62ce0(*(undefined8 *)(param_1 + 0x60),0x3c);
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0x30);
      FUN_00b62ce0(*(undefined8 *)(param_1 + 0x60),0);
      if (iVar5 < 1) {
        *(undefined4 *)(param_1 + 0x24) = 0;
      }
      else {
        FUN_00b62d20(*(undefined8 *)(param_1 + 0x60),param_1 + 0x3f,1);
        *(undefined4 *)(param_1 + 0x24) = 1;
      }
    }
    iVar3 = 0x2020 - *(int *)(param_1 + 0x24);
    if (iVar2 <= iVar3) {
      iVar3 = iVar2;
    }
    if ((*(char *)(param_1 + 0x3f) != '\0') && ((iVar3 + iVar5 & 1U) == 0)) {
      iVar3 = iVar3 + -1;
    }
    lVar1 = FUN_00414df0(param_1 + 0x30);
    FUN_00b62d20(*(undefined8 *)(param_1 + 0x60),lVar1 + -1 + (longlong)(iVar4 + 1),iVar3);
    iVar5 = iVar5 + iVar3;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + iVar3;
    iVar4 = iVar4 + iVar3;
  }
  return;
}

