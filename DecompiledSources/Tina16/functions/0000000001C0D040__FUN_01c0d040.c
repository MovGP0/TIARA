/* Ghidra address: 01c0d040 */
/* Ghidra symbol: FUN_01c0d040 */


void FUN_01c0d040(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 *local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_40 = auStack_78;
  uVar1 = FUN_0065b870(param_1);
  thunk_FUN_03abe598(uVar1,&local_38);
  uVar1 = FUN_0065b870(param_1);
  thunk_FUN_03e49910(uVar1,&local_28);
  uVar1 = FUN_0065b870(param_1);
  thunk_FUN_0411b3be(0,uVar1,&local_28,2);
  FUN_00423b50(&local_38,-local_28,-local_24);
  local_58 = local_2c;
  thunk_FUN_041a27b3(param_2,local_38,local_34,local_30);
  FUN_00423b50(&local_28,-local_28,-local_24);
  FUN_005ffb10(*(undefined8 *)(param_1 + 0x4b0),param_2);
  lVar2 = FUN_01c03e40(param_1);
  FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x4b0) + 0x78),*(undefined4 *)(lVar2 + 200));
  lVar2 = FUN_01c03e40(param_1);
  FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 0x4b0) + 0x80),*(undefined4 *)(lVar2 + 0x8c))
  ;
  FUN_005fdf50(*(undefined8 *)(param_1 + 0x4b0),&local_28);
  lVar2 = FUN_01c03e40(param_1);
  FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x4b0) + 0x78),*(undefined4 *)(lVar2 + 0x80))
  ;
  (**(code **)(**(longlong **)(param_1 + 0x4b0) + 200))(*(longlong **)(param_1 + 0x4b0),1,1);
  (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0xc0))
            (*(longlong **)(param_1 + 0x4b0),1,*(int *)(param_1 + 0x9c) + -1);
  uVar1 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x4b0));
  local_58 = local_1c;
  FUN_00428be0(uVar1,local_28,local_24,local_20);
  FUN_005ffb10(*(undefined8 *)(param_1 + 0x4b0),0);
  return;
}

