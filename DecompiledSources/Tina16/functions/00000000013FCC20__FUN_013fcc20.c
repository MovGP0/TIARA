/* Ghidra address: 013fcc20 */
/* Ghidra symbol: FUN_013fcc20 */


undefined8 FUN_013fcc20(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 local_res10 [3];
  undefined8 local_30;
  
  local_30 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414480(param_1);
  plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*plVar2 + 0x60))(plVar2,local_res10[0]);
  iVar1 = (**(code **)(*plVar2 + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_30,iVar3);
      FUN_00416ad0(param_1,local_30);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00410f20(plVar2);
  FUN_00414480(&local_30);
  FUN_00414480(local_res10);
  return param_1;
}

