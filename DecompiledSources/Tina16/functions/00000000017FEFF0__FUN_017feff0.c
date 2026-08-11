/* Ghidra address: 017feff0 */
/* Ghidra symbol: FUN_017feff0 */


void FUN_017feff0(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  byte *pbVar3;
  byte local_118 [256];
  
  lVar2 = (ulonglong)*param_3 + 1;
  pbVar3 = local_118;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_3;
    param_3 = param_3 + 1;
    pbVar3 = pbVar3 + 1;
  }
  uVar1 = FUN_0040f200(PTR_DAT_02002680,L"ABSTRACT:TGraphable.SetNodeName");
  FUN_0040f590(uVar1);
  FUN_00409900();
  FUN_00b94c60();
  return;
}

