/* Ghidra address: 0174b5b0 */
/* Ghidra symbol: FUN_0174b5b0 */


void FUN_0174b5b0(longlong param_1,undefined8 param_2)

{
  short *local_20;
  
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2d0))(*(longlong **)(param_1 + 0x28),0,&local_20)
  ;
  if ((int)*local_20 != *(int *)(param_1 + 0x38)) {
    FUN_0173d100(param_1,param_2,*PTR_DAT_02002480,*PTR_DAT_02001560);
  }
  return;
}

