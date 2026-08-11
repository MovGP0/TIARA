/* Ghidra address: 016f8d90 */
/* Ghidra symbol: FUN_016f8d90 */


void FUN_016f8d90(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  FUN_01cc47e0(uVar1);
  for (uVar3 = 0; (int)uVar3 < *(int *)(param_1 + 0x691); uVar3 = uVar3 + 1) {
    lVar2 = *(longlong *)(param_1 + 0x4f0);
    if (*(uint *)(lVar2 + 0x10) <= uVar3) {
      FUN_00594f90();
    }
    if (**(char **)(*(longlong *)(lVar2 + 8) + (longlong)(int)uVar3 * 8) != '\0') {
      lVar2 = *(longlong *)(param_1 + 0x4f0);
      if (*(uint *)(lVar2 + 0x10) <= uVar3) {
        FUN_00594f90();
      }
      uVar4 = FUN_017c83b0(param_1,*(undefined8 *)
                                    (*(longlong *)(lVar2 + 8) + (longlong)(int)uVar3 * 8));
      FUN_01cc4e50(uVar1,uVar3,param_3,uVar4);
    }
  }
  return;
}

