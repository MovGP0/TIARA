/* Ghidra address: 018afd80 */
/* Ghidra symbol: FUN_018afd80 */


void FUN_018afd80(longlong param_1,undefined8 param_2,char param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_30[0] = FUN_00498310(0,0);
  uVar2 = FUN_0064d1f0(*(undefined8 *)(param_1 + 0x780),local_30);
  if (param_3 == '\x01') {
    local_20._4_4_ = (undefined4)(uVar2 >> 0x20);
    uVar1 = local_20._4_4_;
    local_20 = uVar2;
    (**(code **)(**(longlong **)(param_1 + 0x7a8) + 0xa8))
              (*(longlong **)(param_1 + 0x7a8),uVar2 & 0xffffffff,uVar1);
  }
  return;
}

