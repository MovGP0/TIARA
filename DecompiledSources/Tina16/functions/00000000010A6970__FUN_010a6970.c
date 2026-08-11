/* Ghidra address: 010a6970 */
/* Ghidra symbol: FUN_010a6970 */


bool FUN_010a6970(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  plVar2 = (longlong *)FUN_01b21480(*(undefined8 *)(param_1 + 0xa18));
  iVar1 = (**(code **)(*plVar2 + 0xb0))(plVar2,local_res10[0]);
  FUN_00410f20(plVar2);
  FUN_00414480(local_res10);
  return -1 < iVar1;
}

