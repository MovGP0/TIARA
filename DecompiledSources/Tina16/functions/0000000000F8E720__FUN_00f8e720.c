/* Ghidra address: 00f8e720 */
/* Ghidra symbol: FUN_00f8e720 */


void FUN_00f8e720(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  iVar2 = (**(code **)(*param_2 + 0x28))();
  iVar3 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*param_2 + 0x18))(param_2,local_30,iVar3);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x4f0);
      (**(code **)(*plVar1 + 0x78))(plVar1,local_30[0]);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414480(local_30);
  return;
}

