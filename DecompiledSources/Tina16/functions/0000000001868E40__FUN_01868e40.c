/* Ghidra address: 01868e40 */
/* Ghidra symbol: FUN_01868e40 */


longlong * FUN_01868e40(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 local_40 [16];
  undefined1 *local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_30 = auStack_78;
  local_28 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  (**(code **)(*local_28 + 0xf8))(local_28,0);
  uVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)(*local_28 + 0x88))(local_28,uVar1);
  uVar1 = (**(code **)(*param_2 + 0x48))(param_2);
  (**(code **)(*local_28 + 0x70))(local_28,uVar1);
  FUN_0060bbf0(local_28,3);
  uVar2 = FUN_00609e10(local_28);
  FUN_005fdf10(uVar2);
  lVar3 = FUN_00609e10(local_28);
  FUN_005fdab0(*(undefined8 *)(lVar3 + 0x80),0xffffff);
  plVar4 = (longlong *)FUN_00609e10(local_28);
  uVar1 = (**(code **)(*local_28 + 0x60))(local_28);
  local_58 = (**(code **)(*local_28 + 0x48))(local_28);
  FUN_004238d0(local_40,0,0,uVar1);
  (**(code **)(*plVar4 + 0xa8))(plVar4,local_40);
  local_20 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  (**(code **)(*local_20 + 0xf8))(local_20,0);
  uVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)(*local_20 + 0x88))(local_20,uVar1);
  uVar1 = (**(code **)(*param_2 + 0x48))(param_2);
  (**(code **)(*local_20 + 0x70))(local_20,uVar1);
  FUN_0060bbf0(local_20,6);
  uVar2 = FUN_00609e10(local_20);
  FUN_005fdf10(uVar2);
  lVar3 = FUN_00609e10(local_20);
  FUN_005fdab0(*(undefined8 *)(lVar3 + 0x80),param_3);
  plVar4 = (longlong *)FUN_00609e10(local_20);
  uVar1 = (**(code **)(*local_20 + 0x60))(local_20);
  local_58 = (**(code **)(*local_20 + 0x48))(local_20);
  FUN_004238d0(local_40,0,0,uVar1);
  (**(code **)(*plVar4 + 0xa8))(plVar4,local_40);
  plVar4 = (longlong *)FUN_00609e10(local_20);
  (**(code **)(*plVar4 + 0x88))(plVar4,0,0,param_2);
  FUN_01853bc0(local_28,local_20,param_3,1);
  uVar2 = FUN_00609e10(local_20);
  FUN_005fe090(uVar2);
  uVar2 = FUN_00609e10(local_28);
  FUN_005fe090(uVar2);
  FUN_00410f20(local_20);
  return local_28;
}

