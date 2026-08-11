/* Ghidra address: 00801b00 */
/* Ghidra symbol: FUN_00801b00 */


undefined8 FUN_00801b00(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_1 != *param_2) {
    lVar1 = FUN_006485b0(param_1);
    if (lVar1 == 0) {
      lVar1 = thunk_FUN_03f32902(param_1,4);
      if (lVar1 == *param_2) {
        thunk_FUN_041b2403(param_1,0xb04a,(char)param_2[1],0);
      }
    }
  }
  return 0xffffffff;
}

