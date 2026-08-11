/* Ghidra address: 00bac7a0 */
/* Ghidra symbol: FUN_00bac7a0 */


void FUN_00bac7a0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    iVar4 = *(int *)(param_2 + -4);
  }
  iVar3 = 0;
  if (**(longlong **)(param_1 + 0x60) != 0) {
    iVar3 = *(int *)(**(longlong **)(param_1 + 0x60) + -4);
  }
  if (iVar3 <= *(int *)(param_1 + 0x2c) + iVar4) {
    uVar1 = 0;
    if (param_2 != 0) {
      uVar1 = *(undefined4 *)(param_2 + -4);
    }
    FUN_00bac750(param_1,uVar1);
  }
  iVar4 = 0;
  if (param_2 != 0) {
    iVar4 = *(int *)(param_2 + -4);
  }
  iVar3 = 1;
  if (0 < iVar4) {
    do {
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      lVar2 = FUN_00414de0(*(undefined8 *)(param_1 + 0x60));
      *(undefined2 *)(lVar2 + -2 + (longlong)*(int *)(param_1 + 0x2c) * 2) =
           *(undefined2 *)(param_2 + -2 + (longlong)iVar3 * 2);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

