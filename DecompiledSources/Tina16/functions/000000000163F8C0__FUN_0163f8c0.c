/* Ghidra address: 0163f8c0 */
/* Ghidra symbol: FUN_0163f8c0 */


void FUN_0163f8c0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  iVar2 = *(int *)(param_2 + 0x5d0);
  iVar1 = 0;
  if (-1 < iVar2 + -1) {
    do {
      local_20 = FUN_01615dd0(0,iVar1);
      FUN_016156a0(&local_28,&local_20,0);
      (**(code **)(**(longlong **)(param_2 + 0x6d8) + 0x78))
                (*(longlong **)(param_2 + 0x6d8),local_28);
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414480(&local_28);
  return;
}

