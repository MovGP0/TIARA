/* Ghidra address: 013b3b70 */
/* Ghidra symbol: FUN_013b3b70 */


ulonglong FUN_013b3b70(longlong param_1,byte *param_2,longlong param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  undefined8 unaff_R13;
  ulonglong uVar6;
  int iVar7;
  undefined8 local_3c8;
  longlong local_2c0;
  byte local_138 [264];
  
  lVar3 = (ulonglong)*param_2 + 1;
  pbVar4 = local_138;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pbVar4 = *param_2;
    param_2 = param_2 + 1;
    pbVar4 = pbVar4 + 1;
  }
  uVar6 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),1);
  iVar7 = *(int *)(param_1 + 0x10) + -1;
  if (-1 < iVar7) {
    do {
      puVar2 = (undefined8 *)FUN_00b94e60(param_1,iVar7);
      puVar5 = &local_3c8;
      for (lVar3 = 0x52; puVar2 = puVar2 + 1, lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar5 = *puVar2;
        puVar5 = puVar5 + 1;
      }
      iVar1 = FUN_00414f50((longlong)&local_3c8 + 1,local_138,(ulonglong)local_3c8._1_1_ + 1);
      if ((iVar1 == 0) && (local_2c0 == param_3)) {
        uVar6 = 0;
        break;
      }
      iVar7 = iVar7 + -1;
    } while (iVar7 != -1);
  }
  return uVar6 & 0xffffffff;
}

