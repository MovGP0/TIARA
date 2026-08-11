/* Ghidra address: 00af70a0 */
/* Ghidra symbol: FUN_00af70a0 */


void FUN_00af70a0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar5;
  undefined8 in_stack_ffffffffffffff58;
  uint uVar6;
  undefined8 in_stack_ffffffffffffff60;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 local_38 [16];
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffff60 >> 0x20);
  uVar6 = (uint)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  FUN_004238d0(local_38,0,0,param_4,param_5);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x8b0) + 0x188);
  if ((*(char *)(*(longlong *)(param_1 + 0x8b0) + 0x91) == '\0') || (plVar1 == (longlong *)0x0)) {
    FUN_00a45f10(param_2,local_38,0,0,0,0,0,0,(ulonglong)uVar6 << 0x20,
                 CONCAT44(uVar3,*(undefined4 *)(*(longlong *)(param_1 + 0x740) + 200)));
  }
  else {
    uVar3 = (**(code **)(*plVar1 + 0x18))(plVar1);
    uVar4 = (**(code **)(*plVar1 + 0x10))(plVar1);
    lVar2 = *(longlong *)(param_1 + 0x8b0);
    local_50 = *(undefined8 *)(lVar2 + 400);
    uStack_40 = *(undefined8 *)(lVar2 + 0x1a0);
    uStack_48._1_1_ = (char)((ulonglong)*(undefined8 *)(lVar2 + 0x198) >> 8);
    if (uStack_48._1_1_ != '\0') {
      param_3 = 0;
      param_6 = param_5;
    }
    uStack_48 = *(undefined8 *)(lVar2 + 0x198);
    FUN_00a2c580(&local_50,local_38,0,param_3,param_4,param_6,CONCAT44(uVar5,uVar3),uVar4,&local_54,
                 &local_58,&local_5c,&local_60);
    FUN_00a45f10(param_2,local_38,local_54,local_58,local_5c,local_60,plVar1,uVar3,uVar4,
                 *(undefined4 *)(*(longlong *)(param_1 + 0x740) + 200));
  }
  return;
}

