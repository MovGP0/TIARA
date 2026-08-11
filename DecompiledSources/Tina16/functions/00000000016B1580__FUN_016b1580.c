/* Ghidra address: 016b1580 */
/* Ghidra symbol: FUN_016b1580 */


void FUN_016b1580(longlong param_1,undefined8 param_2)

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
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x38) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),iVar3);
      FUN_016b0730(uVar2,local_30);
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

