/* Ghidra address: 0094bc50 */
/* Ghidra symbol: FUN_0094bc50 */


undefined8 FUN_0094bc50(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_48 = 0;
  local_40[0] = 0;
  FUN_0094b880(param_1);
  local_50 = 0;
  iVar6 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  uVar4 = 0;
  if (-1 < iVar6 + -1) {
    do {
      lVar1 = *(longlong *)(param_1 + 8);
      if (*(uint *)(lVar1 + 0x10) <= uVar4) {
        FUN_00594f90();
      }
      lVar5 = (longlong)(int)uVar4;
      plVar2 = *(longlong **)(*(longlong *)(lVar1 + 8) + lVar5 * 8);
      (**(code **)(*plVar2 + 0x150))(plVar2,local_40);
      iVar3 = FUN_00416420(local_40[0],param_2);
      if (iVar3 == 0) {
        lVar1 = *(longlong *)(param_1 + 8);
        if (*(uint *)(lVar1 + 0x10) <= uVar4) {
          FUN_00594f90();
        }
        plVar2 = *(longlong **)(*(longlong *)(lVar1 + 8) + lVar5 * 8);
        (**(code **)(*plVar2 + 0x148))(plVar2,&local_48);
        iVar3 = FUN_00416420(local_48,param_3);
        if (iVar3 == 0) {
          lVar1 = *(longlong *)(param_1 + 8);
          if (*(uint *)(lVar1 + 0x10) <= uVar4) {
            FUN_00594f90();
          }
          local_50 = *(undefined8 *)(*(longlong *)(lVar1 + 8) + lVar5 * 8);
          break;
        }
      }
      uVar4 = uVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_004145c0(&local_48,2);
  return local_50;
}

