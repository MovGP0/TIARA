/* Ghidra address: 015e6e80 */
/* Ghidra symbol: FUN_015e6e80 */


void FUN_015e6e80(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  cVar2 = FUN_00440a20(local_res10[0],1);
  if (cVar2 != '\0') {
    plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    (**(code **)(*plVar3 + 0xd8))(plVar3,local_res10[0]);
    FUN_0160eaf0(plVar3,8);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x710) + 0x4e8);
    (**(code **)(*plVar1 + 0x10))(plVar1,plVar3);
  }
  FUN_00414480(local_res10);
  return;
}

