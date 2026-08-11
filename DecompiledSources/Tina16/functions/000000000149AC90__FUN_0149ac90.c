/* Ghidra address: 0149ac90 */
/* Ghidra symbol: FUN_0149ac90 */


void FUN_0149ac90(longlong param_1,undefined8 param_2,int param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  int local_60;
  int local_5c;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_58 = 0;
  local_50[0] = 0;
  local_38 = *param_5;
  local_30 = param_5[1];
  lVar1 = *(longlong *)(param_1 + 0x700);
  local_60 = param_3;
  local_5c = param_4;
  if (param_4 == 0) {
    FUN_005fce70(*(undefined8 *)(*(longlong *)(lVar1 + 0x490) + 0x70),1);
    FUN_005fc860(*(undefined8 *)(*(longlong *)(lVar1 + 0x490) + 0x70),0);
    FUN_005fdab0(*(undefined8 *)(*(longlong *)(lVar1 + 0x490) + 0x80),0xff00000f);
    FUN_005fdcb0(*(undefined8 *)(*(longlong *)(lVar1 + 0x490) + 0x80),1);
    uVar2 = FUN_00635930(&PTR_PTR_00f0f0f0,0xffffffe7);
    local_78 = CONCAT71(local_78._1_7_,1);
    FUN_00636080(*(undefined8 *)(lVar1 + 0x490),0xffffff,uVar2,&local_38);
    cVar5 = '\x02';
  }
  else {
    cVar5 = '\0';
    FUN_005fce70(*(undefined8 *)(*(longlong *)(lVar1 + 0x490) + 0x70),0);
    FUN_005fc860(*(undefined8 *)(*(longlong *)(lVar1 + 0x490) + 0x70),0xff000008);
    FUN_005fdab0(*(undefined8 *)(*(longlong *)(lVar1 + 0x490) + 0x80),0xff000005);
    FUN_005fdcb0(*(undefined8 *)(*(longlong *)(lVar1 + 0x490) + 0x80),0);
    (**(code **)(**(longlong **)(lVar1 + 0x490) + 0xa8))(*(longlong **)(lVar1 + 0x490),&local_38);
  }
  FUN_0084e320(lVar1,local_50,local_60,local_5c);
  local_40 = (**(code **)(**(longlong **)(lVar1 + 0x490) + 0x118))
                       (*(longlong **)(lVar1 + 0x490),local_50[0]);
  iVar3 = FUN_004230c0(&local_38);
  iVar3 = iVar3 - local_40._4_4_;
  iVar4 = local_38._4_4_ + iVar3 / 2;
  local_40._4_4_ = iVar4;
  if (cVar5 == '\0') {
    local_40._0_4_ = (int)local_38 + 4;
  }
  else if (cVar5 == '\x01') {
    local_40._0_4_ = ((int)local_30 - (int)local_40) + -4;
  }
  else if (cVar5 == '\x02') {
    iVar3 = FUN_004230a0(&local_38,(longlong)iVar3 % 2 & 0xffffffff);
    local_40._0_4_ = (int)local_38 + (iVar3 - (int)local_40) / 2;
  }
  FUN_0084e320(lVar1,&local_58,local_60,local_5c);
  local_78 = local_58;
  (**(code **)(**(longlong **)(lVar1 + 0x490) + 0x130))
            (*(longlong **)(lVar1 + 0x490),&local_38,(int)local_40,local_40._4_4_);
  if (((local_5c == 0) && (local_60 == *(int *)(param_1 + 0x924))) &&
     (*(int *)(param_1 + 0x920) != 0)) {
    FUN_0149ab20(auStack_98,*(undefined4 *)(param_1 + 0x920));
  }
  FUN_00414560(&local_58,2);
  return;
}

