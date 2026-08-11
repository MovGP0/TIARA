/* Ghidra address: 017889e0 */
/* Ghidra symbol: FUN_017889e0 */


void FUN_017889e0(longlong param_1,undefined8 param_2,int param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_50 = 0;
  local_40 = 0;
  local_48 = 0;
  local_38 = *param_5;
  uStack_30 = param_5[1];
  lVar1 = *(longlong *)(param_1 + 0x6d0);
  if (param_4 < *(int *)(lVar1 + 0x4c0)) goto code_r0x01788be7;
  lVar2 = *(longlong *)(lVar1 + 0x490);
  uVar8 = FUN_00f03860(*(undefined8 *)(lVar1 + 0x660),param_3);
  uVar8 = FUN_00f03060(uVar8);
  FUN_005ff880(lVar2,uVar8);
  if (param_3 == 0) {
    FUN_0084e320(lVar1,&local_40,3,param_4);
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x6e8) + 0x4a0);
    (**(code **)(*plVar3 + 0x18))(plVar3,&local_48,4);
    iVar5 = FUN_00416db0(local_40,local_48);
    if (iVar5 != 0) goto LAB_01788ad6;
    uVar8 = *(undefined8 *)(lVar2 + 0x70);
    uVar6 = FUN_005fce60(uVar8);
    FUN_005fce70(uVar8,uVar6 | 1);
  }
  else {
LAB_01788ad6:
    uVar8 = FUN_00f03860(*(undefined8 *)(lVar1 + 0x660),param_3);
    uVar8 = FUN_00f03060(uVar8);
    FUN_005ff880(lVar2,uVar8);
  }
  uVar8 = FUN_00f03860(*(undefined8 *)(lVar1 + 0x660),param_3);
  uVar7 = FUN_00f03040(uVar8);
  FUN_005fdab0(*(undefined8 *)(lVar2 + 0x80),uVar7);
  uVar8 = FUN_00f03860(*(undefined8 *)(lVar1 + 0x660),param_3);
  FUN_0084e320(lVar1,&local_50,param_3,param_4);
  uVar4 = FUN_00f03010(uVar8);
  FUN_00f00af0(*(undefined8 *)(lVar1 + 0x490),&local_38,2,2,local_50,uVar4);
  if (param_3 == 7) {
    lVar2 = *(longlong *)(param_1 + 0x738);
    uVar6 = param_4 - *(int *)(lVar1 + 0x4c0);
    if (*(uint *)(lVar2 + 0x10) <= uVar6) {
      FUN_00594f90();
    }
    FUN_005fdab0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x6d0) + 0x490) + 0x80),
                 *(undefined4 *)(*(longlong *)(lVar2 + 8) + (longlong)(int)uVar6 * 4));
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x6d0) + 0x490);
    (**(code **)(*plVar3 + 0xa8))(plVar3,&local_38);
  }
code_r0x01788be7:
  FUN_00414560(&local_50,3);
  return;
}

