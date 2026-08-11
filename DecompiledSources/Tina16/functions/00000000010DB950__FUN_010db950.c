/* Ghidra address: 010db950 */
/* Ghidra symbol: FUN_010db950 */


void FUN_010db950(void)

{
  char cVar1;
  longlong lVar2;
  
  if ((*PTR_DAT_02003450 == '\0') && (*PTR_DAT_020050d0 != '\0')) {
    lVar2 = FUN_010e1630(3,1,0,0);
    if (lVar2 != 0) {
      FUN_004d2b10(*(undefined8 *)PTR_DAT_02004030,lVar2);
      FUN_00805200(lVar2);
    }
    while( true ) {
      cVar1 = FUN_010e3200();
      if (cVar1 == '\0') break;
      FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
    }
  }
  if (*PTR_DAT_02003450 == '\0') {
    FUN_00e1e050();
    *PTR_DAT_020050d0 = 0;
  }
  return;
}

