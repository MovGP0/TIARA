/* Ghidra address: 017d9ab0 */
/* Ghidra symbol: FUN_017d9ab0 */


void FUN_017d9ab0(longlong param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  longlong lVar3;
  int iVar4;
  
  if (param_2 != *(char *)(param_1 + 0x91)) {
    *(char *)(param_1 + 0x90) = param_2;
    *(char *)(param_1 + 0x91) = param_2;
    if ((*(char *)(param_1 + 0x18) == '\0') && (*(char *)(param_1 + 0x90) == '\0')) {
      *(undefined4 *)(param_1 + 0x98) = 0;
      iVar4 = *(int *)(param_1 + 8) + -1;
      iVar1 = 1;
      if (0 < iVar4) {
        do {
          lVar3 = (longlong)iVar1;
          uVar2 = (undefined2)iVar1;
          *(undefined2 *)(*(longlong *)(param_1 + 0x68) + lVar3 * 2) = uVar2;
          *(undefined2 *)(*(longlong *)(param_1 + 0x70) + lVar3 * 2) = uVar2;
          *(undefined2 *)(*(longlong *)(param_1 + 0x78) + lVar3 * 2) = uVar2;
          *(undefined2 *)(*(longlong *)(param_1 + 0x80) + lVar3 * 2) = uVar2;
          iVar1 = iVar1 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
  }
  return;
}

