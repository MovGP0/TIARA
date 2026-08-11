/* Ghidra address: 01575960 */
/* Ghidra symbol: FUN_01575960 */


void FUN_01575960(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 local_res10 [3];
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  plVar1 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar4 = *(int *)(param_1 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar2 = FUN_004aeac0(param_1,iVar3);
      FUN_01575480(uVar2,local_30);
      (**(code **)(*plVar1 + 0x78))(plVar1,local_30[0]);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  (**(code **)(*plVar1 + 0x100))(plVar1,local_res10[0]);
  FUN_00410f20(plVar1);
  FUN_00414480(local_30);
  FUN_00414480(local_res10);
  return;
}

