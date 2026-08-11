/* Ghidra address: 01d32af0 */
/* Ghidra symbol: FUN_01d32af0 */


ulonglong FUN_01d32af0(longlong param_1,byte *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  byte *pbVar4;
  ulonglong unaff_R13;
  byte local_22e [262];
  byte local_128 [256];
  
  lVar3 = (ulonglong)*param_2 + 1;
  pbVar4 = local_128;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pbVar4 = *param_2;
    param_2 = param_2 + 1;
    pbVar4 = pbVar4 + 1;
  }
  if (*(char *)(param_1 + 8) == '\0') {
    iVar2 = FUN_01d31a40(param_1);
    if (iVar2 == 0) {
      local_22e[0] = 0;
      while( true ) {
        cVar1 = FUN_01d30db0(param_1);
        if (cVar1 != '\0') break;
        iVar2 = FUN_01d31a40(param_1);
        if (iVar2 != 0) break;
        iVar2 = FUN_00414f50(local_22e,local_128,(ulonglong)local_22e[0] + 1);
        if (iVar2 == 0) break;
        FUN_01d32800(param_1,local_22e);
      }
      iVar2 = FUN_01d31a40(param_1);
      if (iVar2 == 0) {
        iVar2 = FUN_00414f50(local_22e,local_128,(ulonglong)local_22e[0] + 1);
        if (iVar2 == 0) {
          unaff_R13 = CONCAT71((int7)(unaff_R13 >> 8),1);
          goto LAB_01d32bb3;
        }
      }
      unaff_R13 = 0;
    }
  }
  else {
    FUN_01d31a70(param_1,0x1000);
  }
LAB_01d32bb3:
  return unaff_R13 & 0xffffffff;
}

