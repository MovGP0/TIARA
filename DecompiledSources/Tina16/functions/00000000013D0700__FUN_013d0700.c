/* Ghidra address: 013d0700 */
/* Ghidra symbol: FUN_013d0700 */


int FUN_013d0700(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_2c;
  longlong local_20;
  
  local_20 = 0;
  local_2c = -1;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x838) + 0x4e8);
  iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
  iVar3 = iVar3 + -1;
  iVar2 = local_2c;
  if (-1 < iVar3) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x838) + 0x4e8);
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_20,iVar3);
      if ((local_20 != 0) && (iVar4 = FUN_004170c0(L">>> ",local_20,1), iVar2 = iVar3, 0 < iVar4))
      break;
      iVar3 = iVar3 + -1;
      iVar2 = local_2c;
    } while (iVar3 != -1);
  }
  local_2c = iVar2;
  FUN_00414480(&local_20);
  return local_2c;
}

