/* Ghidra address: 0105e6d0 */
/* Ghidra symbol: FUN_0105e6d0 */


undefined8
FUN_0105e6d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined2 param_5)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  
  local_40 = 0;
  local_30 = 0;
  local_38 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  plVar3 = (longlong *)FUN_01b21190(local_res18,param_5,0);
  FUN_00414480(&local_30);
  iVar1 = (**(code **)(*plVar3 + 0x28))();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      FUN_00450070(&local_40,local_30,L"$xx$",&DAT_0105e8b8,1);
      FUN_00414b50(&local_30,local_40);
      (**(code **)(*plVar3 + 0x18))(plVar3,&local_38,iVar4);
      iVar2 = FUN_00416db0(local_res20,&LAB_0105e8cc);
      if (iVar2 == 0) {
        iVar2 = 0;
        if (local_38 != 0) {
          iVar2 = *(int *)(local_38 + -4);
        }
        if (1 < iVar2) {
          FUN_01059b00(&local_38);
        }
      }
      FUN_00416cd0(&local_30,4,local_30,local_res20,local_38,&DAT_0105e8b8);
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414ad0(param_2,local_30);
  FUN_00410f20(plVar3);
  FUN_00414560(&local_40,3);
  FUN_00414560(&local_res18,2);
  return param_2;
}

