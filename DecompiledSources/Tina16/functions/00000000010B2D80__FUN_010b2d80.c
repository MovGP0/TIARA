/* Ghidra address: 010b2d80 */
/* Ghidra symbol: FUN_010b2d80 */


void FUN_010b2d80(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  lVar1 = FUN_010ae9e0(&DAT_010a8e80,1);
  FUN_00414ad0(lVar1 + 0x30,local_res18);
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x18),lVar1);
  plVar2 = (longlong *)FUN_010af3b0(lVar1);
  (**(code **)(*plVar2 + 0x60))(plVar2,local_res10);
  FUN_00414560(&local_res10,2);
  return;
}

