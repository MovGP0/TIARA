/* Ghidra address: 00f021d0 */
/* Ghidra symbol: FUN_00f021d0 */


void FUN_00f021d0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  int local_48;
  undefined1 local_30 [16];
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_68;
  FUN_006570a0(param_1,param_2);
  uVar2 = FUN_0065b870(param_1);
  local_10 = thunk_FUN_0411fe47(uVar2);
  thunk_FUN_03e3a7dc(local_10,*(undefined4 *)(param_1 + 200));
  local_48 = *(int *)(param_1 + 0x9c) + -1;
  FUN_00498350(local_30,1,1,*(int *)(param_1 + 0x98) + -1);
  uVar1 = FUN_005fbf20(*(undefined4 *)(param_1 + 200));
  uVar2 = thunk_FUN_0412d81c(uVar1);
  FUN_00429590(local_10,local_30,uVar2);
  uVar2 = FUN_0065b870(param_1);
  thunk_FUN_041a9b5c(uVar2,local_10);
  return;
}

