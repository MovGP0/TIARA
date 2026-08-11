/* Ghidra address: 008b8d10 */
/* Ghidra symbol: FUN_008b8d10 */


void FUN_008b8d10(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  
  FUN_008b83c0(param_1);
  if (param_1[3] != 0) {
    uVar3 = *(int *)(param_1[3] + 0x10) - 1;
    while (-1 < (int)uVar3) {
      lVar1 = param_1[3];
      if (*(uint *)(lVar1 + 0x10) <= uVar3) {
        FUN_00594f90();
      }
      lVar1 = *(longlong *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar3 * 8);
      *(undefined8 *)(lVar1 + 0x28) = 0;
      FUN_00599670(param_1[3] + 8,uVar3,5);
      FUN_00410f20(lVar1);
      uVar3 = uVar3 - 1;
      if (*(int *)(param_1[3] + 0x10) <= (int)uVar3) {
        iVar2 = (**(code **)(*param_1 + 0x70))(param_1);
        uVar3 = iVar2 - 1;
      }
    }
  }
  return;
}

