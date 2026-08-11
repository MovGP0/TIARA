/* Ghidra address: 014a4da0 */
/* Ghidra symbol: FUN_014a4da0 */


void FUN_014a4da0(longlong *param_1)

{
  byte bVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  
  bVar1 = *(byte *)(*param_1 + 0x78);
  if (bVar1 < 8) {
    bVar6 = ((int)CONCAT71((int7)((ulonglong)*param_1 >> 8),1) << (bVar1 & 0x1f) & 0x39U) != 0;
  }
  else {
    bVar6 = false;
  }
  if (bVar6) {
    plVar2 = *(longlong **)(*(longlong *)(*param_1 + 0x48) + 0x200);
    uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_01d31180(*param_1,0xf405,0x11,uVar4);
    puVar3 = *(undefined8 **)(*(longlong *)(*param_1 + 0x48) + 0x200);
    (**(code **)*puVar3)(puVar3,param_1);
    iVar5 = FUN_01d31a40(*param_1);
    if (iVar5 != 0) {
      FUN_00b047e0(0xfffffff3);
    }
  }
  return;
}

