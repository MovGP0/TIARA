/* Ghidra address: 0174a770 */
/* Ghidra symbol: FUN_0174a770 */


void FUN_0174a770(longlong param_1,undefined8 param_2)

{
  char *local_20;
  
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2d0))(*(longlong **)(param_1 + 0x28),0,&local_20)
  ;
  if (*local_20 != *(char *)(param_1 + 0x3a)) {
    *(undefined1 *)(param_1 + 10) = 1;
    FUN_0173d100(param_1,param_2,*PTR_DAT_02002480,*PTR_DAT_02001560);
    *(undefined1 *)(param_1 + 10) = 0;
  }
  return;
}

