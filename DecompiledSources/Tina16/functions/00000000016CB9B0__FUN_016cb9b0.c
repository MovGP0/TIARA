/* Ghidra address: 016cb9b0 */
/* Ghidra symbol: FUN_016cb9b0 */


ulonglong FUN_016cb9b0(byte *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar6;
  byte *pbVar7;
  byte local_128 [256];
  undefined7 uVar5;
  
  lVar3 = (ulonglong)*param_1 + 1;
  pbVar7 = local_128;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pbVar7 = *param_1;
    param_1 = param_1 + 1;
    pbVar7 = pbVar7 + 1;
  }
  iVar1 = FUN_00414f50(local_128,&LAB_016cba64,(ulonglong)local_128[0] + 1);
  uVar5 = (undefined7)((ulonglong)param_1 >> 8);
  uVar4 = CONCAT71(uVar5,iVar1 == 0);
  if ((iVar1 != 0) && (param_2 != 0)) {
    iVar1 = *(int *)(param_2 + 0x10);
    iVar6 = 0;
    if (-1 < iVar1 + -1) {
      do {
        lVar3 = FUN_01d347d0(param_2,iVar6);
        iVar2 = FUN_00414f50(*(undefined8 *)(lVar3 + 8),local_128,
                             (ulonglong)**(byte **)(lVar3 + 8) + 1);
        if (iVar2 == 0) {
          uVar4 = CONCAT71(uVar5,1);
          break;
        }
        iVar6 = iVar6 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return uVar4 & 0xffffffff;
}

