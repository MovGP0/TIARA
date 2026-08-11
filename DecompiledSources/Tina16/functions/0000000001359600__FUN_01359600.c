/* Ghidra address: 01359600 */
/* Ghidra symbol: FUN_01359600 */


char FUN_01359600(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_20 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414630(param_2);
  FUN_00414630(local_res18);
  FUN_00416880(&local_20,local_res10);
  plVar2 = (longlong *)FUN_019ac500(param_1,local_20);
  FUN_00416880(&local_28,local_res18);
  plVar3 = (longlong *)FUN_019ac500(param_1,local_28);
  if ((plVar2 == (longlong *)0x0) || (plVar3 == (longlong *)0x0)) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  if (cVar1 != '\0') {
    (**(code **)(*plVar2 + 0x1f0))(plVar2,param_4,param_6,param_7);
    (**(code **)(*plVar3 + 0x1f0))(plVar3,param_5,param_8,param_9);
  }
  FUN_00414560(&local_28,2);
  FUN_00414590(&local_res10,2);
  return cVar1;
}

