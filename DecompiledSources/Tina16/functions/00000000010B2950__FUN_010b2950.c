/* Ghidra address: 010b2950 */
/* Ghidra symbol: FUN_010b2950 */


void FUN_010b2950(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  lVar1 = FUN_010b2ee0(param_1,param_2);
  (**(code **)(**(longlong **)(lVar1 + 0x20) + 0x60))(*(longlong **)(lVar1 + 0x20),local_res18[0]);
  FUN_00414480(local_res18);
  return;
}

