/* Ghidra address: 0174cc30 */
/* Ghidra symbol: FUN_0174cc30 */


void FUN_0174cc30(longlong param_1,undefined8 param_2)

{
  byte *local_20;
  
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2d0))(*(longlong **)(param_1 + 0x28),1,&local_20)
  ;
  if ((uint)*local_20 != *(uint *)(param_1 + 0x38)) {
    FUN_0173d100(param_1,param_2,*PTR_DAT_02002480,*PTR_DAT_02001560);
  }
  return;
}

