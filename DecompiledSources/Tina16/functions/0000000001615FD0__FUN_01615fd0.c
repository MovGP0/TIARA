/* Ghidra address: 01615fd0 */
/* Ghidra symbol: FUN_01615fd0 */


void FUN_01615fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 local_res8 [4];
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_38 = 0;
  local_30[0] = 0;
  local_20 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  iVar1 = FUN_004170c0(&DAT_01616174,local_res8[0],1);
  iVar2 = FUN_004170c0(&LAB_01616184,local_res8[0],1);
  FUN_00416dc0(param_2,local_res8[0],1,iVar1 + -1);
  FUN_00416dc0(&local_20,local_res8[0],iVar1 + 1,(iVar2 - iVar1) + -1);
  plVar3 = (longlong *)FUN_01b21480(local_20);
  (**(code **)(*plVar3 + 0x18))(plVar3,local_30,0);
  FUN_00414ad0(param_3,local_30[0]);
  iVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
  if (iVar1 < 2) {
    FUN_00414480(param_4);
  }
  else {
    (**(code **)(*plVar3 + 0x18))(plVar3,&local_38,1);
    FUN_00414ad0(param_4,local_38);
  }
  FUN_00410f20(plVar3);
  FUN_00414560(&local_38,2);
  FUN_00414480(&local_20);
  FUN_00414480(local_res8);
  return;
}

