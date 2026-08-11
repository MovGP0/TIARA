/* Ghidra address: 00edbc80 */
/* Ghidra symbol: FUN_00edbc80 */


bool FUN_00edbc80(undefined8 param_1,char param_2,byte *param_3)

{
  int iVar1;
  longlong lVar2;
  byte *pbVar3;
  bool bVar4;
  byte local_118 [256];
  
  lVar2 = (ulonglong)*param_3 + 1;
  pbVar3 = local_118;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_3;
    param_3 = param_3 + 1;
    pbVar3 = pbVar3 + 1;
  }
  if (param_2 == '\b') {
    if ((((local_118[0] != 0) &&
         (iVar1 = FUN_00414f50(local_118,&DAT_00edbd80,(ulonglong)local_118[0] + 1), iVar1 != 0)) &&
        (iVar1 = FUN_00414f50(local_118,&DAT_00edbd82,(ulonglong)local_118[0] + 1), iVar1 != 0)) &&
       (((iVar1 = FUN_00414f50(local_118,&DAT_00edbd85,(ulonglong)local_118[0] + 1), iVar1 != 0 &&
         (iVar1 = FUN_00414f50(local_118,&DAT_00edbd87,(ulonglong)local_118[0] + 1), iVar1 != 0)) &&
        ((iVar1 = FUN_00414f50(local_118,&DAT_00edbd89,(ulonglong)local_118[0] + 1), iVar1 != 0 &&
         (iVar1 = FUN_00414f50(local_118,&LAB_00edbd8b,(ulonglong)local_118[0] + 1), iVar1 != 0)))))
       ) {
      return false;
    }
    bVar4 = true;
  }
  else {
    bVar4 = local_118[0] == 0;
  }
  return bVar4;
}

