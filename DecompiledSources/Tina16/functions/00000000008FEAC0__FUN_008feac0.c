/* Ghidra address: 008feac0 */
/* Ghidra symbol: FUN_008feac0 */


ulonglong FUN_008feac0(longlong param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  undefined8 unaff_RDI;
  ulonglong uVar2;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  *(char *)(param_1 + 0x30) = param_3;
  if (param_3 == '\0') {
    FUN_00414520(param_1 + 8);
  }
  else {
    cVar1 = FUN_008fb370(param_2);
    if (cVar1 == '\0') {
      FUN_00414520(param_1 + 8);
      uVar2 = 0;
    }
    else {
      FUN_00414b90(param_1 + 8,param_2);
    }
  }
  return uVar2 & 0xffffffff;
}

