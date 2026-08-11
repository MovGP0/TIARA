/* Ghidra address: 00600cc0 */
/* Ghidra symbol: FUN_00600cc0 */


void FUN_00600cc0(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined1 *local_40;
  undefined4 *local_30;
  longlong local_28;
  int local_1c;
  longlong local_18;
  undefined8 local_10;
  
  local_40 = auStack_78;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) >> 1;
  iVar1 = FUN_00600270(*(undefined4 *)(param_1 + 4),*(undefined2 *)(param_1 + 0xe),0x20);
  *(int *)(param_1 + 0x14) = iVar1 * *(int *)(param_1 + 8);
  local_1c = FUN_00600240(*(undefined2 *)(param_1 + 0xe));
  local_18 = thunk_FUN_040ef593(0);
  if (local_18 == 0) {
    FUN_005ffeb0();
  }
  local_28 = param_1 + 0x28 + (longlong)(local_1c * 4);
  local_50 = 0;
  local_58 = param_1;
  uVar2 = thunk_FUN_041525f6(local_18,param_1,4,local_28);
  local_10 = FUN_005fffe0(uVar2);
  uVar2 = FUN_00600000(local_10,param_4,0);
  *param_2 = uVar2;
  thunk_FUN_0416f828(local_10);
  local_28 = local_28 + (ulonglong)*(uint *)(param_1 + 0x14);
  *(undefined2 *)(param_1 + 0xe) = 1;
  iVar1 = FUN_00600270(*(undefined4 *)(param_1 + 4),1,0x20);
  *(int *)(param_1 + 0x14) = iVar1 * *(int *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x20) = 2;
  *(undefined4 *)(param_1 + 0x24) = 2;
  local_30 = (undefined4 *)(param_1 + 0x28);
  *local_30 = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffff;
  local_50 = 0;
  local_58 = param_1;
  uVar2 = thunk_FUN_041525f6(local_18,param_1,4,local_28);
  local_10 = FUN_005fffe0(uVar2);
  uVar2 = FUN_00600000(local_10,param_4,1);
  *param_3 = uVar2;
  thunk_FUN_0416f828(local_10);
  thunk_FUN_041a9b5c(0,local_18);
  return;
}

