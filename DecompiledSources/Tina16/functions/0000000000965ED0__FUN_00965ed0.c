/* Ghidra address: 00965ed0 */
/* Ghidra symbol: FUN_00965ed0 */


void FUN_00965ed0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 in_RAX;
  undefined8 local_30 [2];
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  local_30[0] = FUN_00964620(&PTR_FUN_00916560,
                             CONCAT71((int7)((ulonglong)in_RAX >> 8),1) & 0xffffffff,param_2);
  FUN_0059ba60(lVar1 + 8,local_30);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x80))(*(longlong **)(param_1 + 0x20),param_3);
  return;
}

