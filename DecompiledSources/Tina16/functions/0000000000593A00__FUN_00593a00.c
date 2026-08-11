/* Ghidra address: 00593a00 */
/* Ghidra symbol: FUN_00593a00 */


undefined8 FUN_00593a00(undefined8 param_1,byte *param_2,byte *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  byte *pbVar4;
  byte local_218 [256];
  byte local_118 [256];
  
  lVar3 = (ulonglong)*param_2 + 1;
  pbVar4 = local_118;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pbVar4 = *param_2;
    param_2 = param_2 + 1;
    pbVar4 = pbVar4 + 1;
  }
  lVar3 = (ulonglong)*param_3 + 1;
  pbVar4 = local_218;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pbVar4 = *param_3;
    param_3 = param_3 + 1;
    pbVar4 = pbVar4 + 1;
  }
  iVar1 = FUN_00414e30(local_118,local_218);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = FUN_00414e30(local_118,local_218);
    if (iVar1 < 1) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

