/* Ghidra address: 016af040 */
/* Ghidra symbol: FUN_016af040 */


void FUN_016af040(longlong param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  longlong lVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  
  FUN_016aefe0(param_1,param_2);
  while (cVar3 = FUN_016aefd0(param_1), cVar3 == '\0') {
    iVar4 = FUN_016af010(param_1);
    if ((param_4 != '\x0e') || (iVar4 != 0)) {
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      lVar1 = *(longlong *)(param_1 + 0x28);
      lVar5 = (longlong)iVar4;
      *(undefined4 *)(lVar1 + lVar5 * 8) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(lVar1 + 4 + lVar5 * 8) = param_3;
      for (piVar2 = *(int **)(*(longlong *)(param_1 + 8) + lVar5 * 8); piVar2 != (int *)0x0;
          piVar2 = *(int **)(piVar2 + 2)) {
        if (*(int *)(*(longlong *)(param_1 + 0x28) + (longlong)*piVar2 * 8) == 0) {
          FUN_016aefe0(param_1,*piVar2);
          *(undefined4 *)(*(longlong *)(param_1 + 0x28) + (longlong)*piVar2 * 8) = 0xffffffff;
        }
      }
    }
  }
  return;
}

