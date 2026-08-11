/* Ghidra address: 018929e0 */
/* Ghidra symbol: FUN_018929e0 */


void FUN_018929e0(longlong *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 local_48 [16];
  int local_38;
  int local_34;
  
  uVar3 = thunk_FUN_0412b593(0x10);
  uVar4 = FUN_0065b870(param_1);
  uVar4 = thunk_FUN_0411fe47(uVar4);
  uVar1 = thunk_FUN_041cde23(0xf);
  uVar5 = thunk_FUN_0412d81c(uVar1);
  uVar6 = thunk_FUN_041a19a1(uVar4,uVar5);
  (**(code **)(*param_1 + 0xe0))(param_1,local_48);
  thunk_FUN_03984819(uVar4,local_48,uVar5);
  thunk_FUN_041a19a1(uVar4,uVar6);
  thunk_FUN_0416f828(uVar5);
  uVar5 = FUN_0065b870(param_1);
  thunk_FUN_03e49910(uVar5,&local_38);
  FUN_00423b50(&local_38,-local_38,-local_34);
  FUN_00429590(uVar4,&local_38,uVar3);
  uVar2 = *(int *)((longlong)param_1 + 0x9c) - 1;
  thunk_FUN_0415f13b(&local_38,((int)param_1[0x13] - (int)param_1[0xb1]) + -3,1,
                     (int)param_1[0x13] + -1,uVar2);
  FUN_0180e220(param_1[0x92],&local_38,0xff000011,1,uVar2 & 0xffffff00);
  uVar3 = FUN_0065b870(param_1);
  thunk_FUN_041a9b5c(uVar3,uVar4);
  return;
}

