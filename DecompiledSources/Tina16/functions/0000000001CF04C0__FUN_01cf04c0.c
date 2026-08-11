/* Ghidra address: 01cf04c0 */
/* Ghidra symbol: FUN_01cf04c0 */


longlong * FUN_01cf04c0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  plVar2 = (longlong *)FUN_00410920(param_1,local_res10);
  if (plVar2 != (longlong *)0xffffffffffffffff) {
    FUN_00b94d80(plVar2,0);
    cVar1 = (**(code **)(*plVar2 + 8))(plVar2);
    param_1 = plVar2;
    if (cVar1 == '\0') {
      param_1 = (longlong *)FUN_004109a0(plVar2,local_res10[0]);
    }
  }
  return param_1;
}

