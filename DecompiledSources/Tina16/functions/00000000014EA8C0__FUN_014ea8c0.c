/* Ghidra address: 014ea8c0 */
/* Ghidra symbol: FUN_014ea8c0 */


void FUN_014ea8c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  uVar1 = FUN_014e7e70(&DAT_014e7778,1,local_res10,local_res18,param_4);
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x88),uVar1);
  FUN_00414560(&local_res10,2);
  return;
}

