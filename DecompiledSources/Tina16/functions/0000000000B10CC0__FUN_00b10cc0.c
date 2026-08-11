/* Ghidra address: 00b10cc0 */
/* Ghidra symbol: FUN_00b10cc0 */


void FUN_00b10cc0(longlong *param_1,int param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_38 = 0;
  local_30[0] = 0;
  local_20 = 0;
  iVar3 = param_3 - (int)param_1[0x98];
  if (param_2 == 0) {
    (**(code **)(*param_1 + 0x2d8))(param_1,local_30,1,param_3);
    FUN_00b10a00(&local_20,param_4,local_30[0]);
  }
  else {
    (**(code **)(*param_1 + 0x2d8))(param_1,&local_38,0,param_3);
    FUN_00b10a00(&local_20,local_38,param_4);
  }
  plVar2 = (longlong *)FUN_00b11070(param_1);
  iVar1 = (**(code **)(*plVar2 + 0x28))(plVar2);
  if (iVar3 < iVar1) {
    plVar2 = (longlong *)FUN_00b11070(param_1);
    (**(code **)(*plVar2 + 0x40))(plVar2,iVar3,local_20);
  }
  else {
    plVar2 = (longlong *)FUN_00b11070(param_1);
    (**(code **)(*plVar2 + 0x78))(plVar2,local_20);
  }
  FUN_00414560(&local_38,2);
  FUN_00414480(&local_20);
  return;
}

