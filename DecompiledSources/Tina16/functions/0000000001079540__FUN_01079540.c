/* Ghidra address: 01079540 */
/* Ghidra symbol: FUN_01079540 */


undefined4 FUN_01079540(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  plVar2 = (longlong *)FUN_01b21190(local_res10[0],0x5c,0);
  uVar1 = (**(code **)(*plVar2 + 0x28))(plVar2);
  FUN_00410f20(plVar2);
  FUN_00414480(local_res10);
  return uVar1;
}

