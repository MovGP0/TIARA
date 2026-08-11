/* Ghidra address: 01a49190 */
/* Ghidra symbol: FUN_01a49190 */


undefined8 FUN_01a49190(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  FUN_00414480(&local_40);
  iVar3 = *(int *)(param_1 + 0x2b54);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x2b08) + (longlong)iVar2 * 8);
      (**(code **)(*plVar1 + 0x288))(plVar1,&local_38);
      if (iVar2 == 0) {
        FUN_00414b50(&local_40,local_38);
      }
      else {
        FUN_00416cd0(&local_40,3,local_40,&LAB_01a49298,local_38);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414ad0(param_2,local_40);
  FUN_00414560(&local_40,3);
  return param_2;
}

