/* Ghidra address: 01c11f40 */
/* Ghidra symbol: FUN_01c11f40 */


void FUN_01c11f40(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined1 *local_50;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  
  local_50 = auStack_88;
  uVar1 = FUN_0065b870(param_1);
  thunk_FUN_03abe598(uVar1,&local_30);
  uVar1 = FUN_0065b870(param_1);
  thunk_FUN_03e49910(uVar1,&local_40);
  uVar1 = FUN_0065b870(param_1);
  thunk_FUN_0411b3be(0,uVar1,&local_40,2);
  FUN_00423b50(&local_30,-local_40,-local_3c);
  local_68 = local_24;
  thunk_FUN_041a27b3(param_2,local_30,local_2c,local_28);
  FUN_00423b50(&local_40,-local_40,-local_3c);
  local_20 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x4b0));
  FUN_005ffb10(*(undefined8 *)(param_1 + 0x4b0),param_2);
  FUN_005fd6d0(*(undefined8 *)(*(longlong *)(param_1 + 0x4b0) + 0x78),1);
  lVar2 = FUN_01c03e40(param_1);
  FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x4b0) + 0x78),*(undefined4 *)(lVar2 + 200));
  (**(code **)(**(longlong **)(param_1 + 0x4b0) + 200))
            (*(longlong **)(param_1 + 0x4b0),local_38,local_3c);
  (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0xc0))
            (*(longlong **)(param_1 + 0x4b0),local_40,local_3c);
  (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0xc0))
            (*(longlong **)(param_1 + 0x4b0),local_40,local_34);
  lVar2 = FUN_01c03e40(param_1);
  FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x4b0) + 0x78),*(undefined4 *)(lVar2 + 0xc4))
  ;
  (**(code **)(**(longlong **)(param_1 + 0x4b0) + 200))
            (*(longlong **)(param_1 + 0x4b0),local_38 + -1,local_3c + 1);
  (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0xc0))
            (*(longlong **)(param_1 + 0x4b0),local_40 + 1,local_3c + 1);
  (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0xc0))
            (*(longlong **)(param_1 + 0x4b0),local_40 + 1,local_34 + -2);
  lVar2 = FUN_01c03e40(param_1);
  FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x4b0) + 0x78),*(undefined4 *)(lVar2 + 0xd0))
  ;
  (**(code **)(**(longlong **)(param_1 + 0x4b0) + 200))
            (*(longlong **)(param_1 + 0x4b0),local_38 + -1,local_3c);
  (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0xc0))
            (*(longlong **)(param_1 + 0x4b0),local_38 + -1,local_34 + -1);
  (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0xc0))
            (*(longlong **)(param_1 + 0x4b0),local_40 + -1,local_34 + -1);
  lVar2 = FUN_01c03e40(param_1);
  FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x4b0) + 0x78),*(undefined4 *)(lVar2 + 0xcc))
  ;
  (**(code **)(**(longlong **)(param_1 + 0x4b0) + 200))
            (*(longlong **)(param_1 + 0x4b0),local_38 + -2,local_3c + 1);
  (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0xc0))
            (*(longlong **)(param_1 + 0x4b0),local_38 + -2,local_34 + -2);
  (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0xc0))
            (*(longlong **)(param_1 + 0x4b0),local_40,local_34 + -2);
  FUN_005ffb10(*(undefined8 *)(param_1 + 0x4b0),local_20);
  return;
}

