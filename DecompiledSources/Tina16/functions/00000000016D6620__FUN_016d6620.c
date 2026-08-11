/* Ghidra address: 016d6620 */
/* Ghidra symbol: FUN_016d6620 */


undefined4 FUN_016d6620(longlong param_1,longlong param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  
  iVar4 = *param_3 / 2;
  iVar2 = 0;
  if (iVar4 - 1U < 0x80000000) {
    do {
      lVar1 = *(longlong *)(param_1 + 8);
      if ((*(int *)(lVar1 + 0x2c) == *(int *)(lVar1 + 0x28)) || (*(char *)(lVar1 + 0x3c) != '\0')) {
        uVar3 = 0;
        *(undefined1 *)(lVar1 + 0x3c) = 1;
      }
      else {
        uVar3 = *(undefined2 *)(*(longlong *)(lVar1 + 0x40) + (longlong)*(int *)(lVar1 + 0x2c) * 2);
        *(int *)(lVar1 + 0x2c) = *(int *)(lVar1 + 0x2c) + 1;
        lVar1 = *(longlong *)(param_1 + 8);
        if (*(int *)(lVar1 + 0x2c) == *(int *)(lVar1 + 0x38)) {
          *(undefined4 *)(lVar1 + 0x2c) = 0;
        }
      }
      *(undefined2 *)(param_2 + (longlong)iVar2 * 2) = uVar3;
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return 1;
}

