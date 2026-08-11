/* Ghidra address: 01d31040 */
/* Ghidra symbol: FUN_01d31040 */


ulonglong FUN_01d31040(longlong param_1,short param_2)

{
  char cVar1;
  int iVar2;
  ulonglong unaff_RDI;
  short local_30 [8];
  
  if (*(char *)(param_1 + 8) == '\0') {
    iVar2 = FUN_01d31a40(param_1);
    if (iVar2 == 0) {
      local_30[0] = 0;
      while( true ) {
        cVar1 = FUN_01d30db0(param_1);
        if (cVar1 != '\0') break;
        iVar2 = FUN_01d31a40(param_1);
        if ((iVar2 != 0) || (local_30[0] == param_2)) break;
        FUN_01d30e90(param_1,local_30);
      }
      iVar2 = FUN_01d31a40(param_1);
      if ((iVar2 == 0) && (local_30[0] == param_2)) {
        FUN_01d30f70(param_1);
        unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),1);
      }
      else {
        unaff_RDI = 0;
      }
    }
  }
  else {
    FUN_01d31a70(param_1,0x1000);
  }
  return unaff_RDI & 0xffffffff;
}

