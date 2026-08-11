/* Ghidra address: 00655a90 */
/* Ghidra symbol: FUN_00655a90 */


undefined8 FUN_00655a90(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_1 != *param_2) {
    lVar1 = FUN_006485b0(param_1);
    if (lVar1 == 0) {
      lVar1 = thunk_FUN_04118143(param_1,0xfffffff8);
      if (lVar1 == *param_2) {
        thunk_FUN_041b2403(param_1,0xb04a,(char)param_2[1],0);
      }
    }
  }
  return 0xffffffff;
}

