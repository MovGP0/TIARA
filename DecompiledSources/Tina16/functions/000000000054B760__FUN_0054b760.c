/* Ghidra address: 0054b760 */
/* Ghidra symbol: FUN_0054b760 */


undefined8 FUN_0054b760(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  longlong local_30 [2];
  
  local_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  local_30[0] = 0;
  lVar3 = (**(code **)(*param_1 + 0x60))(param_1);
  uVar6 = *(ulonglong *)(lVar3 + 8);
  if ((uVar6 & 0xff00000000000000) == 0xff00000000000000) {
    uVar4 = (**(code **)(*param_1 + 0x20))(param_1);
    uVar4 = FUN_005466a0(uVar4);
    uVar5 = FUN_00417740(param_2,&DAT_00527bf8);
    FUN_00538080((longlong)param_3 + (uVar6 & 0xffffffffffffff),uVar4,uVar5);
  }
  else {
    if ((uVar6 & 0xff00000000000000) == 0xfe00000000000000) {
      uVar6 = *(ulonglong *)(*param_3 + (longlong)(short)uVar6);
    }
    FUN_00534b80(uVar6);
    iVar1 = (**(code **)(*param_1 + 0x50))(param_1);
    if (iVar1 == -0x80000000) {
      FUN_00419260(local_30,&DAT_00492e48,1,1);
      FUN_00536640(&local_58,param_3);
      FUN_00417c40(local_30[0],&local_58,&DAT_00527bf8);
      uVar4 = (**(code **)(*param_1 + 0x20))(param_1);
      uVar4 = FUN_005466a0(uVar4);
      FUN_00557210(param_2,uVar6,local_30[0],0,uVar4,0,0);
    }
    else {
      FUN_00419260(local_30,&DAT_00492e48,1,2);
      FUN_00536640(&local_78,param_3);
      FUN_00417c40(local_30[0],&local_78,&DAT_00527bf8);
      uVar2 = (**(code **)(*param_1 + 0x50))(param_1);
      FUN_00536490(&local_98,uVar2);
      FUN_00417c40(local_30[0] + 0x20,&local_98,&DAT_00527bf8);
      uVar4 = (**(code **)(*param_1 + 0x20))(param_1);
      uVar4 = FUN_005466a0(uVar4);
      FUN_00557210(param_2,uVar6,local_30[0],0,uVar4,0,0);
    }
  }
  FUN_00417840(&local_98,&DAT_00527bf8,3);
  FUN_00419430(local_30,&DAT_00492e48);
  return param_2;
}

