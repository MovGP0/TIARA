/* Ghidra address: 004d2640 */
/* Ghidra symbol: FUN_004d2640 */


void FUN_004d2640(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    while ((lVar2 = *(longlong *)(param_1 + 0x28), lVar2 != 0 && (0 < *(int *)(lVar2 + 0x10)))) {
      uVar4 = *(int *)(lVar2 + 0x10) - 1;
      if (*(uint *)(lVar2 + 0x10) <= uVar4) {
        FUN_00594f90();
      }
      plVar1 = *(longlong **)(*(longlong *)(lVar2 + 8) + (longlong)(int)uVar4 * 8);
      (**(code **)(*plVar1 + 0x28))(plVar1,param_1,1);
    }
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    FUN_00410f20(uVar3);
  }
  return;
}

