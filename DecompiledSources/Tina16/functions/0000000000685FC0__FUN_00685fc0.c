/* Ghidra address: 00685fc0 */
/* Ghidra symbol: FUN_00685fc0 */


void FUN_00685fc0(longlong param_1,uint param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x170),&local_10);
  FUN_00416e20(&local_10,param_2 + 1,param_3 - param_2);
  uVar1 = FUN_0065b870(*(undefined8 *)(param_1 + 0x170));
  thunk_FUN_041b2403(uVar1,0x14e,0xffffffffffffffff,0);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x170),local_10);
  uVar1 = FUN_0065b870(*(undefined8 *)(param_1 + 0x170));
  thunk_FUN_041b2403(uVar1,0x142,0,param_2 & 0xffff | (param_2 & 0xffff) << 0x10);
  FUN_00414480(&local_10);
  return;
}

