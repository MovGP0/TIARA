/* Ghidra address: 00664e30 */
/* Ghidra symbol: FUN_00664e30 */


void FUN_00664e30(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_00664d00();
  if (lVar1 != param_2) {
    if (param_2 == 0) {
      thunk_FUN_039ed528();
    }
    else {
      thunk_FUN_0416f4fc(param_2);
    }
  }
  return;
}

