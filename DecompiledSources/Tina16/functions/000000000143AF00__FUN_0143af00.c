/* Ghidra address: 0143af00 */
/* Ghidra symbol: FUN_0143af00 */


void FUN_0143af00(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_2c;
  short local_28 [2];
  short local_24;
  
  lVar1 = *(longlong *)(param_1 + 0x700);
  FUN_008483b0(lVar1,1);
  FUN_00848a30(lVar1,*(undefined4 *)(lVar1 + 0x4c0));
  FUN_00849e90(lVar1,local_28,*(undefined4 *)(lVar1 + 0x4a8),*(undefined4 *)(lVar1 + 0x4ac));
  local_2c = CONCAT22(local_24 + 7,local_28[0] + 10);
  uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0x700));
  thunk_FUN_0413e052(uVar2,0x201,0,(longlong)local_2c);
  uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0x700));
  thunk_FUN_0413e052(uVar2,0x202,0,(longlong)local_2c);
  return;
}

