/* Ghidra address: 01ca2020 */
/* Ghidra symbol: FUN_01ca2020 */


void FUN_01ca2020(longlong param_1)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  *(undefined1 *)(*(longlong *)(param_1 + 0x1588) + 0xd1) = 0;
  local_30[0] = FUN_00498310(0,*(int *)(*(longlong *)(param_1 + 0xd08) + 0x9c) + 2);
  uVar2 = FUN_0064d1f0(*(undefined8 *)(param_1 + 0x1580),local_30);
  local_20._4_4_ = (undefined4)(uVar2 >> 0x20);
  uVar1 = local_20._4_4_;
  local_20 = uVar2;
  (**(code **)(**(longlong **)(param_1 + 0x1588) + 0xa8))
            (*(longlong **)(param_1 + 0x1588),uVar2 & 0xffffffff,uVar1);
  return;
}

