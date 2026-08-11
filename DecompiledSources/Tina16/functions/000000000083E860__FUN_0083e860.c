/* Ghidra address: 0083e860 */
/* Ghidra symbol: FUN_0083e860 */


void FUN_0083e860(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_28 [24];
  
  FUN_004238d0(local_28,2,2,*(int *)(param_1 + 0x98) + -2,*(undefined4 *)(param_1 + 0x9c));
  uVar1 = FUN_0065b870(param_1);
  FUN_004701a0(uVar1,0xb4,0,local_28);
  uVar1 = FUN_0065b870(param_1);
  thunk_FUN_041b2403(uVar1,0xb7,0,0);
  return;
}

