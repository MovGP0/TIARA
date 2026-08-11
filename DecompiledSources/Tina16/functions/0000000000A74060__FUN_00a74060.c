/* Ghidra address: 00a74060 */
/* Ghidra symbol: FUN_00a74060 */


void FUN_00a74060(longlong param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  *param_2 = -1;
  iVar2 = 0;
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10);
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_00a78410(*(undefined8 *)(param_1 + 0x18),iVar2);
      if ((*(longlong *)(lVar1 + 0x18) == 0) && (*param_2 < *(int *)(lVar1 + 0x10))) {
        *param_2 = *(int *)(lVar1 + 0x10);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *param_3 = -1;
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_00a78410(*(undefined8 *)(param_1 + 0x20),iVar2);
      if ((*(longlong *)(lVar1 + 0x18) == 0) && (*param_3 < *(int *)(lVar1 + 0x10))) {
        *param_3 = *(int *)(lVar1 + 0x10);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *param_2 = *param_2 + 1;
  *param_3 = *param_3 + 1;
  return;
}

