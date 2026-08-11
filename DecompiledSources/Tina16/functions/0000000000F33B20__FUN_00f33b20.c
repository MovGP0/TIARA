/* Ghidra address: 00f33b20 */
/* Ghidra symbol: FUN_00f33b20 */


undefined8 FUN_00f33b20(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  
  uVar3 = FUN_00f33100(&LAB_00f256b8,1);
  iVar6 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  uVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x10);
      if (*(uint *)(lVar1 + 0x10) <= uVar5) {
        FUN_00594f90();
      }
      plVar2 = *(longlong **)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar5 * 8);
      uVar4 = (**(code **)(*plVar2 + 0x38))(plVar2);
      FUN_00f335b0(uVar3,uVar4);
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return uVar3;
}

