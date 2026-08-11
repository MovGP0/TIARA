/* Ghidra address: 00ecba00 */
/* Ghidra symbol: FUN_00ecba00 */


void FUN_00ecba00(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x878) + 0x260))(*(longlong **)(param_1 + 0x878));
  uVar2 = FUN_00eae150(local_res10[0],uVar1);
  *(undefined8 *)(param_1 + 0x888) = uVar2;
  FUN_0043e130(local_20,local_res10[0]);
  FUN_00414ad0(param_1 + 0x8e0,local_20[0]);
  (**(code **)(**(longlong **)(param_1 + 0x7a0) + 0x268))(*(longlong **)(param_1 + 0x7a0),0);
  *(undefined1 *)(param_1 + 0x900) = 0;
  (**(code **)(**(longlong **)(param_1 + 0x890) + 0x90))(*(longlong **)(param_1 + 0x890));
  *(undefined4 *)(param_1 + 0x910) = 0xffffffff;
  FUN_00ed3870();
  (**(code **)(**(longlong **)(param_1 + 0x840) + 0x268))(*(longlong **)(param_1 + 0x840),1);
  *(undefined4 *)(param_1 + 0x908) = 1;
  FUN_00ed5150(param_1,0);
  FUN_00ed3700(param_1,0);
  FUN_00ece0d0(param_1,0);
  FUN_00ecbca0(param_1);
  FUN_00414480(local_20);
  FUN_00414480(local_res10);
  return;
}

