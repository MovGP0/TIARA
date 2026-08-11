/* Ghidra address: 0065c230 */
/* Ghidra symbol: FUN_0065c230 */


void FUN_0065c230(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_007f9b70(param_1,1);
  if (lVar1 != 0) {
    lVar2 = FUN_0065c060(param_1,0,1,1,0);
    if (lVar2 == 0) {
      lVar2 = FUN_0065c060(param_1,0,1,0,0);
    }
    if (lVar2 != 0) {
      FUN_00801e40(lVar1,lVar2);
    }
  }
  return;
}

