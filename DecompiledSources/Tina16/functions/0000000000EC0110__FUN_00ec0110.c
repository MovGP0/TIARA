/* Ghidra address: 00ec0110 */
/* Ghidra symbol: FUN_00ec0110 */


void FUN_00ec0110(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x840) + 0x260))(*(longlong **)(param_1 + 0x840));
  uVar2 = FUN_00eae150(local_res10[0],uVar1);
  *(undefined8 *)(param_1 + 0x850) = uVar2;
  FUN_0043e130(local_20,local_res10[0]);
  FUN_00414ad0(param_1 + 0x898,local_20[0]);
  (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x268))(*(longlong **)(param_1 + 0x6e8),0);
  *(undefined1 *)(param_1 + 0x8c0) = 0;
  (**(code **)(**(longlong **)(param_1 + 0x858) + 0x90))(*(longlong **)(param_1 + 0x858));
  (**(code **)(**(longlong **)(param_1 + 0x808) + 0x268))(*(longlong **)(param_1 + 0x808),1);
  FUN_00ec80c0(param_1,0);
  FUN_00ec24d0(param_1,0);
  FUN_00ec0380(param_1);
  FUN_00414480(local_20);
  FUN_00414480(local_res10);
  return;
}

