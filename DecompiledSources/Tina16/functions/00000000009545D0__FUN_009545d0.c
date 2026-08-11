/* Ghidra address: 009545d0 */
/* Ghidra symbol: FUN_009545d0 */


void FUN_009545d0(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  
  FUN_00411a80(param_1,param_2);
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x80) + 0x10);
  uVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x80);
      if (*(uint *)(lVar1 + 0x10) <= uVar2) {
        FUN_00594f90();
      }
      FUN_00410f20(*(undefined8 *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar2 * 8));
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x80));
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x88) + 0x10);
  uVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x88);
      if (*(uint *)(lVar1 + 0x10) <= uVar2) {
        FUN_00594f90();
      }
      FUN_00410f20(*(undefined8 *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar2 * 8));
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x88));
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_00949110(*(longlong *)(param_1 + 0xa0),param_1);
  }
  FUN_0094c630(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

