/* Ghidra address: 013ce7e0 */
/* Ghidra symbol: FUN_013ce7e0 */


longlong * FUN_013ce7e0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  plVar1 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  if (param_2 == 0) {
    (**(code **)(*plVar1 + 0x88))(plVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x848) + 0x4e8));
  }
  else {
    (**(code **)(*plVar1 + 0x88))(plVar1,param_2);
  }
  FUN_00414560(&local_28,2);
  return plVar1;
}

