/* Ghidra address: 015ec460 */
/* Ghidra symbol: FUN_015ec460 */


undefined1 FUN_015ec460(undefined8 *param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 local_41;
  undefined8 local_40;
  undefined8 local_38;
  int local_30;
  int local_2c;
  
  local_40 = 0;
  local_38 = 0;
  local_41 = 0;
  local_2c = 0;
  local_30 = 0;
  cVar1 = FUN_015f2ab0(*param_1,&local_2c,&local_30,&local_38);
  if (cVar1 != '\0') {
    local_2c = local_2c + -1;
    local_30 = local_30 + 1;
    if ((-1 < local_2c) && (-1 < local_30)) {
      plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      iVar2 = (**(code **)(*(longlong *)*param_1 + 0x28))();
      iVar4 = 0;
      if (-1 < iVar2 + -1) {
        do {
          if ((iVar4 < local_2c) || (local_30 < iVar4)) {
            (**(code **)(*(longlong *)*param_1 + 0x18))((longlong *)*param_1,&local_40,iVar4);
            (**(code **)(*plVar3 + 0x78))(plVar3,local_40);
          }
          iVar4 = iVar4 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      FUN_00410f20(*param_1);
      *param_1 = plVar3;
      local_41 = 1;
    }
  }
  FUN_00414560(&local_40,2);
  return local_41;
}

