/* Ghidra address: 014a4f70 */
/* Ghidra symbol: FUN_014a4f70 */


void FUN_014a4f70(longlong *param_1)

{
  byte bVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  
  bVar1 = *(byte *)(*param_1 + 0x78);
  if (bVar1 < 8) {
    bVar5 = ((int)CONCAT71((int7)((ulonglong)*param_1 >> 8),1) << (bVar1 & 0x1f) & 0x31U) != 0;
  }
  else {
    bVar5 = false;
  }
  if (bVar5) {
    plVar2 = *(longlong **)(*(longlong *)(*param_1 + 0x48) + 0x448);
    iVar3 = (**(code **)(*plVar2 + 0x28))(plVar2);
    if (0 < iVar3) {
      uVar4 = FUN_01d322a0(plVar2);
      FUN_01d31180(*param_1,0xf406,0x11,uVar4);
      FUN_01d325e0(*param_1,plVar2);
      iVar3 = FUN_01d31a40(*param_1);
      if (iVar3 != 0) {
        FUN_00b047e0(0xfffffff3);
      }
    }
  }
  return;
}

