/* Ghidra address: 01628af0 */
/* Ghidra symbol: FUN_01628af0 */


undefined8 FUN_01628af0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_30;
  
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414610(param_1);
  FUN_00414610(local_res10);
  iVar2 = (**(code **)(**(longlong **)(param_3 + 0x139c0) + 0x28))();
  iVar3 = 0;
  if (-1 < iVar2 + -1) {
    do {
      local_30 = (**(code **)(**(longlong **)(param_3 + 0x139c0) + 0x30))
                           (*(longlong **)(param_3 + 0x139c0),iVar3);
      cVar1 = FUN_01629860(local_30,local_res8,local_res10);
      if (cVar1 != '\0') goto LAB_01628b85;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_30 = 0;
LAB_01628b85:
  FUN_00414560(&local_res8,2);
  return local_30;
}

