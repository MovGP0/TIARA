/* Ghidra address: 01757b40 */
/* Ghidra symbol: FUN_01757b40 */


ulonglong FUN_01757b40(longlong *param_1,undefined8 param_2)

{
  undefined8 unaff_RDI;
  bool bVar1;
  
  bVar1 = (char)param_1[7] != *(char *)((longlong)param_1 + 0x39);
  if (bVar1) {
    (**(code **)(*param_1 + 0x48))(param_1,param_2);
    FUN_0173d100(param_1,param_2,*PTR_DAT_02002480,*PTR_DAT_02001560);
  }
  *(char *)((longlong)param_1 + 0x39) = (char)param_1[7];
  return CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar1) & 0xffffffff;
}

