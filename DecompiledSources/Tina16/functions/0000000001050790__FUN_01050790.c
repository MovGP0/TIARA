/* Ghidra address: 01050790 */
/* Ghidra symbol: FUN_01050790 */


void FUN_01050790(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_res10 [3];
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_38 = 0;
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00f629d0(*(undefined8 *)(param_1 + 0x980));
  uVar1 = FUN_004b9860(&PTR_FUN_0047c498,1,local_res10[0],0);
  FUN_01050690(param_1,uVar1);
  FUN_00410f20(uVar1);
  FUN_00f62a90(*(undefined8 *)(param_1 + 0x980),0);
  FUN_00f629b0(*(undefined8 *)(param_1 + 0x980),1);
  FUN_00414ad0(param_1 + 0x8d8,local_res10[0]);
  FUN_00441920(&local_38,local_res10[0]);
  FUN_00f60ce0(local_30,local_38);
  FUN_00414ad0(param_1 + 0x8d0,local_30[0]);
  FUN_01051360(param_1);
  FUN_010508e0(param_1);
  FUN_00414560(&local_38,2);
  FUN_00414480(local_20);
  FUN_00414480(local_res10);
  return;
}

