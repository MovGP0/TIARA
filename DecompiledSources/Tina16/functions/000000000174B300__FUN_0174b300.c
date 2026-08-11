/* Ghidra address: 0174b300 */
/* Ghidra symbol: FUN_0174b300 */


ulonglong FUN_0174b300(longlong param_1,undefined8 param_2)

{
  undefined8 unaff_RDI;
  bool bVar1;
  short *local_30 [2];
  
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2d0))(*(longlong **)(param_1 + 0x28),0,local_30);
  bVar1 = *(int *)(param_1 + 0x38) != (int)*local_30[0];
  if (bVar1) {
    FUN_0173d100(param_1,param_2,*PTR_DAT_02002480,*PTR_DAT_02001560);
  }
  *(int *)(param_1 + 0x38) = (int)*local_30[0];
  return CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar1) & 0xffffffff;
}

