/* Ghidra address: 014a4ce0 */
/* Ghidra symbol: FUN_014a4ce0 */


void FUN_014a4ce0(longlong *param_1)

{
  byte bVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  bool bVar7;
  
  bVar1 = *(byte *)(*param_1 + 0x78);
  if (bVar1 < 8) {
    bVar7 = ((int)CONCAT71((int7)((ulonglong)*param_1 >> 8),1) << (bVar1 & 0x1f) & 0x39U) != 0;
  }
  else {
    bVar7 = false;
  }
  if (bVar7) {
    plVar2 = *(longlong **)(*(longlong *)(*param_1 + 0x48) + 0x1f8);
    uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,*param_1);
    plVar2 = *(longlong **)(*(longlong *)(*param_1 + 0x48) + 0x1f8);
    uVar5 = (**(code **)(*plVar2 + 0x18))(plVar2,*param_1);
    FUN_01d31180(*param_1,0xf403,uVar5,uVar4);
    puVar3 = *(undefined8 **)(*(longlong *)(*param_1 + 0x48) + 0x1f8);
    (**(code **)*puVar3)(puVar3,param_1);
    iVar6 = FUN_01d31a40(*param_1);
    if (iVar6 != 0) {
      FUN_00b047e0(0xfffffff3);
    }
  }
  return;
}

