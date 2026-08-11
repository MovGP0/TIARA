/* Ghidra address: 01bd9a10 */
/* Ghidra symbol: FUN_01bd9a10 */


bool FUN_01bd9a10(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined8 *param_6)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  local_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  local_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  local_40 = *param_6;
  uStack_38 = param_6[1];
  uStack_30 = param_6[2];
  FUN_0046bd60(&local_40);
  FUN_004685b0(&local_60,0,1);
  cVar1 = FUN_0046f320(&local_40,&local_60);
  if (cVar1 == '\0') {
    uVar4 = FUN_01bfaa70(*(undefined8 *)(param_1 + 0x18));
    FUN_00461840(&local_78,&local_40);
    FUN_004685b0(&local_90,1,1);
    FUN_0046f1e0(&local_78,&local_90);
    uVar2 = FUN_00462650(&local_78);
    lVar3 = FUN_01bfb960(uVar4,uVar2);
    plVar5 = *(longlong **)(lVar3 + 0x80);
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x18);
    cVar1 = FUN_004113d0(lVar3,&PTR_FUN_01bee940);
    if (cVar1 == '\0') {
      plVar5 = *(longlong **)(lVar3 + 0x80);
    }
    else {
      plVar5 = *(longlong **)(lVar3 + 0x18);
    }
  }
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0xe0))(plVar5,local_a0);
    uVar4 = FUN_0064d1f0(plVar5,local_a0);
    local_48._0_4_ = (undefined4)uVar4;
    *param_2 = (undefined4)local_48;
    local_48._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
    *param_3 = local_48._4_4_;
    *param_4 = (int)plVar5[0x13];
    *param_5 = *(undefined4 *)((longlong)plVar5 + 0x9c);
    local_48 = uVar4;
  }
  FUN_00417840(&local_90,&DAT_004013f0,3);
  FUN_00460ba0(&local_40);
  return plVar5 == (longlong *)0x0;
}

