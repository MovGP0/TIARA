/* Ghidra address: 010ee0c0 */
/* Ghidra symbol: FUN_010ee0c0 */


void FUN_010ee0c0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined8 local_10;
  
  uVar1 = *param_3;
  local_10._0_4_ = (int)uVar1;
  local_20 = (int)local_10;
  local_10._4_4_ = (int)((ulonglong)uVar1 >> 0x20);
  local_1c = local_10._4_4_;
  local_18 = ((int)local_10 + *(int *)(param_1 + 0x70)) - *(int *)(param_1 + 0x68);
  local_14 = (local_10._4_4_ + *(int *)(param_1 + 0x74)) - *(int *)(param_1 + 0x6c);
  local_10 = uVar1;
  FUN_01a8dcd0(param_2,&local_20,*(longlong *)(param_1 + 0x78) + 0x98);
  return;
}

