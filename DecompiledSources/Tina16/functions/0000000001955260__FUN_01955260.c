/* Ghidra address: 01955260 */
/* Ghidra symbol: FUN_01955260 */


void FUN_01955260(longlong param_1,longlong *param_2,double param_3,double param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  double dVar8;
  undefined1 auStack_88 [32];
  int local_68;
  undefined1 local_50 [16];
  undefined1 *local_40;
  undefined8 local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_40 = auStack_88;
  local_20 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  uVar2 = FUN_0040c770(*(double *)(param_1 + 0xa8) * param_3);
  (**(code **)(*local_20 + 0x88))(local_20,uVar2);
  uVar2 = FUN_0040c770(*(double *)(param_1 + 0xb0) * param_3);
  (**(code **)(*local_20 + 0x70))(local_20,uVar2);
  lVar5 = FUN_00609e10(local_20);
  FUN_005fdab0(*(undefined8 *)(lVar5 + 0x80),0xff00000f);
  plVar6 = (longlong *)FUN_00609e10(local_20);
  iVar3 = (**(code **)(*local_20 + 0x60))(local_20);
  local_68 = (**(code **)(*local_20 + 0x48))(local_20);
  local_68 = local_68 + 1;
  FUN_00498350(local_50,0,0,iVar3 + 1);
  (**(code **)(*plVar6 + 0xa8))(plVar6,local_50);
  FUN_005fdf10(param_2);
  local_28 = thunk_FUN_04137b5f(0);
  uVar7 = (**(code **)(*local_20 + 0xe8))(local_20);
  local_30 = thunk_FUN_041a19a1(local_28,uVar7);
  uVar7 = *(undefined8 *)(param_1 + 0x1a0);
  cVar1 = FUN_004113d0(uVar7,&PTR_FUN_00640c18);
  if (cVar1 == '\0') {
    FUN_0064fca0(uVar7,0x14,local_28,0);
    FUN_0064fca0(*(undefined8 *)(param_1 + 0x1a0),0xf,local_28,0);
  }
  else {
    FUN_006579d0(uVar7,local_28,0,0);
  }
  thunk_FUN_041a19a1(local_28,local_30);
  thunk_FUN_041a2fd8(local_28);
  FUN_005fe090(param_2);
  dVar8 = (double)FUN_019508b0(param_1);
  uVar2 = FUN_0040c770(dVar8 * param_3);
  dVar8 = (double)FUN_01950860(param_1);
  uVar4 = FUN_0040c770(dVar8 * param_4);
  (**(code **)(*param_2 + 0x88))(param_2,uVar2,uVar4,local_20);
  FUN_00410f20(local_20);
  return;
}

