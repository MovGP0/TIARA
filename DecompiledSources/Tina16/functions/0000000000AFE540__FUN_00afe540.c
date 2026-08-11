/* Ghidra address: 00afe540 */
/* Ghidra symbol: FUN_00afe540 */


void FUN_00afe540(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((param_2 != 0) && (*PTR_DAT_020026b8 == '\b')) {
    lVar1 = FUN_00608880(param_2);
    if (lVar1 != 0) {
      if (*(longlong *)PTR_DAT_020036e8 != 0) {
        thunk_FUN_0416f828(*(undefined8 *)PTR_DAT_020036e8);
      }
      *(longlong *)PTR_DAT_020036e8 = lVar1;
    }
  }
  return;
}

