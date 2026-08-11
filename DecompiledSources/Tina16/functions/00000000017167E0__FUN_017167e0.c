/* Ghidra address: 017167e0 */
/* Ghidra symbol: FUN_017167e0 */


undefined8 * FUN_017167e0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  int local_1c [3];
  
  local_38 = 0;
  local_30[0] = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x140))
                    (*(longlong **)(param_1 + 0x10),local_res10,local_1c);
  if (cVar2 == '\0') {
    local_40 = (undefined8 *)0x0;
  }
  else {
    bVar1 = false;
    while (!bVar1) {
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))(*(longlong **)(param_1 + 0x10));
      if (iVar3 <= local_1c[0]) break;
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
                (*(longlong **)(param_1 + 0x10),&local_38,local_1c[0]);
      iVar3 = FUN_00416db0(local_38,local_res10);
      if (iVar3 != 0) break;
      local_40 = (undefined8 *)
                 (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                           (*(longlong **)(param_1 + 0x10),local_1c[0]);
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
                (*(longlong **)(param_1 + 0x10),local_30,local_1c[0]);
      iVar3 = FUN_00416db0(local_30[0],local_res10);
      if (iVar3 == 0) {
        iVar3 = FUN_00416db0(*local_40,local_res18);
        if (iVar3 != 0) goto LAB_017168a6;
        bVar1 = true;
      }
      else {
LAB_017168a6:
        bVar1 = false;
      }
      if (!bVar1) {
        local_1c[0] = local_1c[0] + 1;
      }
    }
  }
  FUN_00414560(&local_38,2);
  FUN_00414560(&local_res10,2);
  return local_40;
}

