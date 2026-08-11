/* Ghidra address: 01603ea0 */
/* Ghidra symbol: FUN_01603ea0 */


void FUN_01603ea0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_017cc020(PTR_DAT_020027c0,10,0,*(undefined8 *)(param_1 + 0x360),0,0);
  FUN_01603870(param_1,local_res10[0],param_3,1,param_4);
  FUN_00414480(local_res10);
  return;
}

