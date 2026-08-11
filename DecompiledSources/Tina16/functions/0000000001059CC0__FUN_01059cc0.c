/* Ghidra address: 01059cc0 */
/* Ghidra symbol: FUN_01059cc0 */


undefined8 FUN_01059cc0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_40 = 0;
  local_48 = 0;
  local_30 = 0;
  local_38 = 0;
  plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar1 = (**(code **)(*param_2 + 0x28))();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*param_2 + 0x18))(param_2,&local_48,iVar4);
      FUN_00441640(&local_40,local_48);
      FUN_0044f8b0(&local_30,local_40);
      iVar2 = (**(code **)(*plVar3 + 0xb0))(plVar3,local_30);
      if (iVar2 == -1) {
        (**(code **)(*plVar3 + 0x78))(plVar3,local_30);
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_004b37d0(plVar3,&local_38);
  FUN_00414ad0(param_1,local_38);
  FUN_00410f20(plVar3);
  FUN_00414560(&local_48,4);
  return param_1;
}

