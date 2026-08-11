/* Ghidra address: 01409810 */
/* Ghidra symbol: FUN_01409810 */


void FUN_01409810(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  short local_2c [2];
  short local_28;
  undefined4 local_1c;
  
  lVar2 = *(longlong *)(param_1 + 0x6d0);
  FUN_00849e90(lVar2,local_2c,*(undefined4 *)(lVar2 + 0x4a8),*(undefined4 *)(lVar2 + 0x4ac));
  local_1c = CONCAT22(local_28 + 7,local_2c[0] + 10);
  uVar1 = FUN_0065b870(param_1);
  lVar2 = (longlong)local_1c;
  thunk_FUN_0413e052(uVar1,0x202,0,lVar2);
  uVar1 = FUN_0065b870(param_1);
  thunk_FUN_0413e052(uVar1,0x201,0,lVar2);
  return;
}

