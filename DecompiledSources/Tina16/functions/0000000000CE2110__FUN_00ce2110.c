/* Ghidra address: 00ce2110 */
/* Ghidra symbol: FUN_00ce2110 */


longlong FUN_00ce2110(undefined8 param_1)

{
  char cVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  
  pcVar2 = (code *)FUN_00411550(param_1,0xffffffff);
  lVar3 = (*pcVar2)(param_1);
  while ((lVar4 = 0, lVar3 != 0 &&
         (cVar1 = FUN_004113d0(lVar3,&PTR_FUN_00486f38), lVar4 = lVar3, cVar1 == '\0'))) {
    pcVar2 = (code *)FUN_00411550(lVar3,0xffffffff);
    lVar3 = (*pcVar2)(lVar3);
  }
  return lVar4;
}

