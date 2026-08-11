/* Ghidra address: 004d2dc0 */
/* Ghidra symbol: FUN_004d2dc0 */


void FUN_004d2dc0(longlong param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  
  if (((char)param_3 == '\x01') && (param_2 != 0)) {
    FUN_004d2d90(param_1,param_2);
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    uVar4 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10) - 1;
    while (-1 < (int)uVar4) {
      lVar2 = *(longlong *)(param_1 + 0x20);
      if (*(uint *)(lVar2 + 0x10) <= uVar4) {
        FUN_00594f90();
      }
      plVar3 = *(longlong **)(*(longlong *)(lVar2 + 8) + (longlong)(int)uVar4 * 8);
      (**(code **)(*plVar3 + 0x28))(plVar3,param_2,param_3);
      uVar4 = uVar4 - 1;
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10);
      if (iVar1 <= (int)uVar4) {
        uVar4 = iVar1 - 1;
      }
    }
  }
  return;
}

