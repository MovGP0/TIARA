/* Ghidra address: 006ebf00 */
/* Ghidra symbol: FUN_006ebf00 */


ulonglong FUN_006ebf00(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 unaff_RDI;
  ulonglong uVar2;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  for (; param_2 != 0; param_2 = FUN_00410ca0(param_2)) {
    cVar1 = FUN_00410be0(param_2,param_3);
    if (cVar1 != '\0') goto LAB_006ebf38;
  }
  uVar2 = 0;
LAB_006ebf38:
  return uVar2 & 0xffffffff;
}

