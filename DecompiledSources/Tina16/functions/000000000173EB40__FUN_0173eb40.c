/* Ghidra address: 0173eb40 */
/* Ghidra symbol: FUN_0173eb40 */


ulonglong FUN_0173eb40(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 unaff_RDI;
  bool bVar3;
  
  cVar1 = FUN_0173d820(param_1);
  bVar3 = cVar1 != *(char *)(param_1 + 0x3a);
  if (bVar3) {
    *(undefined1 *)(param_1 + 10) = 1;
    FUN_0173d100(param_1,param_2,*PTR_DAT_02002480,*PTR_DAT_02001560);
    *(undefined1 *)(param_1 + 10) = 0;
    FUN_0173e910(param_1,param_2);
  }
  uVar2 = FUN_0173d820(param_1);
  *(undefined1 *)(param_1 + 0x3a) = uVar2;
  return CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar3) & 0xffffffff;
}

