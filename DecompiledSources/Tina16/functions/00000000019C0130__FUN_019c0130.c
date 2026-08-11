/* Ghidra address: 019c0130 */
/* Ghidra symbol: FUN_019c0130 */


undefined8 FUN_019c0130(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 local_48 [2];
  undefined1 local_40;
  undefined4 local_38;
  undefined1 local_30;
  undefined8 local_20;
  
  uVar1 = *param_2;
  local_20._0_4_ = (undefined4)uVar1;
  local_48[0] = (undefined4)local_20;
  local_40 = 0;
  local_20._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  local_38 = local_20._4_4_;
  local_30 = 0;
  local_20 = uVar1;
  FUN_00442f70(param_1,L"(%d,%d)",local_48,1);
  return param_1;
}

