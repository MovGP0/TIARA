/* Ghidra address: 00a02250 */
/* Ghidra symbol: FUN_00a02250 */


undefined8 FUN_00a02250(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_30;
  longlong local_28;
  undefined8 local_20 [2];
  
  local_30 = auStack_68;
  local_20[0] = 0;
  local_48 = 0;
  local_28 = FUN_00a01f50(&PTR_FUN_009f2d50,1,param_3,param_4);
  FUN_00414480(local_20);
  (**(code **)(**(longlong **)(local_28 + 0x28) + 0x18))(*(longlong **)(local_28 + 0x28),local_20);
  FUN_00414ad0(param_2,local_20[0]);
  FUN_00414480(local_20);
  FUN_00410f20(local_28);
  FUN_00414480(local_20);
  return param_2;
}

