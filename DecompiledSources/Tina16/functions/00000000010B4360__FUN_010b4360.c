/* Ghidra address: 010b4360 */
/* Ghidra symbol: FUN_010b4360 */


undefined8 FUN_010b4360(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  iVar1 = (**(code **)(*param_2 + 0x28))(param_2);
  (**(code **)(*param_2 + 0x18))(param_2,&local_20,iVar1 + -1);
  plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined2 *)((longlong)plVar2 + 0x2c) = 0x2f;
  FUN_004b50b0(plVar2,local_20);
  iVar1 = (**(code **)(*plVar2 + 0x28))(plVar2);
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_28,iVar1 + -1);
  FUN_00410f20(plVar2);
  FUN_00414ad0(param_1,local_28);
  FUN_00414560(&local_28,2);
  return param_1;
}

