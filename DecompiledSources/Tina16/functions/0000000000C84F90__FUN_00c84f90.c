/* Ghidra address: 00c84f90 */
/* Ghidra symbol: FUN_00c84f90 */


longlong * FUN_00c84f90(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 local_res18 [2];
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar1 = FUN_00c83020();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar3 = FUN_00c83030(param_1,iVar4);
      if (*(int *)(lVar3 + 0x54) == param_2) {
        FUN_00c84220(param_1,local_30,iVar4,local_res18[0]);
        (**(code **)(*plVar2 + 0x80))(plVar2,local_30[0],lVar3);
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(local_30);
  FUN_00414480(local_res18);
  return plVar2;
}

