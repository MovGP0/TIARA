/* Ghidra address: 0054ba40 */
/* Ghidra symbol: FUN_0054ba40 */


void FUN_0054ba40(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 local_40 [32];
  longlong local_20;
  
  local_128 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  local_20 = 0;
  FUN_00417580(local_40,&DAT_00527bf8);
  lVar3 = (**(code **)(*param_1 + 0x60))(param_1);
  uVar5 = *(ulonglong *)(lVar3 + 0x10);
  if ((uVar5 & 0xff00000000000000) == 0xff00000000000000) {
    uVar4 = (**(code **)(*param_1 + 0x20))(param_1);
    uVar4 = FUN_005466a0(uVar4);
    FUN_005376c0(param_3,local_40,uVar4,1);
    FUN_005382b0(local_40,(longlong)param_2 + (uVar5 & 0xffffffffffffff));
  }
  else {
    if ((uVar5 & 0xff00000000000000) == 0xfe00000000000000) {
      uVar5 = *(ulonglong *)(*param_2 + (longlong)(short)uVar5);
    }
    FUN_00534b80(uVar5);
    iVar1 = (**(code **)(*param_1 + 0x50))(param_1);
    if (iVar1 == -0x80000000) {
      FUN_00419260(&local_20,&DAT_00492e48,1,2);
      FUN_00536640(&local_68,param_2);
      FUN_00417c40(local_20,&local_68,&DAT_00527bf8);
      uVar4 = (**(code **)(*param_1 + 0x20))(param_1);
      uVar4 = FUN_005466a0(uVar4);
      FUN_005376c0(param_3,&local_88,uVar4,1);
      FUN_00417c40(local_20 + 0x20,&local_88,&DAT_00527bf8);
      FUN_00557210(&local_a8,uVar5,local_20,0,0,0,0);
    }
    else {
      FUN_00419260(&local_20,&DAT_00492e48,1,3);
      FUN_00536640(&local_c8,param_2);
      FUN_00417c40(local_20,&local_c8,&DAT_00527bf8);
      uVar2 = (**(code **)(*param_1 + 0x50))(param_1);
      FUN_00536490(&local_e8,uVar2);
      FUN_00417c40(local_20 + 0x20,&local_e8,&DAT_00527bf8);
      uVar4 = (**(code **)(*param_1 + 0x20))(param_1);
      uVar4 = FUN_005466a0(uVar4);
      FUN_005376c0(param_3,&local_108,uVar4,1);
      FUN_00417c40(local_20 + 0x40,&local_108,&DAT_00527bf8);
      FUN_00557210(&local_128,uVar5,local_20,0,0,0,0);
    }
  }
  FUN_00417840(&local_128,&DAT_00527bf8,7);
  FUN_00417740(local_40,&DAT_00527bf8);
  FUN_00419430(&local_20,&DAT_00492e48);
  return;
}

