/* Ghidra address: 01072a80 */
/* Ghidra symbol: FUN_01072a80 */


void FUN_01072a80(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_res10 [3];
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  local_res10[0] = param_2;
  FUN_00414630(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x6b0);
  FUN_0064dd90(uVar1,&local_28);
  local_38 = local_res10[0];
  local_30 = 0xb;
  FUN_00442f70(local_20,local_28,&local_38,0);
  FUN_0064de00(uVar1,local_20[0]);
  FUN_00414480(&local_28);
  FUN_00414480(local_20);
  FUN_004144d0(local_res10);
  return;
}

