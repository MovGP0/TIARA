/* Ghidra address: 013ca8c0 */
/* Ghidra symbol: FUN_013ca8c0 */


void FUN_013ca8c0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  (**(code **)(*(longlong *)*param_3 + 0x90))((longlong *)*param_3);
  if (param_2 != 0) {
    iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x7e0) + 0x4a0) + 0x28))();
    iVar5 = 0;
    if (-1 < iVar2 + -1) {
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7e0) + 0x4a0);
        uVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar5);
        iVar3 = (**(code **)(**(longlong **)(param_2 + 8) + 0x48))
                          (*(longlong **)(param_2 + 8),uVar4);
        if (iVar3 != -1) {
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7e0) + 0x4a0);
          (**(code **)(*plVar1 + 0x18))(plVar1,local_30,iVar5);
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7e0) + 0x4a0);
          uVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar5);
          (**(code **)(*(longlong *)*param_3 + 0x80))((longlong *)*param_3,local_30[0],uVar4);
        }
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_00414480(local_30);
  return;
}

