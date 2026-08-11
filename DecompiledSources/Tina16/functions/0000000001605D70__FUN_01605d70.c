/* Ghidra address: 01605d70 */
/* Ghidra symbol: FUN_01605d70 */


undefined8 FUN_01605d70(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 local_res10 [3];
  undefined8 local_40 [2];
  undefined8 local_30;
  
  local_40[0] = 0;
  local_30 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414480(&local_30);
  plVar3 = (longlong *)FUN_01b21300(local_res10[0],&LAB_01605ec0,0);
  iVar1 = (**(code **)(*plVar3 + 0x28))();
  iVar4 = 0;
  if (-1 < iVar1 - param_3) {
    iVar1 = (iVar1 - param_3) + 1;
    do {
      (**(code **)(*plVar3 + 0x18))(plVar3,local_40,iVar4);
      FUN_00416ad0(&local_30,local_40[0]);
      iVar2 = (**(code **)(*plVar3 + 0x28))(plVar3);
      if (iVar4 < iVar2 - param_3) {
        FUN_00416ad0(&local_30,&LAB_01605ec0);
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00410f20(plVar3);
  FUN_00414ad0(param_1,local_30);
  FUN_00414480(local_40);
  FUN_00414480(&local_30);
  FUN_00414480(local_res10);
  return param_1;
}

