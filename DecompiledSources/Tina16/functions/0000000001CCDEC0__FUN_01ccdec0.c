/* Ghidra address: 01ccdec0 */
/* Ghidra symbol: FUN_01ccdec0 */


void FUN_01ccdec0(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  bool bVar4;
  
  cVar1 = (**(code **)(*param_1 + 0x58))(param_1);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_005fc570(&PTR_FUN_005f2d40,1);
    (**(code **)(*plVar2 + 0x10))(plVar2,*(undefined8 *)(param_2 + 0x70));
    uVar3 = FUN_01cd6670(param_1);
    if ((byte)uVar3 < 8) {
      bVar4 = ((int)CONCAT71((int7)((ulonglong)uVar3 >> 8),1) << ((byte)uVar3 & 0x1f) & 0xf0U) != 0;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      FUN_01ccde20(param_1,param_2);
    }
    FUN_01d2d9d0(param_1,param_2);
    uVar3 = FUN_01cd6670(param_1);
    if ((byte)uVar3 < 8) {
      bVar4 = ((int)CONCAT71((int7)((ulonglong)uVar3 >> 8),1) << ((byte)uVar3 & 0x1f) & 0xf0U) != 0;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      FUN_01ccde90(param_1,param_2);
    }
    (**(code **)(**(longlong **)(param_2 + 0x70) + 0x10))(*(longlong **)(param_2 + 0x70),plVar2);
    FUN_00410f20(plVar2);
  }
  return;
}

