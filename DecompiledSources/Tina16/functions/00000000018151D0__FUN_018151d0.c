/* Ghidra address: 018151d0 */
/* Ghidra symbol: FUN_018151d0 */


undefined8 FUN_018151d0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 local_res10 [3];
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_38 = 0;
  iVar1 = FUN_004b2060();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      plVar3 = (longlong *)FUN_004b2070(param_1,iVar4);
      (**(code **)(*plVar3 + 0x48))(plVar3,local_30);
      iVar2 = FUN_00416db0(local_30[0],local_res10[0]);
      if (iVar2 == 0) {
        local_38 = FUN_004b2070(param_1,iVar4);
        break;
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(local_30);
  FUN_00414480(local_res10);
  return local_38;
}

