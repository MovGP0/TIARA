/* Ghidra address: 014a4b50 */
/* Ghidra symbol: FUN_014a4b50 */


void FUN_014a4b50(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  bool bVar8;
  
  bVar1 = *(byte *)(*param_1 + 0x78);
  if (bVar1 < 8) {
    bVar8 = ((int)CONCAT71((int7)((ulonglong)*param_1 >> 8),1) << (bVar1 & 0x1f) & 0x3dU) != 0;
  }
  else {
    bVar8 = false;
  }
  if (bVar8) {
    plVar2 = *(longlong **)(*(longlong *)(*param_1 + 0x48) + 0x1f0);
    lVar7 = *param_1;
    uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,lVar7);
    if (*(byte *)(*param_1 + 0x78) < 8) {
      bVar8 = ((int)CONCAT71((int7)((ulonglong)lVar7 >> 8),1) << (*(byte *)(*param_1 + 0x78) & 0x1f)
              & 0x39U) != 0;
    }
    else {
      bVar8 = false;
    }
    if (bVar8) {
      uVar6 = 0x11;
    }
    else {
      uVar6 = 0x10;
    }
    FUN_01d31180(*param_1,CONCAT62((int6)((ulonglong)param_3 >> 0x10),0xf400) & 0xffffffff,uVar6,
                 uVar4);
    puVar3 = *(undefined8 **)(*(longlong *)(*param_1 + 0x48) + 0x1f0);
    (**(code **)*puVar3)(puVar3,param_1);
    iVar5 = FUN_01d31a40(*param_1);
    if (iVar5 != 0) {
      FUN_00b047e0(0xfffffff3);
    }
  }
  return;
}

