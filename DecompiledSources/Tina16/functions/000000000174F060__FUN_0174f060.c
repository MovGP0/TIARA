/* Ghidra address: 0174f060 */
/* Ghidra symbol: FUN_0174f060 */


ulonglong FUN_0174f060(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 unaff_RDI;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  bVar2 = iVar1 != *(int *)(param_1 + 0x40);
  if (bVar2) {
    FUN_0174eec0(param_1,param_2,iVar1);
    FUN_0173d100(param_1,param_2,*PTR_DAT_02002480,*PTR_DAT_02001560);
  }
  return CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar2) & 0xffffffff;
}

