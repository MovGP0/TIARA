/* Ghidra address: 0186fbb0 */
/* Ghidra symbol: FUN_0186fbb0 */


void FUN_0186fbb0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  double dVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  double dVar9;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_48 = *param_3;
  uStack_40 = param_3[1];
  lVar2 = param_1[1];
  dVar1 = (double)param_1[9];
  plVar3 = (longlong *)param_1[0xe];
  dVar9 = (double)FUN_019508b0(lVar2);
  uVar4 = FUN_0040c770(dVar9 * dVar1);
  dVar9 = (double)FUN_01950860(lVar2);
  uVar5 = FUN_0040c770(dVar9 * dVar1);
  dVar9 = (double)FUN_019508b0(lVar2);
  uVar6 = FUN_0040c770((dVar9 + *(double *)(lVar2 + 0xa8)) * dVar1 + 1.0);
  dVar9 = (double)FUN_01950860(lVar2);
  uVar7 = FUN_0040c770((dVar9 + *(double *)(lVar2 + 0xb0)) * dVar1 + 1.0);
  FUN_00498350(&local_58,uVar4,uVar5,uVar6,uVar7);
  uVar4 = FUN_0040c770(param_1[7]);
  uVar5 = FUN_0040c770(param_1[8]);
  FUN_00423b50(&local_58,uVar4,uVar5);
  (**(code **)(*plVar3 + 400))(plVar3,local_58,local_54,local_50 - local_58,local_4c - local_54);
  (**(code **)(*param_1 + 0xb8))(param_1);
  iVar8 = FUN_0195cef0(lVar2);
  if (iVar8 == 0x1fffffff) {
    FUN_0064e030(plVar3,0xffffff);
  }
  else {
    uVar4 = FUN_0195cef0(lVar2);
    FUN_0064e030(plVar3,uVar4);
  }
  FUN_0065bb80(plVar3,0);
  FUN_006804c0(plVar3,0);
  FUN_0064e700(plVar3);
  (**(code **)(*plVar3 + 600))(plVar3);
  FUN_00680ad0(plVar3);
  *(undefined1 *)(param_1 + 0xf) = 0;
  return;
}

