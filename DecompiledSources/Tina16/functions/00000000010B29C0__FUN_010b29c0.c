/* Ghidra address: 010b29c0 */
/* Ghidra symbol: FUN_010b29c0 */


undefined8 FUN_010b29c0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  lVar1 = FUN_010b2ee0(param_1,param_3);
  (**(code **)(**(longlong **)(lVar1 + 0x20) + 0x38))(*(longlong **)(lVar1 + 0x20),local_20);
  FUN_00414ad0(param_2,local_20[0]);
  FUN_00414480(local_20);
  return param_2;
}

