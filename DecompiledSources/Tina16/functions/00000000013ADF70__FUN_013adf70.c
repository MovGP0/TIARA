/* Ghidra address: 013adf70 */
/* Ghidra symbol: FUN_013adf70 */


undefined8
FUN_013adf70(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4,
            undefined2 param_5)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  plVar4 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  plVar5 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (*param_4)(local_res10,plVar3);
  (*param_4)(local_res18,plVar4);
  iVar1 = (**(code **)(*plVar3 + 0x28))();
  iVar6 = 0;
  if (-1 < iVar1 + -1) {
    do {
      FUN_004b3cf0(plVar3,local_40,iVar6);
      iVar2 = (**(code **)(*plVar4 + 0xb8))(plVar4,local_40[0]);
      if (-1 < iVar2) {
        (**(code **)(*plVar3 + 0x18))(plVar3,&local_48,iVar6);
        (**(code **)(*plVar5 + 0x78))(plVar5,local_48);
        (**(code **)(*plVar4 + 0x98))(plVar4,iVar2);
      }
      iVar6 = iVar6 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = (**(code **)(*plVar4 + 0x28))();
  iVar6 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*plVar4 + 0x18))(plVar4,&local_50,iVar6);
      (**(code **)(*plVar5 + 0x78))(plVar5,local_50);
      iVar6 = iVar6 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *(undefined2 *)((longlong)plVar5 + 0x2c) = param_5;
  FUN_004b3880(plVar5,param_1);
  FUN_00410f20(plVar3);
  FUN_00410f20(plVar4);
  FUN_00410f20(plVar5);
  FUN_00414560(&local_50,3);
  FUN_00414560(&local_res10,2);
  return param_1;
}

