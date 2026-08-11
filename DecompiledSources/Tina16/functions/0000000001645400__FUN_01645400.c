/* Ghidra address: 01645400 */
/* Ghidra symbol: FUN_01645400 */


undefined8 FUN_01645400(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_01cfdb80(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x18),&local_10,param_4);
  FUN_00414ad0(param_2,local_10);
  FUN_00414480(&local_10);
  return param_2;
}

