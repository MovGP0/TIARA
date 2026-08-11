/* Ghidra address: 00cdb400 */
/* Ghidra symbol: FUN_00cdb400 */


void FUN_00cdb400(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res20;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_res20 = param_4;
  FUN_0041b910(param_4);
  local_10 = FUN_00882aa0(param_1,1,0);
  FUN_00cdafd0(local_10,param_2,param_3,local_res20);
  FUN_00410f20(local_10);
  FUN_0041b800(&local_res20);
  return;
}

