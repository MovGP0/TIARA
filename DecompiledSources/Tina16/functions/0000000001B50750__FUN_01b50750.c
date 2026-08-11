/* Ghidra address: 01b50750 */
/* Ghidra symbol: FUN_01b50750 */


undefined8 FUN_01b50750(longlong param_1,int param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = 0;
  iVar3 = *(int *)(param_1 + 0x14a0);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      if (((*(int *)(param_1 + 0x68 + (longlong)iVar2 * 0x20) == param_2) &&
          (*(int *)(param_1 + 0x6c + (longlong)iVar2 * 0x20) == param_3)) ||
         ((*(int *)(param_1 + 0x6c + (longlong)iVar2 * 0x20) == param_2 &&
          (*(int *)(param_1 + 0x68 + (longlong)iVar2 * 0x20) == param_3)))) {
        FUN_00414ad0(param_4,*(undefined8 *)(param_1 + 0x60 + (longlong)iVar2 * 0x20));
        uVar1 = 1;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return uVar1;
}

