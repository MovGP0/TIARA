/* Ghidra address: 01629730 */
/* Ghidra symbol: FUN_01629730 */


int FUN_01629730(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  plVar3 = (longlong *)FUN_01629580(param_1,param_3,param_4,&local_28);
  iVar1 = FUN_0161b200(local_28);
  iVar2 = (**(code **)(*plVar3 + 0x28))(plVar3);
  FUN_00414480(&local_20);
  return iVar1 + iVar2;
}

