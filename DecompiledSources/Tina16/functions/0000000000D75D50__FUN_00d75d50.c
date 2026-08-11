/* Ghidra address: 00d75d50 */
/* Ghidra symbol: FUN_00d75d50 */


longlong * FUN_00d75d50(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_00410ae0(*param_1,local_20);
  lVar1 = FUN_00d753e0(local_20[0]);
  if (lVar1 == 0) {
    local_28 = (longlong *)0x0;
  }
  else {
    local_28 = (longlong *)(**(code **)(lVar1 + 0x78))(lVar1,1,param_2);
    (**(code **)(*local_28 + 0x10))(local_28,param_1);
  }
  FUN_00414480(local_20);
  return local_28;
}

