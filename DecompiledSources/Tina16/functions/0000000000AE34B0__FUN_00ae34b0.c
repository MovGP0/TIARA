/* Ghidra address: 00ae34b0 */
/* Ghidra symbol: FUN_00ae34b0 */


void FUN_00ae34b0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x48) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x48),iVar2);
      if (*(char *)(lVar1 + 8) == ' ') {
        FUN_00414ad0(param_1 + 0x10,*(undefined8 *)(lVar1 + 0x28));
      }
      else if (*(char *)(lVar1 + 8) == 'R') {
        FUN_00414ad0(param_1 + 0x18,*(undefined8 *)(lVar1 + 0x28));
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00ad4730(param_1);
  return;
}

