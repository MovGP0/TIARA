/* Ghidra address: 00714e60 */
/* Ghidra symbol: FUN_00714e60 */


void FUN_00714e60(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  
  FUN_00411a80(param_1,param_2);
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10);
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x20);
      uVar4 = *(int *)(lVar1 + 0x10) - 1;
      if (*(uint *)(lVar1 + 0x10) <= uVar4) {
        FUN_00594f90();
      }
      lVar1 = *(longlong *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar4 * 8);
      plVar2 = *(longlong **)(lVar1 + 8);
      (**(code **)(*plVar2 + 0x58))(plVar2);
      FUN_00410f20(lVar1);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_0041b800(param_1 + 0x18);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x28));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x20));
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

