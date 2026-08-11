/* Ghidra address: 01c17d30 */
/* Ghidra symbol: FUN_01c17d30 */


void FUN_01c17d30(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 *local_50;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined8 local_20;
  
  local_50 = auStack_a8;
  uVar2 = FUN_0065b870(param_1);
  thunk_FUN_03abe598(uVar2,&local_30);
  uVar2 = FUN_0065b870(param_1);
  thunk_FUN_03e49910(uVar2,&local_40);
  uVar2 = FUN_0065b870(param_1);
  thunk_FUN_0411b3be(0,uVar2,&local_40,2);
  FUN_00423b50(&local_30,-local_40,-local_3c);
  thunk_FUN_041a27b3(param_2,local_30,local_2c,local_28);
  FUN_00423b50(&local_40,-local_40,-local_3c);
  local_20 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x4b0));
  plVar3 = (longlong *)FUN_00781840();
  cVar1 = (**(code **)(*plVar3 + 0x98))(plVar3);
  if (cVar1 != '\0') {
    uVar2 = FUN_00781840();
    cVar1 = FUN_00779360(uVar2);
    if (cVar1 == '\0') {
      FUN_005ffb10(*(undefined8 *)(param_1 + 0x4b0),param_2);
      uVar2 = FUN_00781840();
      plVar3 = (longlong *)FUN_00781840();
      (**(code **)(*plVar3 + 0x158))(plVar3,local_60,0x13);
      local_88 = CONCAT44(local_88._4_4_,local_34);
      FUN_004238d0(local_70,0,0,local_38);
      local_88 = 0;
      local_80 = 0;
      FUN_00778dc0(uVar2,param_2,local_60,local_70);
      FUN_005ffb10(*(undefined8 *)(param_1 + 0x4b0),local_20);
      return;
    }
  }
  FUN_005ffb10(*(undefined8 *)(param_1 + 0x4b0),param_2);
  FUN_005fd6d0(*(undefined8 *)(*(longlong *)(param_1 + 0x4b0) + 0x78),1);
  lVar4 = FUN_01c03e40(param_1);
  FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x4b0) + 0x78),*(undefined4 *)(lVar4 + 200));
  (**(code **)(**(longlong **)(param_1 + 0x4b0) + 200))
            (*(longlong **)(param_1 + 0x4b0),local_38,local_3c);
  (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0xc0))
            (*(longlong **)(param_1 + 0x4b0),local_40,local_3c);
  (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0xc0))
            (*(longlong **)(param_1 + 0x4b0),local_40,local_34);
  lVar4 = FUN_01c03e40(param_1);
  FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x4b0) + 0x78),*(undefined4 *)(lVar4 + 0xc4))
  ;
  (**(code **)(**(longlong **)(param_1 + 0x4b0) + 200))
            (*(longlong **)(param_1 + 0x4b0),local_38 + -1,local_3c + 1);
  (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0xc0))
            (*(longlong **)(param_1 + 0x4b0),local_40 + 1,local_3c + 1);
  (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0xc0))
            (*(longlong **)(param_1 + 0x4b0),local_40 + 1,local_34 + -2);
  lVar4 = FUN_01c03e40(param_1);
  FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x4b0) + 0x78),*(undefined4 *)(lVar4 + 0xd0))
  ;
  (**(code **)(**(longlong **)(param_1 + 0x4b0) + 200))
            (*(longlong **)(param_1 + 0x4b0),local_38 + -1,local_3c);
  (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0xc0))
            (*(longlong **)(param_1 + 0x4b0),local_38 + -1,local_34 + -1);
  (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0xc0))
            (*(longlong **)(param_1 + 0x4b0),local_40 + -1,local_34 + -1);
  lVar4 = FUN_01c03e40(param_1);
  FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x4b0) + 0x78),*(undefined4 *)(lVar4 + 0xcc))
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

