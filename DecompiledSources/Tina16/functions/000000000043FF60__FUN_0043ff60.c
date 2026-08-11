/* Ghidra address: 0043ff60 */
/* Ghidra symbol: FUN_0043ff60 */


void FUN_0043ff60(undefined8 param_1,undefined1 *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  double local_20 [2];
  
  cVar1 = FUN_004486e0(param_1,local_20);
  if (cVar1 == '\0') {
    FUN_0043fdb0();
    lVar2 = 0;
    if (DAT_0200c5d8 != 0) {
      lVar2 = *(longlong *)(DAT_0200c5d8 + -8);
    }
    cVar1 = FUN_0043ff00(auStack_48,DAT_0200c5d8,lVar2 + -1);
    if (cVar1 == '\0') {
      lVar2 = 0;
      if (DAT_0200c5e0 != 0) {
        lVar2 = *(longlong *)(DAT_0200c5e0 + -8);
      }
      cVar1 = FUN_0043ff00(auStack_48,DAT_0200c5e0,lVar2 + -1);
      if (cVar1 != '\0') {
        *param_2 = 0;
      }
    }
    else {
      *param_2 = 1;
    }
  }
  else {
    *param_2 = local_20[0] != 0.0;
  }
  return;
}

