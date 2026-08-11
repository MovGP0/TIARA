/* Ghidra address: 0089ee60 */
/* Ghidra symbol: FUN_0089ee60 */


undefined8 FUN_0089ee60(undefined8 param_1,ushort param_2,ushort param_3)

{
  longlong lVar1;
  ushort uVar2;
  short sVar3;
  
  FUN_004169f0(param_1,((uint)param_3 - (uint)param_2) + 1);
  if (param_2 <= param_3) {
    sVar3 = (param_3 - param_2) + 1;
    uVar2 = param_2;
    do {
      lVar1 = FUN_00414de0(param_1);
      *(ushort *)(lVar1 + -2 + (longlong)(int)(((uint)uVar2 - (uint)param_2) + 1) * 2) = uVar2;
      uVar2 = uVar2 + 1;
      sVar3 = sVar3 + -1;
    } while (sVar3 != 0);
  }
  return param_1;
}

