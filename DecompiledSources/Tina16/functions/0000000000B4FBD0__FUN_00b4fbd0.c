/* Ghidra address: 00b4fbd0 */
/* Ghidra symbol: FUN_00b4fbd0 */


undefined8 FUN_00b4fbd0(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 local_res10 [3];
  undefined8 local_20 [2];
  undefined4 local_c;
  
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414630(param_2);
  FUN_0061d840(local_20,local_res10[0]);
  uVar3 = FUN_00b21470(local_20[0]);
  local_c._0_2_ = (undefined2)uVar3;
  local_c._2_1_ = (undefined1)((uint)uVar3 >> 0x10);
  uVar1 = local_c._2_1_;
  uVar2 = (undefined2)local_c;
  local_c = uVar3;
  uVar4 = FUN_00b4fb40(param_1,uVar2,uVar1);
  FUN_004144d0(local_20);
  FUN_004144d0(local_res10);
  return uVar4;
}

