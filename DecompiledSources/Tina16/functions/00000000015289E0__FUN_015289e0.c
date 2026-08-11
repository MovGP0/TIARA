/* Ghidra address: 015289e0 */
/* Ghidra symbol: FUN_015289e0 */


void FUN_015289e0(undefined8 param_1,longlong param_2,double param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(param_2 + 0x30) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x30),iVar2);
      if ((*(double *)(lVar1 + 8) != param_3) && (*(longlong *)(lVar1 + 0x10) != 0)) {
        **(undefined8 **)(lVar1 + 0x10) = 0;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

