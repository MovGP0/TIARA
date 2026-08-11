/* Ghidra address: 013b3ad0 */
/* Ghidra symbol: FUN_013b3ad0 */


undefined8 * FUN_013b3ad0(longlong param_1,byte *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  char *pcVar6;
  int iVar7;
  char local_3c8;
  byte local_3c7 [655];
  byte local_138 [264];
  
  lVar3 = (ulonglong)*param_2 + 1;
  pbVar5 = local_138;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pbVar5 = *param_2;
    param_2 = param_2 + 1;
    pbVar5 = pbVar5 + 1;
  }
  iVar7 = *(int *)(param_1 + 0x10) + -1;
  if (-1 < iVar7) {
    do {
      puVar2 = (undefined8 *)FUN_00b94e60(param_1,iVar7);
      pcVar6 = &local_3c8;
      puVar4 = puVar2;
      for (lVar3 = 0x52; puVar4 = puVar4 + 1, lVar3 != 0; lVar3 = lVar3 + -1) {
        *(undefined8 *)pcVar6 = *puVar4;
        pcVar6 = pcVar6 + 8;
      }
      iVar1 = FUN_00414f50(local_3c7,local_138,(ulonglong)local_3c7[0] + 1);
      if ((iVar1 == 0) && (local_3c8 != '\x03')) {
        return puVar2;
      }
      iVar7 = iVar7 + -1;
    } while (iVar7 != -1);
  }
  return (undefined8 *)0x0;
}

