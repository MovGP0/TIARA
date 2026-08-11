/* Ghidra address: 0094bb50 */
/* Ghidra symbol: FUN_0094bb50 */


undefined8 FUN_0094bb50(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  FUN_0094b9e0(param_1);
  local_48 = 0;
  iVar5 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  uVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar1 = *(longlong *)(param_1 + 8);
      if (*(uint *)(lVar1 + 0x10) <= uVar4) {
        FUN_00594f90();
      }
      plVar2 = *(longlong **)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar4 * 8);
      (**(code **)(*plVar2 + 0xe8))(plVar2,local_40);
      iVar3 = FUN_00416420(local_40[0],param_2);
      if (iVar3 == 0) {
        lVar1 = *(longlong *)(param_1 + 8);
        if (*(uint *)(lVar1 + 0x10) <= uVar4) {
          FUN_00594f90();
        }
        local_48 = *(undefined8 *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar4 * 8);
        break;
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00414520(local_40);
  return local_48;
}

