/* Ghidra address: 013b4630 */
/* Ghidra symbol: FUN_013b4630 */


void FUN_013b4630(longlong param_1,byte *param_2,undefined8 *param_3,undefined1 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 local_3f8;
  undefined8 local_168 [6];
  byte local_138 [264];
  
  lVar3 = (ulonglong)*param_2 + 1;
  pbVar5 = local_138;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pbVar5 = *param_2;
    param_2 = param_2 + 1;
    pbVar5 = pbVar5 + 1;
  }
  puVar6 = local_168;
  for (lVar3 = 6; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar6 = *param_3;
    param_3 = param_3 + 1;
    puVar6 = puVar6 + 1;
  }
  iVar8 = *(int *)(param_1 + 0x10);
  iVar4 = 0;
  if (-1 < iVar8 + -1) {
    do {
      puVar2 = (undefined8 *)FUN_00b94e60(param_1,iVar4);
      puVar7 = &local_3f8;
      puVar6 = puVar2;
      for (lVar3 = 0x52; puVar6 = puVar6 + 1, lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar7 = *puVar6;
        puVar7 = puVar7 + 1;
      }
      iVar1 = FUN_00414f50((longlong)&local_3f8 + 1,local_138,(ulonglong)local_3f8._1_1_ + 1);
      if (iVar1 == 0) {
        FUN_013b3ec0(param_1,puVar2,local_168,param_4);
      }
      iVar4 = iVar4 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  return;
}

