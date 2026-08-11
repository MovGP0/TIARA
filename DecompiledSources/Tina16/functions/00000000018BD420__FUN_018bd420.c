/* Ghidra address: 018bd420 */
/* Ghidra symbol: FUN_018bd420 */


void FUN_018bd420(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 local_38;
  undefined4 local_30;
  int local_2c [3];
  
  local_38 = 0;
  iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x98) + 0x18) + 0x18))();
  iVar3 = 0;
  if (-1 < iVar2 + -1) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x98) + 0x18);
      (**(code **)(*plVar1 + 0x50))(plVar1,iVar3,&local_38,local_2c,&local_30);
      *(int *)(*(longlong *)(param_1 + 0x90) + 0xc) = *(int *)(param_1 + 0x5c) + local_2c[0];
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x90) + 0x18);
      (**(code **)(*plVar1 + 0x28))(plVar1,local_38,local_30);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x98) + 0x18);
      (**(code **)(*plVar1 + 0x38))(plVar1,iVar3);
      FUN_018bd420(param_1);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x98) + 0x18);
      (**(code **)(*plVar1 + 0x48))(plVar1);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x90) + 0x18);
      (**(code **)(*plVar1 + 0x48))(plVar1);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414480(&local_38);
  return;
}

