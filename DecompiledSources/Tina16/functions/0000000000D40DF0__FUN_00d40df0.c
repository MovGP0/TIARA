/* Ghidra address: 00d40df0 */
/* Ghidra symbol: FUN_00d40df0 */


undefined8 FUN_00d40df0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 local_40;
  int local_38;
  int iStack_34;
  undefined8 local_30;
  
  iVar1 = FUN_00787ca0(*(undefined8 *)(param_1 + 0x18));
  iStack_34 = FUN_00787f60(*(undefined8 *)(param_1 + 0x18));
  local_40 = 0;
  local_38 = iVar1;
  thunk_FUN_0415f9d2(*(undefined8 *)(param_1 + 8),&local_40);
  local_30 = *param_2;
  thunk_FUN_0417e313(*(undefined8 *)(param_1 + 8),&local_30);
  local_30 = CONCAT44(local_30._4_4_ + (local_40._4_4_ - iStack_34),
                      (int)local_30 + ((int)local_40 - local_38));
  return local_30;
}

