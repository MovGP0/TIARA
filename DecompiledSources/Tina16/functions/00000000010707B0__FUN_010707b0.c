/* Ghidra address: 010707b0 */
/* Ghidra symbol: FUN_010707b0 */


void FUN_010707b0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x6b8) + 0x4a0) + 0x28))();
  iVar3 = 0;
  if (-1 < iVar2 + -1) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b8) + 0x4a0);
      (**(code **)(*plVar1 + 0x18))(plVar1,local_30,iVar3);
      (**(code **)(**(longlong **)(param_1 + 0x730) + 0x78))
                (*(longlong **)(param_1 + 0x730),local_30[0]);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_004b37d0(*(undefined8 *)(param_1 + 0x730),&local_38);
  FUN_00414ad0(*(longlong *)(param_1 + 0x728) + 0x78,local_38);
  iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4a0) + 0x28))();
  iVar3 = 0;
  if (-1 < iVar2 + -1) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4a0);
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_40,iVar3);
      (**(code **)(**(longlong **)(param_1 + 0x738) + 0x78))
                (*(longlong **)(param_1 + 0x738),local_40);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_004b37d0(*(undefined8 *)(param_1 + 0x738),&local_48);
  FUN_00414ad0(*(longlong *)(param_1 + 0x728) + 0x80,local_48);
  FUN_00414560(&local_48,4);
  return;
}

