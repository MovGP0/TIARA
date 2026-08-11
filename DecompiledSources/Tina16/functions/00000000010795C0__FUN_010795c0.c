/* Ghidra address: 010795c0 */
/* Ghidra symbol: FUN_010795c0 */


undefined8 FUN_010795c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 local_res18 [2];
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40 [2];
  
  local_58 = 0;
  local_50[0] = 0;
  local_40[0] = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  plVar3 = (longlong *)FUN_01b21190(local_res18[0],0x5c,0);
  plVar4 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined2 *)((longlong)plVar4 + 0x2c) = 0x5c;
  iVar1 = (**(code **)(*plVar3 + 0x28))();
  iVar5 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*plVar3 + 0x18))(plVar3,local_50,iVar5);
      iVar2 = FUN_00416db0(local_50[0],&LAB_01079774);
      if (iVar2 == 0) {
        iVar2 = (**(code **)(*plVar4 + 0x28))(plVar4);
        if (0 < iVar2) {
          iVar2 = (**(code **)(*plVar4 + 0x28))(plVar4);
          (**(code **)(*plVar4 + 0x98))(plVar4,iVar2 + -1);
        }
      }
      else {
        (**(code **)(*plVar3 + 0x18))(plVar3,&local_58,iVar5);
        (**(code **)(*plVar4 + 0x78))(plVar4,local_58);
      }
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_004b3880(plVar4,local_40);
  FUN_00410f20(plVar3);
  FUN_00410f20(plVar4);
  FUN_00414ad0(param_2,local_40[0]);
  FUN_00414560(&local_58,2);
  FUN_00414480(local_40);
  FUN_00414480(local_res18);
  return param_2;
}

