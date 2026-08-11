/* Ghidra address: 01b9e3e0 */
/* Ghidra symbol: FUN_01b9e3e0 */


ulonglong FUN_01b9e3e0(undefined8 *param_1,byte *param_2,undefined1 *param_3)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  byte local_140 [256];
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  
  local_40 = *param_1;
  local_38 = param_1[1];
  local_30 = param_1[2];
  lVar3 = (ulonglong)*param_2 + 1;
  pbVar5 = local_140;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pbVar5 = *param_2;
    param_2 = param_2 + 1;
    pbVar5 = pbVar5 + 1;
  }
  iVar4 = 0;
  iVar6 = *(int *)(local_38 + 0x10);
  if (-1 < iVar6 + -1) {
    do {
      lVar3 = FUN_01d347d0(local_38,iVar4);
      iVar2 = FUN_00414f50(lVar3 + 9,local_140,(ulonglong)*(byte *)(lVar3 + 9) + 1);
      if (iVar2 == 0) {
        lVar3 = FUN_01d347d0(local_38,iVar4);
        bVar1 = *(byte *)(lVar3 + 8);
        *param_3 = 1;
        return (ulonglong)bVar1;
      }
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  iVar6 = *(int *)(local_30 + 0x10);
  iVar4 = 0;
  if (-1 < iVar6 + -1) {
    do {
      lVar3 = FUN_01d347d0(local_30,iVar4);
      iVar2 = FUN_00414f50(lVar3 + 9,local_140,(ulonglong)*(byte *)(lVar3 + 9) + 1);
      if (iVar2 == 0) {
        lVar3 = FUN_01d347d0(local_30,iVar4);
        bVar1 = *(byte *)(lVar3 + 8);
        *param_3 = 0;
        return (ulonglong)bVar1;
      }
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return 0xffffffff;
}

