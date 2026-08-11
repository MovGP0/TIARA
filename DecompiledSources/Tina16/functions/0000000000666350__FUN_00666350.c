/* Ghidra address: 00666350 */
/* Ghidra symbol: FUN_00666350 */


void FUN_00666350(undefined8 param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined1 local_38 [24];
  undefined8 local_20;
  
  uVar1 = *param_2;
  local_20._4_4_ = (undefined4)(uVar1 >> 0x20);
  uVar2 = local_20._4_4_;
  local_20 = uVar1;
  FUN_004238d0(local_38,uVar1 & 0xffffffff,uVar2,uVar1 & 0xffffffff,uVar2);
  FUN_00666280(param_1,local_38);
  return;
}

