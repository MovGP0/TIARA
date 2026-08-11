/* Ghidra address: 018acaa0 */
/* Ghidra symbol: FUN_018acaa0 */


void FUN_018acaa0(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined1 local_38 [24];
  
  plVar4 = (longlong *)FUN_006d6380(*(undefined8 *)(param_1 + 0x568));
  iVar1 = (**(code **)(*plVar4 + 0x28))(plVar4);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x580) + 0x90))(*(longlong **)(param_1 + 0x580));
  if (iVar2 <= iVar1) {
    plVar4 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
    uVar5 = FUN_00609e10(plVar4);
    FUN_005fdf10(uVar5);
    (**(code **)(*plVar4 + 0x88))(plVar4,0x10);
    (**(code **)(*plVar4 + 0x70))(plVar4,0x10);
    lVar6 = FUN_00609e10(plVar4);
    FUN_005fdab0(*(undefined8 *)(lVar6 + 0x80),0x8080);
    plVar7 = (longlong *)FUN_00609e10(plVar4);
    FUN_00498350(local_38,0,0,0x10,0x10);
    (**(code **)(*plVar7 + 0xa8))(plVar7,local_38);
    uVar5 = FUN_0180bfb0();
    uVar5 = FUN_0180a040(uVar5);
    uVar8 = FUN_00609e10(plVar4);
    FUN_007d6c70(uVar5,uVar8,0,0,0x11,1);
    uVar3 = FUN_0060a330(plVar4);
    FUN_007d5ad0(*(undefined8 *)(param_1 + 0x580),plVar4,uVar3);
    uVar5 = FUN_00609e10(plVar4);
    FUN_005fe090(uVar5);
    FUN_00410f20(plVar4);
  }
  return;
}

