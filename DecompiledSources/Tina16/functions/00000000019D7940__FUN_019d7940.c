/* Ghidra address: 019d7940 */
/* Ghidra symbol: FUN_019d7940 */


void FUN_019d7940(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_38 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x90))(*(longlong **)(param_1 + 0x6d0));
  *(longlong **)(param_1 + 0x6d8) = param_2;
  iVar2 = (**(code **)(*param_2 + 0x28))();
  iVar3 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x18))
                (*(longlong **)(param_1 + 0x6d8),&local_38,iVar3);
      FUN_00441920(local_30,local_38);
      (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x78))
                (*(longlong **)(param_1 + 0x6d0),local_30[0]);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4a0);
  (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(param_1 + 0x6d0));
  FUN_00414560(&local_38,2);
  return;
}

