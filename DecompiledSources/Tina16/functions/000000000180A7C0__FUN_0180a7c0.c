/* Ghidra address: 0180a7c0 */
/* Ghidra symbol: FUN_0180a7c0 */


void FUN_0180a7c0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 local_38 [16];
  
  plVar4 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  uVar1 = FUN_0040c770(((double)*(int *)(param_1 + 0x5c) / 96.0) * 32.0);
  (**(code **)(*plVar4 + 0x88))(plVar4,uVar1);
  uVar1 = FUN_0040c770(((double)*(int *)(param_1 + 0x5c) / 96.0) * 16.0);
  (**(code **)(*plVar4 + 0x70))(plVar4,uVar1);
  lVar5 = FUN_00609e10(plVar4);
  FUN_005fdab0(*(undefined8 *)(lVar5 + 0x80),0x8080);
  FUN_0060be30(plVar4,0x8080);
  plVar6 = (longlong *)FUN_00609e10(plVar4);
  uVar1 = (**(code **)(*plVar4 + 0x60))(plVar4);
  uVar2 = (**(code **)(*plVar4 + 0x48))(plVar4);
  FUN_00498350(local_38,0,0,uVar1,uVar2);
  (**(code **)(*plVar6 + 0xa8))(plVar6,local_38);
  uVar7 = FUN_01809e30(param_1);
  uVar8 = FUN_00609e10(plVar4);
  FUN_007d6c70(uVar7,uVar8,0,0,param_3,1);
  uVar7 = FUN_01809c50(param_1);
  uVar8 = FUN_00609e10(plVar4);
  iVar3 = (**(code **)(*plVar4 + 0x60))(plVar4);
  FUN_007d6c70(uVar7,uVar8,(longlong)iVar3 / 2 & 0xffffffff,0,param_3,1);
  FUN_0082a4b0(param_2,plVar4);
  FUN_00410f20(plVar4);
  return;
}

