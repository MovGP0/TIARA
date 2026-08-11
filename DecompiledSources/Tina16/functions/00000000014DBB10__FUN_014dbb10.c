/* Ghidra address: 014dbb10 */
/* Ghidra symbol: FUN_014dbb10 */


int FUN_014dbb10(byte *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  byte *pbVar4;
  byte local_128 [264];
  
  lVar2 = (ulonglong)*param_1 + 1;
  pbVar4 = local_128;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar4 = *param_1;
    param_1 = param_1 + 1;
    pbVar4 = pbVar4 + 1;
  }
  for (iVar3 = 0; iVar3 < *(int *)(param_2 + 0x10); iVar3 = iVar3 + 1) {
    lVar2 = FUN_01d347d0(param_2,iVar3);
    iVar1 = FUN_00414f50(*(undefined8 *)(lVar2 + 8),local_128,(ulonglong)**(byte **)(lVar2 + 8) + 1)
    ;
    if (iVar1 == 0) break;
  }
  if (*(int *)(param_2 + 0x10) <= iVar3) {
    iVar3 = -1;
  }
  return iVar3;
}

