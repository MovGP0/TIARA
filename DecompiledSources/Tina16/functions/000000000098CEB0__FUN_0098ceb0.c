/* Ghidra address: 0098ceb0 */
/* Ghidra symbol: FUN_0098ceb0 */


void FUN_0098ceb0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 local_48;
  undefined8 local_40 [2];
  longlong *local_30 [2];
  
  local_40[0] = 0;
  local_48 = 0;
  cVar1 = (**(code **)(*param_2 + 0x168))(param_2);
  if (cVar1 == '\v') {
    plVar2 = (longlong *)FUN_004113f0(param_2,&PTR_FUN_0090d970);
    uVar3 = (**(code **)(*plVar2 + 0x2b8))(plVar2);
    (**(code **)(*plVar2 + 0x150))(plVar2,local_40);
    (**(code **)(*plVar2 + 0x180))(plVar2,&local_48);
    (**(code **)(*param_1 + 0x128))(param_1,uVar3,local_40[0],local_48);
  }
  else {
    local_30[0] = param_2;
    FUN_00597e50(param_1[9] + 8,local_30);
  }
  FUN_004145c0(&local_48,2);
  return;
}

