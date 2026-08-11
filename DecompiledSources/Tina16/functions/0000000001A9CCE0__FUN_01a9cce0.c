/* Ghidra address: 01a9cce0 */
/* Ghidra symbol: FUN_01a9cce0 */


void FUN_01a9cce0(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_30[0] = FUN_00498310(param_2,param_3);
  uVar2 = FUN_01a9cdf0(param_1,local_30);
  local_20._4_4_ = (undefined4)(uVar2 >> 0x20);
  uVar1 = local_20._4_4_;
  local_20 = uVar2;
  (**(code **)(*param_1 + 0x40))(param_1,uVar2 & 0xffffffff,uVar1);
  return;
}

