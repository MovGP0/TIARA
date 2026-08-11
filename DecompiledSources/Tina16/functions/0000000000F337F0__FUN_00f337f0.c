/* Ghidra address: 00f337f0 */
/* Ghidra symbol: FUN_00f337f0 */


int FUN_00f337f0(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_res18;
  
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  local_res18 = param_3 + 1;
  uVar3 = (ulonglong)param_3;
  if ((param_2 == 0) || (*(ulonglong *)(param_2 + -8) <= uVar3)) {
    uVar3 = FUN_00410a90();
  }
  *(undefined1 *)(param_2 + uVar3) = 0x5b;
  if (0 < iVar5) {
    lVar1 = *(longlong *)(param_1 + 0x10);
    if (*(int *)(lVar1 + 0x10) == 0) {
      FUN_00594f90();
    }
    plVar2 = (longlong *)**(undefined8 **)(lVar1 + 8);
    local_res18 = (**(code **)(*plVar2 + 0x28))(plVar2,param_2,local_res18);
  }
  iVar5 = iVar5 + -1;
  uVar4 = 1;
  if (0 < iVar5) {
    do {
      uVar3 = (ulonglong)local_res18;
      if ((param_2 == 0) || (*(ulonglong *)(param_2 + -8) <= uVar3)) {
        uVar3 = FUN_00410a90();
      }
      *(undefined1 *)(param_2 + uVar3) = 0x2c;
      lVar1 = *(longlong *)(param_1 + 0x10);
      if (*(uint *)(lVar1 + 0x10) <= uVar4) {
        FUN_00594f90();
      }
      plVar2 = *(longlong **)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar4 * 8);
      local_res18 = (**(code **)(*plVar2 + 0x28))(plVar2,param_2,local_res18 + 1);
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  uVar3 = (ulonglong)local_res18;
  if ((param_2 == 0) || (*(ulonglong *)(param_2 + -8) <= uVar3)) {
    uVar3 = FUN_00410a90();
  }
  *(undefined1 *)(param_2 + uVar3) = 0x5d;
  return local_res18 + 1;
}

