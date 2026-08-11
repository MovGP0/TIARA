/* Ghidra address: 01869270 */
/* Ghidra symbol: FUN_01869270 */


undefined1 FUN_01869270(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_58;
  lVar1 = (**(code **)(param_1 + 0x68))(param_1);
  local_20 = (longlong *)(**(code **)(lVar1 + -0x30))(lVar1);
  (**(code **)(*local_20 + 0xa0))(local_20,0xff);
  FUN_00603f70(param_2,local_20);
  (**(code **)(**(longlong **)(param_2 + 0x18) + 0xc0))(*(longlong **)(param_2 + 0x18),param_3);
  FUN_00410f20(local_20);
  return 1;
}

