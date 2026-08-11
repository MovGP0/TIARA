/* Ghidra address: 018303f0 */
/* Ghidra symbol: FUN_018303f0 */


undefined8 FUN_018303f0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x88) + 0x10))(*(longlong **)(param_1 + 0x88),param_2);
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x10))(*(longlong **)(param_1 + 0x90),&local_30);
  uVar1 = FUN_0046f3d0(param_2,&local_30);
  FUN_00468820(param_2,uVar1);
  FUN_00460ba0(&local_30);
  return param_2;
}

